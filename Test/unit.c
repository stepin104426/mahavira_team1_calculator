#include "unity.h"
#include <header.h>
#include<test.h>

/* Modify these two lines according to the project */
#include <header.h>
#define PROJECT_NAME    "arya_calc"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_factorial(void);
void test_modulus(void);
void test_exp(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int test_main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_factorial);
  RUN_TEST(test_modulus);
  RUN_TEST(test_exp);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add_numbers(10, 20));
  TEST_ASSERT_EQUAL(400, add_numbers(200, 200));
  TEST_ASSERT_EQUAL(42, add_numbers(32, 10));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract_numbers(0, 3));
  TEST_ASSERT_EQUAL(-10, subtract_numbers(10, 20));
  TEST_ASSERT_EQUAL(30, add_numbers(50, 20));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply_numbers(1, 0));
  TEST_ASSERT_EQUAL(100, multiply_numbers(10, 10));
  TEST_ASSERT_EQUAL(35, multiply_numbers(-7, -5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(90, divide(900, 10));
  TEST_ASSERT_EQUAL(0, divide(3, 0));
  TEST_ASSERT_EQUAL(9, divide(80, 10));
}

void test_factorial(void)
{
    TEST_ASSERT_EQUAL(6, factorial(3));
    TEST_ASSERT_EQUAL(1, factorial(0));
    TEST_ASSERT_EQUAL(1, factorial(1));
    TEST_ASSERT_EQUAL(22, factorial(4));
}
void test_modulus(void)
{
    TEST_ASSERT_EQUAL(6, modulus(60, 10));
    TEST_ASSERT_EQUAL(5, modulus(35, 6));
    TEST_ASSERT_EQUAL(2, modulus(43, 7));
}

void test_exp(void)
{
  TEST_ASSERT_EQUAL(9, exponential(3, 2);
  TEST_ASSERT_EQUAL(1, exponential(10, 0);
 }
