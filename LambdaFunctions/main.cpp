#include <iostream>

int main() {
	{
		// �ϐ��̃L���v�`���ƕԂ�l���Ȃ������_��
		auto printHello = []() {
			std::cout << "Hello, World!" << std::endl;
		};
		printHello();
	}
	{
		// �������󂯎�郉���_��
		auto add = [](int a, int b) {
			return a + b;
		};
		int result = add(3, 4); // ���ʂ� = 7
		std::cout << result << std::endl;
	}
	{
		// �ϐ��̃L���v�`��
		int multiplier = 3;
		auto times = [multiplier](int a) {
			return a * multiplier;
		};
		int result = times(5); // ���ʂ� = 15
		std::cout << result << std::endl;
	}
	{
		// �ϐ������t�@�����X�ŃL���v�`��
		int expiresInDays = 45;
		std::cout << "expiresInDays = " << expiresInDays << std::endl;
		auto updateDays = [&expiresInDays](int newDays) {
			expiresInDays = newDays;
		};
		updateDays(30); // expresInDays = 30;
		std::cout << "expiresInDays = " << expiresInDays << std::endl;
	}
	return 0;
}