#include <stdlib.h>
#include <stdio.h>

int main() {

	//������ ����
	// �ڷ���* ������
	int* pInt = nullptr;

	//�ּҸ� ����
	char* pChar = nullptr;
	short* pShort = nullptr;

	//������ ������ ũ��� 8 ����Ʈ
	int iSize = sizeof(pInt);
	printf("%d \n",iSize);

	int i = 0; 
	pInt = &i; //�ּҰ� 100������� �ϸ�
	pInt += 1;  // 104����
	
	//pInt�� int* �����̱� ������, ����Ű�� ���� int�� �ؼ��Ѵ�.
	//���� �ּҰ��� 1 �����ϴ� �ǹ̴� ���� int ��ġ�� �����ϱ� ���ؼ� sizeof(int) ������ �����ϰ� �ȴ�.

	//�����Ϳ� �迭
	//�迭�� Ư¡
	// 1. �޸𸮰� �������� �����̴�.
	// 2. �迭�� �̸��� �迭�� ���� �ּ��̴�. 

	int iArr[10] = {};

	//int ������ ����
	*(iArr + 0) = 10; //iArr[0] = 10;
	*(iArr + 1) = 10; //iArr[1] = 10;

	
	return 0;
}