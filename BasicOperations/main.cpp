int main() {
// �Z�p���Z�q
	// �����Z
	{
		int a = 5;
		int b = 6;
		int sum = a + b; // �a��11
	}

	// �����Z
	{
		int a = 10;
		int b = 6;
		int diff = a - b; // ����4
	}

	// �|���Z
	{
		int a = 3;
		int b = 4;
		int product = a * b; // �ς�12
	}

	// ����Z
	{
		int a = 15;
		int b = 4;
		int quotient = a / b; // ����3
	}

	// �]��Z
	{
		int a = 15;
		int b = 4;
		int remainder = a % b; // �]���3
	}

// ��r���Z�q
	// ����
	5 == 5; // true
	3 == 4; // false

	// �s����
	5 != 2; // true
	1 != 1; // false

	// ��Ȃ�
	5 > 3; // true
	2 > 3; // false

	// ���Ȃ�
	3 < 5; // true
	6 < 5; // false

	// �ȏ�
	5 >= 5; // true
	6 >= 2; // true
	3 >= 4; // false

	// �ȉ�
	4 <= 4; // true
	2 <= 3; // true
	5 <= 5; // false

// �_�����Z�q
	// �_����
	true && true; // true
	true && false; // false

	// �_���a
	true || true; // true
	false || false; // false

	// �_���ے�
	!true; // false
	!false; // ture
}