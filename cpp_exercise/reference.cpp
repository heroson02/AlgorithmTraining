#include <iostream>

int main()
{
	int num;
	int &newnum = num;
	//레퍼런스(참조)를 사용하면 참조 대상이 되는 변수명이나 별명으로도 동일하게 액세스할 수 있다.
	//한 쪽 값을 변경하면 나머지 한 쪽도 변경된다.
}

double AddNum(double &a, double &b)
{
	return a + b;
}
/*
함수의 인수를 참조로 선언하면, 안정성과 성능 측면에서 이점이 있다.

1. 인수를 일반적인 형태로 전달받는다면, 변수의 복사본을 인수로 받아오게 된다. 이 과정에서 리소스 소모가 크다.
	반대로 레퍼런스로 받는다면, 복사본을 만들지 않기 떄문에 성능 저하가 일어나지 않는다.
2. 레퍼런스는 NULL이 될 수 없다. 그래서 선언하는 동시에 값을 넣어줘야 한다.
	NULL이 되지 않기 떄문에 굳이 체크를 할 필요가 없으며, 에러가 발생할 확률도 줄어든다.

- 여기에 추가적으로 const를 사용해서 실제 값의 수정이 일어나지 않게 방지하는 방법도 사용한다.
*/
