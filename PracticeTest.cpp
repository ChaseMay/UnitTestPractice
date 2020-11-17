/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

//isPalindrome tests

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_symbol_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome("$$$%%%");
	ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_same_letter_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome("a");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_same_number_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome("9");
	ASSERT_TRUE(actual);
}

//sortDescending Tests

TEST(sortDescending, is_descending_order)
{
	Practice obj;
	int first(1), second(2), third(3);
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_TRUE(actual);
}

TEST(sortDescending, is_same_number_descending_order)
{
	Practice obj;
	int first(2), second(3), third(3);
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_FALSE(actual);
}

TEST(sortDescending, is_descending_order_big_numbers)
{
	Practice obj;
	int first(994323232), second(2521353), third(17);
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_TRUE(actual);
}

TEST(sortDescending, is_acsending_order_big_numbers)
{
	Practice obj;
	int first(7384), second(938472), third(63028496);
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_TRUE(actual);
}
