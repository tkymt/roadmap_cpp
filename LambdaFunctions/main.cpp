#include <iostream>

int main() {
	{
		// 変数のキャプチャと返り値がないラムダ式
		auto printHello = []() {
			std::cout << "Hello, World!" << std::endl;
		};
		printHello();
	}
	{
		// 引数を受け取るラムダ式
		auto add = [](int a, int b) {
			return a + b;
		};
		int result = add(3, 4); // 結果は = 7
		std::cout << result << std::endl;
	}
	{
		// 変数のキャプチャ
		int multiplier = 3;
		auto times = [multiplier](int a) {
			return a * multiplier;
		};
		int result = times(5); // 結果は = 15
		std::cout << result << std::endl;
	}
	{
		// 変数をリファレンスでキャプチャ
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