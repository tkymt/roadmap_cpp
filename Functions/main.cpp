#include <iostream>
using namespace std;

// �Q�̐��l�𑫂��֐�
int addNumbers(int a, int b) {
	int sum = a + b;
	return sum;
}

// �֐��̃v���g�^�C�v�錾
int multiplyNumbers(int x, int y);

int main() {
	{
		int num1 = 5, num2 = 10;
		int result = addNumbers(num1, num2); // �֐����Ăяo��
		cout << "The sum is: " << result << endl;
	}
	{
		int num1 = 3, num2 = 7;
		int result = multiplyNumbers(num1, num2); // �֐����Ăяo��
		cout << "The product is: " << result << endl;
	}
	return 0;
}

// �֐���`
int multiplyNumbers(int x, int y) {
	int product = x * y;
	return product;
}