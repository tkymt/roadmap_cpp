#include <iostream>
using namespace std;

// ２つの数値を足す関数
int addNumbers(int a, int b) {
	int sum = a + b;
	return sum;
}

// 関数のプロトタイプ宣言
int multiplyNumbers(int x, int y);

int main() {
	{
		int num1 = 5, num2 = 10;
		int result = addNumbers(num1, num2); // 関数を呼び出す
		cout << "The sum is: " << result << endl;
	}
	{
		int num1 = 3, num2 = 7;
		int result = multiplyNumbers(num1, num2); // 関数を呼び出す
		cout << "The product is: " << result << endl;
	}
	return 0;
}

// 関数定義
int multiplyNumbers(int x, int y) {
	int product = x * y;
	return product;
}