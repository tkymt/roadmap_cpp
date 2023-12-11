// MultipleInheritance.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

// 基底クラス１
class Animal {
public:
    void eat() {
        std::cout << "I can eat!" << std::endl;
    }
};

// 基底クラス２
class Mammal {
public:
    void breath() {
        std::cout << "I can breathe!" << std::endl;
    }
};

// 多重継承をした子クラス
class Dog : public Animal, public Mammal {
public:
    void bark() {
        std::cout << "I can bark! Woof woof!" << std::endl;
    }
};

int main()
{
    Dog myDog;

    // 基底クラスのメソッドを呼び出す
    myDog.eat();
    myDog.breath();

    // 子クラスのメソッドを呼び出す
    myDog.bark();
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
