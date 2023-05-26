#include "unity.h"
#include "matrix_operations.h"

#define PROJECT_NAME    "Matrix Calculator"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for addition of 2 matrices
 * 
 */
void test_add_mat(void);

/**
 * @brief Testing function for subtraction of 2 matrices
 * 
 */
void test_sub_mat(void);

/**
 * @brief Testing function for multiplication of 2 matrices
 * 
 */
void test_mul_mat(void);

/**
 * @brief Testing function for finding determiant of matrix 
 * 
 */
void test_det_mat(void);

/**
 * @brief Testing function for finding inverse of a function
 * 
 */
void test_inv_mat(void);

/**
 * @brief To test the power function of (-1)^exp
 * 
 */
void test_pow(void);

/**
 * @brief Testing function for transpose of a matrix
 * 
 */
void test_transp_mat(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add_mat);
  RUN_TEST(test_sub_mat);
  RUN_TEST(test_mul_mat);
  RUN_TEST(test_pow);
  RUN_TEST(test_det_mat);
  RUN_TEST(test_inv_mat);
  RUN_TEST(test_transp_mat);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add_mat(void) {

  float **test_mat1, **test_mat2;
  test_mat1 = (float **)calloc(2,sizeof(float));
  test_mat2 = (float **)calloc(2,sizeof(float));
    for(int i=0;i<2;i++){
        test_mat1[i] = (float *)calloc(2,sizeof(float));
        test_mat2[i] = (float *)calloc(2,sizeof(float));
    }

  test_mat1[0][0] = 1;
  test_mat1[0][1] = 2;
  test_mat1[1][0] = 3;
  test_mat1[1][1] = 4;

  test_mat2[0][0] = 1;
  test_mat2[0][1] = 2;
  test_mat2[1][0] = 3;
  test_mat2[1][1] = 4;

  TEST_ASSERT_EQUAL(SUCCESS,add_matrices(test_mat1,test_mat2,2));


  free(test_mat1);
  free(test_mat2);

}

void test_sub_mat(void) {

  float **test_mat1, **test_mat2;
  test_mat1 = (float **)calloc(2,sizeof(float));
  test_mat2 = (float **)calloc(2,sizeof(float));
    for(int i=0;i<2;i++){
        test_mat1[i] = (float *)calloc(2,sizeof(float));
        test_mat2[i] = (float *)calloc(2,sizeof(float));
    }

  test_mat1[0][0] = 2;
  test_mat1[0][1] = 3;
  test_mat1[1][0] = 4;
  test_mat1[1][1] = 6;

  test_mat2[0][0] = 1;
  test_mat2[0][1] = 2;
  test_mat2[1][0] = 3;
  test_mat2[1][1] = 4;

  TEST_ASSERT_EQUAL(SUCCESS,subtract_matrices(test_mat1,test_mat2,2));


  free(test_mat1);
  free(test_mat2);

}

void test_mul_mat(void){
    float **test_mat1, **test_mat2;
  test_mat1 = (float **)calloc(2,sizeof(float));
  test_mat2 = (float **)calloc(2,sizeof(float));
    for(int i=0;i<2;i++){
        test_mat1[i] = (float *)calloc(2,sizeof(float));
        test_mat2[i] = (float *)calloc(2,sizeof(float));
    }

  test_mat1[0][0] = 1;
  test_mat1[0][1] = 2;
  test_mat1[1][0] = 3;
  test_mat1[1][1] = 4;

  test_mat2[0][0] = 1;
  test_mat2[0][1] = 2;
  test_mat2[1][0] = 3;
  test_mat2[1][1] = 4;

  TEST_ASSERT_EQUAL(SUCCESS,product_matrices(test_mat1,test_mat2,2));


  free(test_mat1);
  free(test_mat2);

}


void test_det_mat(void){
      
    float **test_mat1;
    test_mat1 = (float **)calloc(2,sizeof(float));
    for(int i=0;i<2;i++){
        test_mat1[i] = (float *)calloc(2,sizeof(float));
    }

  test_mat1[0][0] = 5;
  test_mat1[0][1] = 3;
  test_mat1[1][0] = 5;
  test_mat1[1][1] = 4;


  TEST_ASSERT_EQUAL(5.0000,determinant(test_mat1,2));


  free(test_mat1);


}

void test_inv_mat(void){
  float **test_mat1;
    test_mat1 = (float **)calloc(3,sizeof(float));
    for(int i=0;i<3;i++){
        test_mat1[i] = (float *)calloc(3,sizeof(float));
    }

  test_mat1[0][0] = 3;
  test_mat1[0][1] = 5;
  test_mat1[0][2] = 2;
  test_mat1[1][0] = 1;
  test_mat1[1][1] = 5;
  test_mat1[1][2] = 8;
  test_mat1[2][0] = 3;
  test_mat1[2][1] = 9;
  test_mat1[2][2] = 2;


  TEST_ASSERT_EQUAL(SUCCESS,inverse(test_mat1,3));

  free(test_mat1);

}

void test_pow(void){


  TEST_ASSERT_EQUAL(1,power(2));
  TEST_ASSERT_EQUAL(-1,power(3));

}

void test_transp_mat(void){
    float **test_mat1;
    test_mat1 = (float **)calloc(3,sizeof(float));
    for(int i=0;i<3;i++){
        test_mat1[i] = (float *)calloc(3,sizeof(float));
    }

  test_mat1[0][0] = 3;
  test_mat1[0][1] = 5;
  test_mat1[0][2] = 2;
  test_mat1[1][0] = 1;
  test_mat1[1][1] = 5;
  test_mat1[1][2] = 8;
  test_mat1[2][0] = 3;
  test_mat1[2][1] = 9;
  test_mat1[2][2] = 2;

TEST_ASSERT_EQUAL(SUCCESS,transpose(test_mat1,3));

free(test_mat1);

}
