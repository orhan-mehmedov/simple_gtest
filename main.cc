/*
 * main.cpp
 *
 *  Created on: Jul 14, 2016
 *      Author: someone
 */

#include <iostream>
#include <gtest/gtest.h>

using namespace std;

using namespace ::testing;

int main(int argc, char* argv[])
{
	cout << "argc = " << argc << "argv[0] = " << argv[0] << endl;

	InitGoogleTest(&argc, argv);

	int res = RUN_ALL_TESTS();

	cout << "Result is " << res << endl;

	return 0;
}

