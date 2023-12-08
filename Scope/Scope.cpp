// Scope.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

// グローバルスコープ
// 有効期間は、プログラムが終了するまで
int globalVar; // これは、グローバル変数だ

void localExample() {
// ローカルスコープ
// 関数またはブロックの内側で宣言された識別子は、宣言された関数またはブロックでのみアクセスできる
// 有効期間は、関数またはブロックの終了まで
    int localVar; // これは、ローカル変数だ
    localVar = 5;
    std::cout << "Local variable: " << localVar << std::endl;
}

// 名前空間のスコープ
namespace MyNamespace {
// 名前空間とスコープ解決演算子（::）を使用してアクセスする
    int namespaceVar = 42;
}

// クラススコープ
class MyClass {
public:
    // 静的メンバは、クラス名とスコープ解決演算子を使用してアクセスする
    static int staticMember;
    // 非静的メンバは、ドット演算子またはアロー演算子を使用してアクセスする
    int nonStaticMember;

    MyClass(int value) : nonStaticMember(value) {}
};

int MyClass::staticMember = 7;

int main()
{
    std::cout << "Global variable: " << globalVar << std::endl;
    localExample();
    // std::cout << localVar << std::endl;
    // 上記のコメントアウトしているコードは、現在のスコープで宣言されておらずコンパイルエラーになる
    std::cout << "Namespace variable: " << MyNamespace::namespaceVar << std::endl;

    MyClass obj(10);
    std::cout << "Static member: " << MyClass::staticMember << std::endl;
    std::cout << "Non-static member: " << obj.nonStaticMember << std::endl;
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
