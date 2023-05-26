/**
 * @file matrix_operations.h
 * @brief A program to calculate various operations on a matrix
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __MATRIX_OPERATIONS_H__
#define __MATRIX_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>


/**
 * @brief Enum for success or failure of test case
 * 
 */
typedef enum{SUCCESS=1,FAILURE=0}error_t;

/**
 * @brief A structure containing matrix elements
 * 
 */
typedef struct{

float **matrix_1;
float **matrix_2;
float result;

}mat;

/**
 * @brief A function to allocate memory dynamically for the matrix to be inputted
 * 
 * @param matrix 
 * @param n 
 * @return float** 
 */
float ** alloc_input_matrix(float **matrix, int n);

/**
 * @brief Dynamically allocate memory for matrix
 * 
 * @param matrix 
 * @param n 
 */
void dynamic_alloc_mat(float **matrix,int n);

/**
 * @brief To print the matrix on the screen
 * 
 * @param matrix 
 * @param n 
 */
void output_matrix(float **matrix,int n);

/**
 * @brief Free dynamically allocated memory space
 * 
 * @param m 
 */
void free_matrix_structure(mat *m);

/**
 * @brief 
 * 
 * @param matrix1 
 * @param matrix2 
 * @param n 
 * @return error_t 
 */
error_t add_matrices(float **matrix1,float **matrix2,int n);

/**
 * @brief To find the difference of the matrices
 * 
 * @param matrix1 
 * @param matrix2 
 * @param n 
 * @return error_t 
 */
error_t subtract_matrices(float **matrix1,float **matrix2, int n);
/**
 * @brief To find the product of the matrices
 * 
 * @param matrix1 
 * @param matrix2 
 * @param n 
 * @return error_t
 */
error_t product_matrices(float **matrix1,float **matrix2, int n);
/**
 * @brief To find the determinant of the matrix
 * 
 * @param matrix 
 * @return float 
 */
float determinant(float **matrix,int k);

/**
 * @brief To find the transpose of a matrix
 * 
 * @param matrix 
 * @param n 
 * @return error_t
 */
error_t transpose(float **matrix,int n);

/**
 * @brief To find the inverse of a matrix
 * 
 * @param num 
 * @param f 
 * @return error_t 
 */
error_t inverse(float **num, int f);

/**
 * @brief Power of minus one
 * 
 * @param exp 
 * @return float 
 */
float power(int exp);



#endif  /* #define __MATRIX_OPERATIONS_H__ */
