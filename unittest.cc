/*
 * unittest.cc
 *
 *  Created on: Jul 14, 2016
 *      Author: someone
 */

//usually product code under testing will
//be some other lib... located in other folder...
//here it is part of the test project
#include "MyTestClass.h"

#include <gtest/gtest.h>

MyTestClass mt;

TEST(TestCaseOne, TestingSomethingA)
{
	EXPECT_EQ(1, 0) << "This will fail!";

}

TEST(TestCaseOne, TestingSomethingB)
{
	SUCCEED();
	ASSERT_STRNE("AAA", "AAA");
}

TEST(TestCaseTwo, TestingSomethingA)
{
	EXPECT_STREQ("ALABALA", "ALABALA") << "Is they equal?";
}

TEST(TestCaseTwo, TestingSomethingB)
{

}