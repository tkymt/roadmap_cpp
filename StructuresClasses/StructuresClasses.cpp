// StructuresClasses.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <string>
#include <iostream>

// 構造体
struct Employee {
    int id;
    std::string name;
    float salary;
};

Employee e1; // Employee構造体のオブジェクトを作る

// クラス
class Student {
    int roll_no;
    std::string name;
    float marks;

public:
    void set_data(int r, std::string n, float m) {
        roll_no = r;
        name = n;
        marks = m;
    }

    void display() {
        std::cout << "Roll no: " << roll_no
                  << "\nName: " << name
                  << "\nMarks: " << marks << std::endl;
    }
};

Student s1; // Studentクラスのオブジェクトを作る

int main()
{
    // 構造体のメンバーには、ドット演算子（.）を使ってアクセスする
    e1.id = 1;
    e1.name = "John Doe";
    e1.salary = 40000;

    s1.set_data(1, "Alice", 95.0);
    s1.display();
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
