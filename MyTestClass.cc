/*
 * MyTestClass.cc
 *
 *  Created on: Jul 14, 2016
 *      Author: someone
 */


#include "MyTestClass.h"


MyTestClass::MyTestClass()
: a(0)
{

}

void MyTestClass::set(int aa)
{
	a = aa;
}

int MyTestClass::get()
{
	return a;
}

MyTestClass::~MyTestClass()
{

}
