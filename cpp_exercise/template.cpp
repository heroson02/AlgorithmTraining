#include <iostream>

template <typename T>	//템플릿을 사용하는 함수를 템플릿 함수라고 하며, 템플릿을 사용하려면 함수 선언부 위에 템플릿을 선언해야함.
T add(T a, T b)
{
	T result;
	
	result = a + b;
	return (result);
}

int main()
{
	int test;
	int a_ = 5;
	int b_ = 2;

	test = add(a_, b_); //템플릿 인수가 int로 치환된다.
	std::cout << test << std::endl;
}

template <typename R>	//템플릿 클래스이다.
class Rectangle {
	public:
		T left;
		T width;

		T GetRight()
		{
			return left + width;
		}
};