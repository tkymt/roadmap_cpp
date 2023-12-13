// TypeCasting.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

class Base {
protected:
	virtual void something() {}
};
class Derived :public Base {};

Base* base_ptr = new Derived();

int main()
{
	{
		int a = 10;
		float b = (float)a; // C言語の様式でキャストする
	}
	{
		int a = 10;
		float b = static_cast<float>(a); // 静的キャスト
	}
	{
		Derived* derived_ptr = dynamic_cast<Derived*>(base_ptr); // 動的キャスト
		delete base_ptr;
	}
	{
		int* a = new int(42);
		long b = reinterpret_cast<long>(a); // int*からlongにキャストする
		delete a;
	}
	{
		const int a = 10;
		int* ptr = const_cast<int*>(&a); // 変数から修飾子を外す
		*ptr = 20;
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
