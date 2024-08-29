#include <iostream>
//복사 생성자

class Person
{
private:
	/* data */
public:
	Person(/* args */);
	Person(const Person &psn);
	~Person();
	Person operator=(Person &psn);
};

Person::Person(/* args */)
{
}

Person::Person(const Person &psn)
{
	std::cout << "복사 생성자 실행됨" << std::endl;
}

Person Person::operator=(Person &psn)
{
	std::cout << "대입 생성자 실행됨" << std::endl;
	return Person();
}

Person::~Person()
{
}


int main()
{
	Person psn1;

	//복사 생성자가 실행되는 경우
	Person psn2(psn1); //case 1
	Person psn3 = psn1; // case 2

	//이미 존재하는 오브젝트에 별도의 오브젝트를 대입하는 경우는 복사 생성자가 아닌 operator=()라는 대입 멤버 함수가 호출된다.
	Person psn4;
	psn4 = psn1;

}

/*

생성자는 우리가 설정하지 않아도 디폴트로 생성된다. 그러나, 기능적인 한계가 있기 때문에 우리가 직접 설정해야 한다.
복사 생성자는 클래스가 포인터 변수를 포함하고 있을 때 서로 같은 변수를 가리켜 한 쪽이 삭제되었을 때 문제가 발생할 수 있다.

*/