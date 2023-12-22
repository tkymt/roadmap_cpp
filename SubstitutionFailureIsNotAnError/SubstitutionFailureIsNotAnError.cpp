// SubstitutionFailureIsNotAnError.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <type_traits>

template<typename T,typename=void>
struct foo_impl {
    void operator()(T t) {
        std::cout << "Called when T is not arithemetic" << std::endl;
    }
};

template<typename T>
struct foo_impl<T, std::enable_if_t<std::is_arithmetic<T>::value>> {
    void operator()(T t) {
        std::cout << "Called when T is arithmetic" << std::endl;
    }
};

template<typename T>
void foo(T t) {
    foo_impl<T>()(t);
}

int main()
{
    // 数値か文字列か判定できる
    int a = 5;
    foo(a);

    std::string s = "example";
    foo(s);
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
