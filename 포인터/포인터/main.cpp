#include <iostream>
using namespace std;
// 포인터 변수
// 주소를 저장하는 변수
// 자료형 + * 변수명
// 해당 포인터에게 전달된 주소를 해석하는 단위

int main() {
	//int* pInt = nullptr; //아무것도 가리키지 않는다
	int i = 100;
	float f = 3.f;
	int* pInt = (int*)&f;

	//주소로 접근
	//(*pInt) = 200;
	i = *pInt;
	cout << i << endl; //float를 int관점에서 읽음
	
	//주소의 단위(byte)



	return 0;
}