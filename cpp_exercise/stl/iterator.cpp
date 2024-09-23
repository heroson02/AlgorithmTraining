#include <iostream>
#include <vector>

//STL의 각 컨테이너 오브젝트에 있는 iterator라는 클래스의 오브젝틀르 사용하면, 컨테이너 내부의 데이터에 동일한 방법으로 접근할 수 있다.

int main()
{
	std::vector<int> v1;

	v1.push_back(10);

	std::vector<int>::iterator it_first;
	std::vector<int>::iterator it_last;

	it_first = v1.begin();
	it_last = v1.end();
}