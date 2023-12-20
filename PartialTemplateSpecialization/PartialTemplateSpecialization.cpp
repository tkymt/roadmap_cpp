// PartialTemplateSpecialization.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

// Primary template
template<typename T>
struct MyTemplate {
    static const char* name() {
        return "General case";
    }
};

// Partial specialization for pointers
template<typename T>
struct MyTemplate<T*> {
    static const char* name() {
        return "Partial specialization for pointers";
    }
};

// Full specialization for int
template<>
struct MyTemplate<int> {
    static const char* name(){
        return "Full specialization for int";
    }
};

int main()
{
    MyTemplate<double>t1; // General case
    MyTemplate<double*>t2; // Partial specialization for pointers
    MyTemplate<int>t3; // Full specialization for int

    std::cout << t1.name() << std::endl;
    std::cout << t2.name() << std::endl;
    std::cout << t3.name() << std::endl;
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
