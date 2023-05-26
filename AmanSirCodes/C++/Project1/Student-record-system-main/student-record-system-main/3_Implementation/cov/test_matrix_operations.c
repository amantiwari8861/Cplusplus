        -:    0:Source:test/test_matrix_operations.c
        -:    0:Graph:test_matrix_operations.gcno
        -:    0:Data:-
        -:    0:Runs:0
        -:    0:Programs:0
        -:    1:#include "unity.h"
        -:    2:#include "matrix_operations.h"
        -:    3:
        -:    4:#define PROJECT_NAME    "Matrix Calculator"
        -:    5:
        -:    6:/* Prototypes for all the test functions */
        -:    7:
        -:    8:/**
        -:    9: * @brief Testing function for addition of 2 matrices
        -:   10: * 
        -:   11: */
        -:   12:void test_add_mat(void);
        -:   13:
        -:   14:/**
        -:   15: * @brief Testing function for subtraction of 2 matrices
        -:   16: * 
        -:   17: */
        -:   18:void test_sub_mat(void);
        -:   19:
        -:   20:/**
        -:   21: * @brief Testing function for multiplication of 2 matrices
        -:   22: * 
        -:   23: */
        -:   24:void test_mul_mat(void);
        -:   25:
        -:   26:/**
        -:   27: * @brief Testing function for finding determiant of matrix 
        -:   28: * 
        -:   29: */
        -:   30:void test_det_mat(void);
        -:   31:
        -:   32:/**
        -:   33: * @brief Testing function for finding inverse of a function
        -:   34: * 
        -:   35: */
        -:   36:void test_inv_mat(void);
        -:   37:
        -:   38:/**
        -:   39: * @brief To test the power function of (-1)^exp
        -:   40: * 
        -:   41: */
        -:   42:void test_pow(void);
        -:   43:
        -:   44:/**
        -:   45: * @brief Testing function for transpose of a matrix
        -:   46: * 
        -:   47: */
        -:   48:void test_transp_mat(void);
        -:   49:
        -:   50:
        -:   51:/* Required by the unity test framework */
    #####:   52:void setUp(){}
        -:   53:/* Required by the unity test framework */
    #####:   54:void tearDown(){}
        -:   55:
        -:   56:/* Start of the application test */
    #####:   57:int main()
        -:   58:{
        -:   59:/* Initiate the Unity Test Framework */
    #####:   60:  UNITY_BEGIN();
        -:   61:
        -:   62:/* Run Test functions */
    #####:   63:  RUN_TEST(test_add_mat);
    #####:   64:  RUN_TEST(test_sub_mat);
    #####:   65:  RUN_TEST(test_mul_mat);
    #####:   66:  RUN_TEST(test_pow);
    #####:   67:  RUN_TEST(test_det_mat);
    #####:   68:  RUN_TEST(test_inv_mat);
    #####:   69:  RUN_TEST(test_transp_mat);
        -:   70:
        -:   71:
        -:   72:  /* Close the Unity Test Framework */
    #####:   73:  return UNITY_END();
        -:   74:}
        -:   75:
        -:   76:/* Write all the test functions */ 
    #####:   77:void test_add_mat(void) {
        -:   78:
        -:   79:  float **test_mat1, **test_mat2;
    #####:   80:  test_mat1 = (float **)calloc(2,sizeof(float));
    #####:   81:  test_mat2 = (float **)calloc(2,sizeof(float));
    #####:   82:    for(int i=0;i<2;i++){
    #####:   83:        test_mat1[i] = (float *)calloc(2,sizeof(float));
    #####:   84:        test_mat2[i] = (float *)calloc(2,sizeof(float));
        -:   85:    }
        -:   86:
    #####:   87:  test_mat1[0][0] = 1;
    #####:   88:  test_mat1[0][1] = 2;
    #####:   89:  test_mat1[1][0] = 3;
    #####:   90:  test_mat1[1][1] = 4;
        -:   91:
    #####:   92:  test_mat2[0][0] = 1;
    #####:   93:  test_mat2[0][1] = 2;
    #####:   94:  test_mat2[1][0] = 3;
    #####:   95:  test_mat2[1][1] = 4;
        -:   96:
    #####:   97:  TEST_ASSERT_EQUAL(SUCCESS,add_matrices(test_mat1,test_mat2,2));
        -:   98:
        -:   99:
    #####:  100:  free(test_mat1);
    #####:  101:  free(test_mat2);
        -:  102:
    #####:  103:}
        -:  104:
    #####:  105:void test_sub_mat(void) {
        -:  106:
        -:  107:  float **test_mat1, **test_mat2;
    #####:  108:  test_mat1 = (float **)calloc(2,sizeof(float));
    #####:  109:  test_mat2 = (float **)calloc(2,sizeof(float));
    #####:  110:    for(int i=0;i<2;i++){
    #####:  111:        test_mat1[i] = (float *)calloc(2,sizeof(float));
    #####:  112:        test_mat2[i] = (float *)calloc(2,sizeof(float));
        -:  113:    }
        -:  114:
    #####:  115:  test_mat1[0][0] = 2;
    #####:  116:  test_mat1[0][1] = 3;
    #####:  117:  test_mat1[1][0] = 4;
    #####:  118:  test_mat1[1][1] = 6;
        -:  119:
    #####:  120:  test_mat2[0][0] = 1;
    #####:  121:  test_mat2[0][1] = 2;
    #####:  122:  test_mat2[1][0] = 3;
    #####:  123:  test_mat2[1][1] = 4;
        -:  124:
    #####:  125:  TEST_ASSERT_EQUAL(SUCCESS,subtract_matrices(test_mat1,test_mat2,2));
        -:  126:
        -:  127:
    #####:  128:  free(test_mat1);
    #####:  129:  free(test_mat2);
        -:  130:
    #####:  131:}
        -:  132:
    #####:  133:void test_mul_mat(void){
        -:  134:    float **test_mat1, **test_mat2;
    #####:  135:  test_mat1 = (float **)calloc(2,sizeof(float));
    #####:  136:  test_mat2 = (float **)calloc(2,sizeof(float));
    #####:  137:    for(int i=0;i<2;i++){
    #####:  138:        test_mat1[i] = (float *)calloc(2,sizeof(float));
    #####:  139:        test_mat2[i] = (float *)calloc(2,sizeof(float));
        -:  140:    }
        -:  141:
    #####:  142:  test_mat1[0][0] = 1;
    #####:  143:  test_mat1[0][1] = 2;
    #####:  144:  test_mat1[1][0] = 3;
    #####:  145:  test_mat1[1][1] = 4;
        -:  146:
    #####:  147:  test_mat2[0][0] = 1;
    #####:  148:  test_mat2[0][1] = 2;
    #####:  149:  test_mat2[1][0] = 3;
    #####:  150:  test_mat2[1][1] = 4;
        -:  151:
    #####:  152:  TEST_ASSERT_EQUAL(SUCCESS,product_matrices(test_mat1,test_mat2,2));
        -:  153:
        -:  154:
    #####:  155:  free(test_mat1);
    #####:  156:  free(test_mat2);
        -:  157:
    #####:  158:}
        -:  159:
        -:  160:
    #####:  161:void test_det_mat(void){
        -:  162:      
        -:  163:    float **test_mat1;
    #####:  164:    test_mat1 = (float **)calloc(2,sizeof(float));
    #####:  165:    for(int i=0;i<2;i++){
    #####:  166:        test_mat1[i] = (float *)calloc(2,sizeof(float));
        -:  167:    }
        -:  168:
    #####:  169:  test_mat1[0][0] = 5;
    #####:  170:  test_mat1[0][1] = 3;
    #####:  171:  test_mat1[1][0] = 5;
    #####:  172:  test_mat1[1][1] = 4;
        -:  173:
        -:  174:
    #####:  175:  TEST_ASSERT_EQUAL(5.0000,determinant(test_mat1,2));
        -:  176:
        -:  177:
    #####:  178:  free(test_mat1);
        -:  179:
        -:  180:
    #####:  181:}
        -:  182:
    #####:  183:void test_inv_mat(void){
        -:  184:  float **test_mat1;
    #####:  185:    test_mat1 = (float **)calloc(3,sizeof(float));
    #####:  186:    for(int i=0;i<3;i++){
    #####:  187:        test_mat1[i] = (float *)calloc(3,sizeof(float));
        -:  188:    }
        -:  189:
    #####:  190:  test_mat1[0][0] = 3;
    #####:  191:  test_mat1[0][1] = 5;
    #####:  192:  test_mat1[0][2] = 2;
    #####:  193:  test_mat1[1][0] = 1;
    #####:  194:  test_mat1[1][1] = 5;
    #####:  195:  test_mat1[1][2] = 8;
    #####:  196:  test_mat1[2][0] = 3;
    #####:  197:  test_mat1[2][1] = 9;
    #####:  198:  test_mat1[2][2] = 2;
        -:  199:
        -:  200:
    #####:  201:  TEST_ASSERT_EQUAL(SUCCESS,inverse(test_mat1,3));
        -:  202:
    #####:  203:  free(test_mat1);
        -:  204:
    #####:  205:}
        -:  206:
    #####:  207:void test_pow(void){
        -:  208:
        -:  209:
    #####:  210:  TEST_ASSERT_EQUAL(1,power(2));
    #####:  211:  TEST_ASSERT_EQUAL(-1,power(3));
        -:  212:
    #####:  213:}
        -:  214:
    #####:  215:void test_transp_mat(void){
        -:  216:    float **test_mat1;
    #####:  217:    test_mat1 = (float **)calloc(3,sizeof(float));
    #####:  218:    for(int i=0;i<3;i++){
    #####:  219:        test_mat1[i] = (float *)calloc(3,sizeof(float));
        -:  220:    }
        -:  221:
    #####:  222:  test_mat1[0][0] = 3;
    #####:  223:  test_mat1[0][1] = 5;
    #####:  224:  test_mat1[0][2] = 2;
    #####:  225:  test_mat1[1][0] = 1;
    #####:  226:  test_mat1[1][1] = 5;
    #####:  227:  test_mat1[1][2] = 8;
    #####:  228:  test_mat1[2][0] = 3;
    #####:  229:  test_mat1[2][1] = 9;
    #####:  230:  test_mat1[2][2] = 2;
        -:  231:
    #####:  232:TEST_ASSERT_EQUAL(SUCCESS,transpose(test_mat1,3));
        -:  233:
    #####:  234:free(test_mat1);
        -:  235:
    #####:  236:}
