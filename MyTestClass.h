/*
 * MyTestClass.h
 *
 *  Created on: Jul 14, 2016
 *  Author: Orhan Mehmedov
 */

#ifndef MYTESTCLASS_H_
#define MYTESTCLASS_H_

class MyTestClass
{
public:
	MyTestClass();
	void set(int aa);
	int get();
	~MyTestClass();
private:
	int a;
};

#endif /* MYTESTCLASS_H_ */
