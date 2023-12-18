// Containers.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <unordered_map>

int main()
{
	// 動的配列
	std::vector<int>vec = { 1,2,3,4,5 };
	vec.push_back(6);

	std::cout << "Vector contains: ";
	for (int x : vec) {
		std::cout << ' ' << x;
	}
	std::cout << std::endl;

	// 双方向リスト
	std::list<int>lst = { 1,2,3,4,5 };
	lst.push_back(6);

	std::cout << "List contains:";
	for (int x : lst) {
		std::cout << ' ' << x;
	}
	std::cout << std::endl;

	// 辞書・連想配列
	std::map<std::string, int>m;

	m["one"] = 1;
	m["two"] = 2;

	std::cout << "Map contains:" << std::endl;
	for (const auto& pair : m) {
		std::cout << pair.first << ": " << pair.second << std::endl;
	}

	// 順序付けされていない辞書・連想配列
	std::unordered_map<std::string, int>um;

	um["one"] = 1;
	um["two"] = 2;

	std::cout << "Unordered map contains:" << std::endl;
	for (const auto& pair : um) {
		std::cout << pair.first << ": " << pair.second << std::endl;
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
