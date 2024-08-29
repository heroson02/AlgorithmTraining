#include <iostream>
//iostream에는 여러 입력 출력 관련 함수들이 있다.

int main()
{
	std::cout << "Hello World!" << std::endl;
	//cout은 '표준 출력 스트림'이며, 출력 스트림 연산자인 <<를 통해 문자를 보내 출력할 수 있다.

	int input;

	std::cin >> input;
	//반대로 cin은 '표준 입력 스트림'이며, 입력 스트림 연산자인 >>를 통해 문자를 입력받을 수 있다.
	std::cout << "입력받은 숫자는 " << input << " 입니다." << std::endl;

	//cin을 사용하면, 1문자가 스페이스나 탭으로 구분되어 저장되기 때문에, 스페이스를 인식하지 못한다.
	//따라서 스페이스를 포함하는 한 줄을 저장하기 위해서는 cin.getline()를 사용한다.
}