#include <iostream>

class Food
{
	public:
		int price;
};

class Fruit : public Food //어떤 클래스를 상속받아 파생 클래스를 만들기 위해서는 클래스명 뒤에 {public : 기본 클래스명}을 기술한다.
{
	public:
		int code;
};

//파생 클래스의 멤버는 '자신의 멤버 + 기본 클래스의 멤버'이다.
//기본 클래스의 멤버가 public, protected일 때는 파생 클래스에서 접근할 수 있고, private일 때는 접근할 수 없다.

class Apple : public Fruit, public Food
{
};

//복수의 기본 클래스로부터 하나의 파생 클래스를 만들 수 있으며, 이것을 다중 상속이라고 한다.
