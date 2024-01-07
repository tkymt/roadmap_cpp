// Cpp20.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <vector>
#include <ranges>
#include <coroutine>
#include <future>

std::future<int> async_value(int value) {
    co_await std::chrono::seconds(1);
    co_return value * 2;
}

constexpr int add(int a, int b) {
    return a + b;
}

consteval int square(int x) {
    return x * x;
}

int main()
{
    std::vector<int> numbers{ 1,2,3,4,5 };

    auto even_numbers = numbers | std::views::filter([](int n) {return n % 2 == 0; });
    for (int n : even_numbers) {
        std::cout << n << ' ';
    }
    std::cout << std::endl;

    auto result = async_value(42);
    std::cout << "Result: " << result.get() << std::endl;

    constexpr int result1 = add(3, 4);
    int result2 = add(5, 6);
    constexpr int result3 = square(7);
}

template<typename T>
concept Addable = requires(T a, T b) {
    {a + b}->std::same_as<T>;
};

template<Addable T>
T add(T a, T b) {
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
