// �ּ�
// ���� ����, �ڵ�� �νĵ��� �ʴ´�.
int main() {
	
	// �ڷ���(ũ�� ����, byte)
	// ������: char(1), short(2), int(4), long(4), long long(8)
	// �Ǽ���: float(4), double(8)


	//int: �ڷ���
	//i : ������
	int i = 0;

	//1����Ʈ�� ����� ǥ��
	//256���� -> 0~255
	unsigned char c = 0; //���� ����

	c = 0;
	c = 255;
	
	// 1����Ʈ�� ���, ���� �Ѵ� ǥ��
	// -128 ~ 0 ~ 127
	char c1 = 0;
	c1 = -1;

	// ���� ���� ã��(2�� ������)
	// �����Ǵ� ����� ��ȣ�� ���� ��, 1�� ���Ѵ�.

	int a = 4 + int(4.0);

	// ����ǥ�� ��İ� �Ǽ� ǥ�� ����� �ٸ���
	// �Ǽ� ǥ������� ���е��� �����Ѵ�.
	// ���� double(8) �ڷ����� float(4) ���� �� �Ʒ��� �Ҽ������� ��Ȯ�ϰ� ǥ�� �����ϴ�

	//������ ��������, �Ǽ��� �Ǽ����� �����ϵ�, �� ǥ������� �� �����ڰ� ����� ��� ���������� ��ȯ����
	float f = 10.2415f + float(20);

	//�Ǽ��� ����� ���� ��� �Ҽ��� �ڿ� f�� ���̸� float �ڷ�������, f�� ������ ������ double�ڷ������� ����
	//0.1f; 0.1;

	//������
	// ���� ������, =
	
	//��� ������
	// +, -, *, /, %(��ⷯ��, ������)
	// ++, -- (���� ������)
	// �� �ܰ� ���� �Ǵ� ����
	int data = 10 + 10;
	//data = data + 20;
	data += 20;

	data = 10 / 3;
	data = (int)(10.f / 3.f);

	data = 0;
	++data; //����(��ġ)
	data++; //����(��ġ)
	
	//���� �����ڷ� ����ϴ� ���, ������ �켱������ ���� �������� �и���. 

	a = 0;
	data = a++; //data���� 10�� ����
	//data = ++a; data���� 11�� ����

	//���� ������
	// !(��), &&(��), ||(��)
	//��(true), ����(false)
	// ��   : 0 �� �ƴ� ��, 1
	// ���� : 0
	int truefalse = true; // 1
	true;
	false;

	bool truefalse = false;
	bool IsTrue = 100; // 1

	IsTrue = true;
	IsTrue = !IsTrue;

	int iTrue = 0;
	iTrue = !iTrue;  // 1 


	iTrue = 100 && 200; // 1(�Ѵ� ���̸� 1)

	iTrue = 0 || 300; // 1(���� �ϳ��� ���̸� 1)

	//�� ������
	// ==, !=, <, >, <=, >=
	// ��, ����


	//����
	//if, else
	// switch case
	data = 0;
	
	if (0 && 200)
	{
		data = 100;

	}
	if (data == 100) {
		//if�� ���� ��� ����
	}
	else
	{
		//if�� ������ ��� ����
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

	//���� ������
	// :?
	int iTest = 20;

	iTest == 20 ? iTest = 100 : iTest = 200;
	
	// ���� �ǹ�
	if (iTest == 20)
	{
		iTest = 100;
	}
	else
	{
		iTest = 200;
	}

	//��Ʈ ������
	// ����Ʈ <<, >>
	unsigned char byte = 1;
	byte <<= 1; //���� �� ���� 2�� ����(2^n ���)
	// byte = byte << 1;
	byte >>= 1; //���� ������ ���� �پ��(2^n ���� ��)
	// Ȧ���� ��� �� ����

	// ��Ʈ ��, ��, xor





	return 0;
}