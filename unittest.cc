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

using namespace ::testing;

class MyTestClass_Test : public Test
{
protected:
	virtual void SetUp();
	virtual void TearDown();

	MyTestClass mtc1;
	MyTestClass mtc2;
};

void MyTestClass_Test::SetUp()
{
	//do some init
}

void MyTestClass_Test::TearDown()
{
	//do some deinit
}

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
	EXPECT_STREQ("ALABALA", "ALABALA") << "Are they equal?";
}

TEST(TestCaseTwo, TestingSomethingB)
{

}

TEST_F(MyTestClass_Test, InitialValueIsZero)
{
	EXPECT_EQ(0, mtc1.get());
}

TEST_F(MyTestClass_Test, TestSetGet)
{
	mtc1.set(42);
	EXPECT_EQ(42, mtc1.get());
}
