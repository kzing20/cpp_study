#include <iostream>
using namespace std;
// ������ ����
// �ּҸ� �����ϴ� ����
// �ڷ��� + * ������
// �ش� �����Ϳ��� ���޵� �ּҸ� �ؼ��ϴ� ����

int main() {
	//int* pInt = nullptr; //�ƹ��͵� ����Ű�� �ʴ´�
	int i = 100;
	float f = 3.f;
	int* pInt = (int*)&f;

	//�ּҷ� ����
	//(*pInt) = 200;
	i = *pInt;
	cout << i << endl; //float�� int�������� ����
	
	//�ּ��� ����(byte)



	return 0;
}