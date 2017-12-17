#include <iostream>

template <typename T>
inline T const& max(T const&a, T const& b)
{
	return a < b ? b : a;
}

int main(void)
{
	int a = 5;
	int b = 6;
	float c = 1.5;
	float d = 1.7;
	std::string str1 = "abc";
	std::string str2 = "aac";

	std::cout <<  "The larger of " << a << " and " << b << " is " << ::max(a,b) <<  std::endl;
	std::cout <<  "The larger of " << c << " and " << d << " is " << ::max(c,d) <<  std::endl;
	std::cout <<  "The larger of " << str1 << " and " << str2 << " is " << ::max(str1,str2) <<  std::endl;
	//std::cout <<  "The larger of " << a  << " and " << c << " is " << ::max(a,c) <<  std::endl;
}
