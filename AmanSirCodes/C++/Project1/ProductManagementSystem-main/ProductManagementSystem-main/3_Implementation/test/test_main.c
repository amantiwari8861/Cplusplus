/**
 * @file test_main.c
 * @author Aditi Iyer
 * @brief 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "op.h"
#include "unity.h"


void setUp()
{

}

void tearDown()
{

}

void test_price(void)
 {
 	int r1=1, sum=1000;
     TEST_ASSERT_EQUAL(1,price(r1));
     TEST_ASSERT_EQUAL(1,price(sum));
     TEST_ASSERT_EQUAL(1,price(r1));
     
 }

   
 
int main()
{
	 UNITY_BEGIN();
	 RUN_TEST(test_price);
	 return UNITY_END();
}


