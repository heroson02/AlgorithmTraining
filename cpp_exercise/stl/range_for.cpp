#include <iostream>
//C++11에 새로운 기능들이 여러 개 추가되었다.
int main()
{
	std::vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);

	for(std::vector<int>::iterator x=v1.begin(); x != v1.end(); x++)
	{
		std::cout << *x << std::endl;
	}
/*
	vector 오브젝트 등의 요소에 for문으로 접근하려면 iterator를 사용해서 위와 같이 접근해야 했다.
*/
}

void test()
{
	std::vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);

	for(int x: v1)	//이 상태에서는 vector 오브젝트의 요소는 변경할 수 없다. 그러나 &x로 변경하면 값을 변경할 수 있다.
	{
		std::cout << x << std::endl;
	}
/*
	범위 for문의 기능을 사용하면 이렇게 쉽게 사용할 수 있다. 
*/
}

void test2()
{
	std::vector<int> v1{10, 20, 30}; //push_back을 하지 않고 {}를 사용해서 간단하게 초기화 할 수 있다.
}