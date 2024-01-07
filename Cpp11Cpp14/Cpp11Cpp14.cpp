// Cpp11Cpp14.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <vector>
#include <thread>

int main()
{
    auto integer = 42;
    auto floating = 3.14;

    std::vector<int> numbers{ 1,2,3,4 };
    for (int number : numbers) {
        std::cout << number << std::endl;
    }

    {
        auto add = [](int a, int b) -> int { return a + b; };
        int sum = add(42, 13);
    }

    int* ptr = nullptr;
    std::thread t([]() {std::cout << "Hello from another thread\n"; });
    t.join();

    {
        auto add = [](auto a, auto b) {return a + b; };
        auto sum_i = add(42, 13);
        auto sum_f = add(3.14, 2.72);
    }

    int b = 0b110101;

    auto func = [](auto a, auto b) {return a * b; };
    decltype(auto)result = func(5, 3.14);

    

}

template<typename T>
constexpr T pi = T(3.1415926535897932385);
float r = pi<float>;
double d = pi<double>;

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
