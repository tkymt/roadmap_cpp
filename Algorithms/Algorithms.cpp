// Algorithms.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	{
		// 並び替え
		std::vector<int>nums = { 10,9,8,7,6,5 };
		std::sort(nums.begin(), nums.end());

		for (int num : nums) {
			std::cout << num << ' ';
		}
	}

	{
		// 探索
		std::vector<int>nums = { 5,6,8,9,10 };
		auto it = std::find(nums.begin(), nums.end(), 9);
		if (it != nums.end()) {
			std::cout << "Found 9 at position: " << (it - nums.begin());
		}
		else
		{
			std::cout << "9 not found";
		}
	}

	{
		// シーケンスの変更
		std::vector<int>nums = { 5,6,76,8,6,10 };
		nums.erase(std::remove(nums.begin(), nums.end(), 6), nums.end());

		for (int num : nums) {
			std::cout << num << ' ';
		}
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
