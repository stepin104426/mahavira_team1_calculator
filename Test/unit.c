#include "unity.h"
#include <header.h>
#include<test.h>

/* Modify these two lines according to the project */
#include <header.h>
#define PROJECT_NAME    "mahavira_team1_calculator"

/* Prototypes for all the test functions */

void test_subtract(void);

void test_factorial(void);

void test_calculate_power(void);

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
  
  RUN_TEST(test_subtract);
  
  RUN_TEST(test_factorial);
  
  RUN_TEST(test_calculate_power);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 


void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract_numbers(0, 3));
  TEST_ASSERT_EQUAL(-10, subtract_numbers(10, 20));
}

void test_factorial(void)
{
    TEST_ASSERT_EQUAL(6, factorial(3));
    TEST_ASSERT_EQUAL(120, factorial(5));
    TEST_ASSERT_EQUAL(5040, factorial(7));
}


void test_calculate_power(void)
{
  TEST_ASSERT_EQUAL(25, calculate_power(5, 2);
  TEST_ASSERT_EQUAL(1, calculate_power(2 0);
 }
