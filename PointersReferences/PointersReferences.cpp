﻿// PointersReferences.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

int add(int a, int b) {
	return a + b;
}

int main()
{
	{
		// ポインターの初期化
		int num = 10;
		int* ptr = &num; // ポインターであるptrは、numのメモリアドレスを指す

		// ポインターを使用した値へのアクセス
		int value = *ptr; // valueは、ptrが指す変数の値が代入される

		// 関数ポインタ
		int(*funcptr)(int, int) = add;
		funcptr(4, 5); // 返り値は、9
	}
	{
		// 参照
		int num = 10;
		int& ref = num; // 参照であるrefは、numの別名として機能する
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
