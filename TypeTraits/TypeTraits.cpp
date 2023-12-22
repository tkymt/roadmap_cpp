// TypeTraits.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <type_traits>

template<typename T>
typename std::enable_if<std::is_arithmetic<T>::value, T>::type find_max(T a, T b) {
	return a > b ? a : b;
}

int main()
{
	// トレイト
	int a;
	int* a_ptr = &a;

	std::cout << "Is 'a' a pointer? " << std::boolalpha << std::is_pointer<decltype(a)>::value << std::endl;
	std::cout << "Is 'a_ptr' a pointer? " << std::boolalpha << std::is_pointer<decltype(a_ptr)>::value << std::endl;

	// トレイトの構成
	int max = find_max(10, 20);
	std::cout << "Max: " << max << std::endl;
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
