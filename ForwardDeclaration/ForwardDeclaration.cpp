﻿// ForwardDeclaration.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

// 前方宣言は、シンボルを定義する前に宣言する方法だ
// 循環依存関係がある場合やソースファイルへの不要なヘッダーインクルードを回避できる
class ClassA; // 前方宣言

// ClassAを定義される前に使える
void do_sumething(ClassA& obj) {};

// 関数の前方宣言
int add(int a, int b); // 前方宣言

class ClassB {
public:
	void another_function(ClassA& obj) {};
};

int main()
{
	int result = add(2, 3);
}

// 前方宣言をした関数の定義
int add(int a, int b) {
	return a + b;
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
