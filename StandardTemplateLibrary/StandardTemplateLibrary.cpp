// StandardTemplateLibrary.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>

int main()
{
	// シーケンスコンテナ
	std::vector<int> my_vector{ 1,2,3,4,5 };
	std::list<int> my_list{ 1,2,3,4,5 };
	std::deque<int> my_deque{ 1,2,3,4,5 };

	// 連想コンテナ
	std::set<int> my_set{ 1,2,3,4,5,6 };
	std::map<std::string, int> my_map{ {"One",1},{"Two",2},{"Three",3} };
	
	// 順序付けされていない連想コンテナー
	std::unordered_set<int> my_unordered_set{ 2,1,3 };
	std::unordered_map <std::string,int> my_unordered_map{ {"Two", 2}, { "One",1 }, { "Three",3 } };
	
	// コンテナアダプタ
	std::stack<int> my_stack;
	my_stack.push(1); my_stack.push(2); my_stack.push(3);
	std::queue<int> my_queue;
	my_queue.push(1); my_queue.push(2); my_queue.push(3);
	std::priority_queue<int>my_priority_queue;
	my_priority_queue.push(1); my_priority_queue.push(2); my_priority_queue.push(3);


	{
		// ソートアルゴリズム
		std::vector<int>my_vec{ 4,2,5,1,3 };
		std::sort(my_vec.begin(), my_vec.end());
	}
	{

		// イテレーター
		std::vector<int>my_vec{ 1,2,3,4,5 };
		for (auto it = my_vec.begin(); it != my_vec.end(); ++it) {
			std::cout << *it << " ";
		}
		std::cout << std::flush;
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
