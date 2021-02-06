#include "unity.h"
#include "square.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_square(void)
{
  TEST_ASSERT_EQUAL(25, square(5));
  TEST_ASSERT_EQUAL(100, factorial(10));
}
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(1, square(0));
  TEST_ASSERT_EQUAL(1, square(1));
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(-1, square(-5));
  TEST_ASSERT_EQUAL(-1, square(-10));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_square);
  RUN_TEST(test_zero_one);
  RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}