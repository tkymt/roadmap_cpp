// Cpp17.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <map>

int main()
{
	std::map<std::string, int>my_map = {};

	std::string key("One");
	if (auto it = my_map.find(key); it != my_map.end()) {

	}

	std::map<std::string, int>data;
	auto [iter, success] = data.emplace("example", 42);


}

inline int flobalVar = 0;

template<typename... Ts>
auto sum(Ts... ts) {
	return (ts + ...);
}

template<typename T>
auto get_value(T t) {
	if constexpr (std::is_pointer_v<T>) {
		return *t;
	}
	else {
		return t;
	}
}

struct MyStruct {};
MyStruct obj;
auto func = [x = std::move(obj)] {};

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
