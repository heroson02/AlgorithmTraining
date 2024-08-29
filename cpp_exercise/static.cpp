#include <iostream>

class Food
{
	static int core;
	//정적 멤버 변수를 사용하면, 복수의 오브젝트에서 공통된 값을 가진다. 메모리를 절약하는 효과를 가진다.
	//정적 멤버 변수의 초기화는 cpp 파일 중 한번만 일어나며, 생성자에서 초기화하지 말자.
};
