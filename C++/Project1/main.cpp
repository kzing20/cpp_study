// 주석
// 설명 역할, 코드로 인식되지 않는다.
int main() {
	
	// 자료형(크기 단위, byte)
	// 정수형: char(1), short(2), int(4), long(4), long long(8)
	// 실수형: float(4), double(8)


	//int: 자료형
	//i : 변수명
	int i = 0;

	//1바이트로 양수만 표현
	//256가지 -> 0~255
	unsigned char c = 0; //양의 정수

	c = 0;
	c = 255;
	
	// 1바이트로 양수, 음수 둘다 표현
	// -128 ~ 0 ~ 127
	char c1 = 0;
	c1 = -1;

	// 음의 정수 찾기(2의 보수법)
	// 대응되는 양수의 부호를 반전 후, 1을 더한다.

	int a = 4 + int(4.0);

	// 정수표현 방식과 실수 표현 방식은 다르다
	// 실수 표현방식은 정밀도에 의존한다.
	// 따라서 double(8) 자료형이 float(4) 보다 더 아래의 소수점까지 정확하게 표현 가능하다

	//정수는 정수끼리, 실수는 실수끼리 연산하되, 두 표현방식의 피 연산자가 연산될 경우 명시적으로 변환하자
	float f = 10.2415f + float(20);

	//실수를 상수로 적을 경우 소수점 뒤에 f를 붙이면 float 자료형으로, f를 붙이지 않으면 double자료형으로 간주
	//0.1f; 0.1;

	//연산자
	// 대입 연산자, =
	
	//산술 연산자
	// +, -, *, /, %(모듈러스, 나머지)
	// ++, -- (증감 연산자)
	// 한 단계 증가 또는 감소
	int data = 10 + 10;
	//data = data + 20;
	data += 20;

	data = 10 / 3;
	data = (int)(10.f / 3.f);

	data = 0;
	++data; //전위(전치)
	data++; //후위(후치)
	
	//후위 연산자로 사용하는 경우, 연산자 우선순위가 가장 나중으로 밀린다. 

	a = 0;
	data = a++; //data에는 10이 저장
	//data = ++a; data에는 11이 저장

	//논리 연산자
	// !(역), &&(곱), ||(합)
	//참(true), 거짓(false)
	// 참   : 0 이 아닌 값, 1
	// 거짓 : 0
	int truefalse = true; // 1
	true;
	false;

	bool truefalse = false;
	bool IsTrue = 100; // 1

	IsTrue = true;
	IsTrue = !IsTrue;

	int iTrue = 0;
	iTrue = !iTrue;  // 1 


	iTrue = 100 && 200; // 1(둘다 참이면 1)

	iTrue = 0 || 300; // 1(둘중 하나라도 참이면 1)

	//비교 연산자
	// ==, !=, <, >, <=, >=
	// 참, 거짓


	//구문
	//if, else
	// switch case
	data = 0;
	
	if (0 && 200)
	{
		data = 100;

	}
	if (data == 100) {
		//if가 참인 경우 수행
	}
	else
	{
		//if가 거짓인 경우 수행
	}

	if(data==100) {
	}
	else if (100) {
	}
	else {
	}

	switch (10) {
	case 10:
		break;

	case 20:
		break;

	default:
		break;
	}

	//삼항 연산자
	// :?
	int iTest = 20;

	iTest == 20 ? iTest = 100 : iTest = 200;
	
	// 같은 의미
	if (iTest == 20)
	{
		iTest = 100;
	}
	else
	{
		iTest = 200;
	}

	return 0;
}