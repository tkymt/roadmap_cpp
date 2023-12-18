// Multithreading.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <thread>
#include <mutex>


void my_function() {
	std::cout << "This function is executing in a separate thread" << std::endl;
}

void print_sum(int a, int b) {
	std::cout << "The sum is: " << a + b << std::endl;
}

std::mutex mtx;

void print_block(int n, char c) {

	std::unique_lock<std::mutex>locker(mtx);
	for (int i = 0; i < n; ++i) {
		std::cout << c;
	}
	std::cout << std::endl;
}

int main()
{
	{
		std::thread t(my_function);
		t.join(); // スレッドの完了を待つ
	}

	{
		// 引数付きスレッド
		std::thread t(print_sum, 3, 5);
		t.join();
	}

	{
		// ミューテックスとロック
		std::thread t1(print_block, 50, '*');
		std::thread t2(print_block, 50, '$');

		t1.join();
		t2.join();
	}
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
