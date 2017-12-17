#include <iostream>

template<typename RT, typename T1, typename T2>
inline RT max (T1 const& a, T2 const&b)
{
	return a < b ? b : a;
}

int main (void)
{
	int a = 5;
	int b = 6;
	float c = 1.2;
	float d = 1.3;

	std::cout << "the larger of " << a << " and " << b << " is " << ::max<int>(a,b) << std::endl;
	std::cout << "the larger of " << c << " and " << d << " is " << ::max<int>(c,d) << std::endl;
}
