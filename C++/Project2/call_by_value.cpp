//call by value ��

#include <stdio.h>
int sum(int x, int y);
int main(void) {
	int a = 2, b = 5, c = 0;
	printf("sum() ȣ�� �� a=%d b=%d c=%d\n", a, b, c);
	c = sum(a, b);
	printf("sum() ȣ�� �� a=%d b=%d c=%d\n", a, b, c);
	return 0;
}
int sum(int a, int b) {

	a = a + 2;
	b = b + 5;
	printf("sum() �Լ� �� a=%d b=%d c=%d\n", a, b, a + b);

	return(a + b);
}