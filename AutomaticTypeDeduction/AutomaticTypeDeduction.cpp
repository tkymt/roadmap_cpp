// AutomaticTypeDeduction.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <vector>

auto add(int x, int y) {
	return x + y;
}

int main()
{
// auto（自動型推論）
// autoキーワードは、使うと自動型推論で変数を宣言できる
	int myInt = 5;
	auto myAutoInt = 5;

	std::vector<int> myVector = { 1, 2, 3, 5, 5 };

	for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
		std::cout << *it << std::endl;
	}

	for (auto it = myVector.begin(); it != myVector.end(); ++it) {
		std::cout << *it << std::endl;
	}

	auto result = add(1, 1);
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
