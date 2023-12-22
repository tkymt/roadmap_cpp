// Idioms.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "MyClass2.h"
#include <iostream>

class Resource {
public:
    Resource() { /* Acquire resource */ }
    ~Resource() { /* Release resource */ }
};

void function() {
    Resource r; // Resource is acquired
} // Resource is relesed when r goes out of scope

// ルール・オブ・ファイブ
// C++11では、３つのルールが５つに拡張され、移動コンストラクターと移動代入演算子がカバーされました
class MyClass1 {
public:
    MyClass1() {}
    MyClass1(const MyClass1& other) {}
    MyClass1& operator=(const MyClass1& other) {}
    ~MyClass1() {} // Destructor
};

// 非仮想インターフェース（NVI)
class Base {
public:
    void pulicMethod() {
        privateMethod(); // Calls overridden implementation
    }

protected:
    virtual void privateMethod() = 0; // Pure virtual method
};

class Derived :public Base {
protected:
    virtual void privateMethod()override {
        // Derived implementation
    }
};

int main()
{
    function();
    
    MyClass2 myClass2;
    myClass2.someMethod();

    Derived derived;
    derived.pulicMethod();
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
