// Cpp0x.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <vector>
#include <thread>

template <typename... Args>
void printArgs(Args... args) {

}

void my_function() {

}

int main()
{
	auto i = 42;
	auto s = "hello";

	std::vector<int> vec = { 1,2,3 };
	for (int i : vec) {
		std::cout << i << std::endl;
	}

	auto add = [](int a, int b) {return a + b; };
	int result = add(3, 4);

	int* p = nullptr;

	std::string str1 = "hello";
	std::string str2 = std::move(str1);

	static_assert(sizeof(int) == 4, "This code requires int to be 4 bytes.");

	std::thread t(my_function);
	t.join();
}


// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
