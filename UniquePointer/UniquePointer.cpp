// UniquePointer.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <memory>

struct MyDeleter
{
	void operator()(int* ptr) {
		std::cout << "Custom Deleter: Deleting pointer" << std::endl;
		delete ptr;
	}
};

int main()
{
	{
		// unique_ptrの作成
		std::unique_ptr<int> p1(new int(5)); // 整数で初期化する
		std::unique_ptr<int> p2 = std::make_unique<int>(10); // 推奨される方法（C++14以降）

		std::cout << *p1 << ", " << *p2 << std::endl;
	}
	{
		// 所有権の譲渡
		std::unique_ptr<int> p1(new int(5));
		std::unique_ptr<int> p2 = std::move(p1); // 所有権をp1からp2に移動する

		if (p1)
		{
			std::cout << "p1 owns the object" << std::endl;
		}
		else if (p2)
		{
			std::cout << "p2 owns the object" << std::endl;
		}
	}
	{
		std::unique_ptr<int, MyDeleter> p1(new int(5), MyDeleter());
	} // Custom Deleterは、p1がスコープ外になったときに呼び出される
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
