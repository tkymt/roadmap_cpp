// Iterators.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <vector>
#include <forward_list>
#include <list>

int main()
{
	{
		// 入力イテレーター
		// コンテナ内の要素を順に一度だけ読み取るために使用される
		std::vector<int>nums = { 1,2,3,4 };
		std::istream_iterator<int>input(std::cin);
		std::copy(input, std::istream_iterator<int>(), std::back_inserter(nums));
		std::cout << *input << std::endl;
	}

	{
		// 出力イテレーター
		// コンテナ内の要素を順に書き込むために使用される
		std::vector<int>nums = { 1,2,3,4 };
		std::ostream_iterator<int>output(std::cout, ", ");
		std::copy(nums.begin(), nums.end(), output);
		std::cout << std::endl;
	}

	{
		// 前方イテレーター
		// コンテナ内の要素に対する複数のパスに使用できる
		std::forward_list<int>nums = { 1,2,3,4 };
		std::forward_list<int>::iterator itr = nums.begin();
		while (itr != nums.end())
		{
			std::cout << *itr << " ";
			++itr;
		}
		std::cout << std::endl;
	}

	{
		// 双方向イテレーター
		// コンテナ内を前後に移動する機能を提供する
		std::list<int>nums = { 1,2,3,4 };
		std::list<int>::iterator itr;
		for (itr = nums.begin(); itr != nums.end(); ++itr) {
			std::cout << *itr << " ";
		}
		std::cout << std::endl;
		for (--itr; itr != nums.begin(); --itr) {
			std::cout << *itr << " ";
		}
		std::cout << std::endl;
	}

	{
		// ランダムアクセスイテレーター
		// コンテナ内の要素にアクセスするためのもっとも柔軟な方法を提供する
		// 前後に移動したり、他の要素に直接ジャンプしたり、特定のインデックスの要素にアクセスしたりできる
		std::vector<int>nums = { 1,2,3,4 };
		std::vector<int>::iterator itr;
		for (itr = nums.begin(); itr != nums.end(); ++itr) {
			std::cout << *itr << " ";
		}
		std::cout << std::endl;
		for (itr -= 1; itr != nums.begin() - 1; --itr) {
			std::cout << *itr << " ";
		}
		std::cout << std::endl;
	}

	{
		// autoキーワードと適切なコンテナのメソッドから始めてイテレーターを操作する
		std::vector<int>nums = { 1,2,3,4 };
		for (auto itr = nums.begin(); itr != nums.end(); ++itr) {
			std::cout << *itr << " ";
		}
		std::cout << std::endl;
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
