#include <iostream>

enum Colors {Red, Green, Blue, Black}; //enum의 값은 0,1,2,3으로 늘어나는 정수가 된다.
enum Books {English = 20, Math, Art = 50, Music}; //임의의 수를 지정하면 그 수에서부터 1씩 증가하는 정수가 된다.

//enum 내부의 요소들은 원래는 이름이 겹치면 안되지만, enum class를 사용하면 겹쳐도 요소의 범위가 enum 내부에 한정되어 컴파일이 가능하다.

int main()
{
	//enum의 요소는 각각 변수로서 활용되기 때문에 enum 바깥에서도 접근 가능하다.
	std::cout << Red << ", " << Green << std::endl;
	std::cout << Math << ", " << Music << std::endl;
}