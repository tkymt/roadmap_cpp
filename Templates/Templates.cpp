// Templates.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <string>
#include <iostream>
template<typename T>
T max(T a, T b) {
	return (a > b) ? a : b;
}

template<typename T1,typename T2>
class Pair {
public:
	T1 first;
	T2 second;
	Pair(T1 first,T2 second):first(first),second(second){}
};


template<>
class Pair<char, char> {
public:
	char first;
	char second;

	Pair(char first, char second) :first(first), second(second) {
		// 文字を大文字にする特別な振る舞い
		this->first = std::toupper(this->first);
		this->second = std::toupper(this->second);
	}
};

int main()
{
	{
		int result = max<int>(10, 20);
	}

	{
		// コンパイラに型を推測させる
		auto result = max(10, 20);
	}

	{
		// テンプレートクラス
		Pair<int, std::string>pair(1, "Hello");
	}

	{
		Pair<char, char>pair('a','b');
		std::cout << pair.first << pair.second << std::endl;
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
