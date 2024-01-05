// Standards.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <vector>
#include <map>
#include <ranges>

int main()
{
    auto sum = [](int a, int b) -> int {return a + b; };
    int result = sum(1, 1);
    std::cout << result << std::endl;

    std::vector<int> numbers = { 1,2,3,4 };
    for (int num : numbers) {
        std::cout << num << std::endl;
    }

    auto generic_sum = [](auto a, auto b) {return a + b};
    int binary_number = 0b1010;

    std::map<std::string, int> my_map = { {"A",1},{"B",2} };
    std::string key = "A";
    if (auto it = my_map.find(key); it != my_map.end()) {
        // use 'it' here
    }

    for (const auto& [key, value] : my_map) {
        // use 'key' and 'value' here
    }

    std::vector<int> numbers = { 1,2,3,4 };
    auto doubled = numbers | std::views::transform([](int n) {return n * 2; });
}

template<typename T>
concept Addable = requires(T a, T b) {
    {a + b}->std::same_as<T>;
};

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
