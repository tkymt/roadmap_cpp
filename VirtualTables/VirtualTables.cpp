﻿// VirtualTables.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

// 仮想テーブル
// 動的ポリモーフィズムをサポートするために、
// C++コンパイラによって使用されるメカニズム
// クラスに仮想関数が含まれているとき、コンパ
// イラはそのクラスの仮想テーブルを作成する
// このテーブルは、クラスで定義されている仮想
// 関数への関数ポインターが含まれている
// そのクラスの各オブジェクトには、その仮想テ
// ーブルへのポインターがあり、オブジェクトの
// 構築中にコンパイラによって自動的に初期化さ
// れます

#include <iostream>

class Base {
public:
    virtual void function1() {
        std::cout << "Base::function1" << std::endl;
    }

    virtual void function2() {
        std::cout << "Base::function2" << std::endl;
    }
};

class Derived : public Base {
public:
    void function1() override {
        std::cout << "Derived::function1" << std::endl;
    }

    void function3() {
        std::cout << "Derived::function3" << std::endl;
    }
};

int main()
{
    Base* obj = new Derived(); // 派生オブジェクトを作成し、Base*型のポインターに割り当てます
    obj->function1(); // 動的ポリモーフィズムによって、Derived::function1を呼び出す 
    obj->function2(); // Base::function2を呼び出す

    delete obj;
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
