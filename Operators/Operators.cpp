// Operators.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

int main()
{
// 算術演算子
	// + : 加算
	int sum = 5 + 3; // 和は、8
	
	// - : 減算
	int difference = 5 - 3; // 差は、2

	// * : 乗算
	int product = 5 * 3; // 積は、15

	// / : 除算
	int quotient = 15 / 3; // 商は、5

	// % : 余り算
	int remainder = 7 % 3; // 余りは、1

// 比較演算子
	// == : 等価
	bool isEqual = (5 == 3); // isEqualは、false

	// != : 不等価
	bool isNotEqual = (5 != 3); // isNotEqualは、true

	// <  : より小さい
	bool isLess = (5 < 3); // isLessは、false

	// >  : より大きい
	bool isGreater = (5 > 3); // isGreaterは、true

	// <= : 以下
	bool isLessOrEqual = (5 <= 3); // isLessOrEqualは、false

	// >= : 以上
	bool isGreaterOrEqual = (5 >= 3); // isGreaterOrEqualは、true

// 論理演算子
	{
		// && : 論理積
		bool result = (true && false); // resultは、false
	}
	{
		// || : 論理和
		bool result = (true || false); // resultは、true
	}
	{
		// !  : 論理否定
		bool result = !false; // resultは、true
	}

// 代入演算子
	{
		// =  : 代入
		int x = 5; // xの値は、5
	}
	{
		// += : 加算代入
		int x = 5;
		x += 3; // xの値は、8 (5 + 3)
	}
	{
		// -= : 減算代入
		int x = 5;
		x -= 3; // xの値は、2
	}
	{
		// *= : 乗算代入
		int x = 5;
		x *= 3; // xの値は、15 (5 * 3)
	}
	{
		// /= : 除算代入
		int x = 15;
		x /= 3; // xの値は、5 (15 / 3)
	}
	{
		// %= : 余剰代入
		int x = 7;
		x %= 3; // xの値は、1 (7 % 3)
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
