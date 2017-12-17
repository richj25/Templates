/*
 * overloaded_templates.cpp
 *
 *  Created on: Dec 2, 2015
 *      Author: richj
 */

#include <iostream>

int max(int a, int b)
{
	std::cout << "non template function" << std::endl;
	return a < b ? b : a;
}

template <typename T>
inline T const max(T const a, T const b)
{
	std::cout << "template function" << std::endl;
	return a < b ? b : a;
}

template <typename T>
inline T const max(T const a, T const b, T const c)
{
	return ::max(::max(a,b), c);
}

int main()
{
	int a = 3;
	int b = 5;
	int c = 7;
	std::string str1 = "abc";
	std::string str2 = "bcd";

	std::cout << "The larger of " << a << " and " << b << " is " << ::max(a,b) << std::endl;
	std::cout << "The larger of " << b << " and " << c << " is " << ::max(b,c) << std::endl;
	std::cout << "The larger of " << a << " and " << b << " and " << c << " is " << ::max(a,b,c) << std::endl;
	std::cout << "The larger of " << str1 << " and " << str2 << " is " << ::max(str1,str2) << std::endl;
}

