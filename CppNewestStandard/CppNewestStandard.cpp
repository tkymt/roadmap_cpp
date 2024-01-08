// CppNewestStandard.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <vector>
#include <ranges>
#include <coroutine>

template<typename T>
concept Printable = requires(T x) {
    {std::cout << x};
};

template<Printable T>
void print(const T& x) {
    std::cout << x << '\n';
}


// Coroutines
std::generator<int> generator() {
    for (int i = 0; i < 5; ++i) {
        co_yield;
    }
}

// Lambdas with template parameters
auto sum = [](auto a, auto b) {
    return a + b;
};

// Constexpr enhancements
struct Point {
    constexpr Point(int x,int y):x_{x},y_{y}{}
    int x_, y_;
};

constexpr auto create_points() {
    Point points[3]{};

    for (int i = 0; i < 3; ++i) {
        points[i] = Point{ i,i * i };
    }

    return points;
}

int main()
{
    // Ranges
    std::vector<int> numbers{ 1,2,3,4,5 };
    auto even_view = numbers | std::views::filter([](int n) {return n % 2 == 0; });
    for (int n : even_view) {
        std::cout << n << ' ';
    }

    // Generator
    for (int value : generator()) {
        std::cout << value << ' ';
    }

    // Calling Lambda
    int res1 = sum(1, 2);
    double res2 = sum(1.0, 2.0);

    constexpr auto points = create_points();
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
