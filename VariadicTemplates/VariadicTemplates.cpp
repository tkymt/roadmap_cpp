// VariadicTemplates.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

// 基本のテンプレートの使いかた
template<typename T>
T sum(T t) {
    return t;
}

// 可変個引数テンプレート
template <typename T, typename...Args>
T sum(T t, Args...args) {
    return t + sum(args...);
}

template<typename...Types>
class Tuple;

// 基本
class Tuple<> {};

// 再帰的な場合
template<typename Head,typename...Tail>
class Tuple<Head, Tail...> :public Tuple<Tail...> {
public:
    Tuple(Head head, Tail...tail) :Tuple<tail...>(tail...), head_(head) {}

    Head head()const { return head_; }

private:
    Head head_;
};

int main()
{
    int result = sum(1, 2, 3, 4, 5);
    std::cout << "The sum is:" << result << std::endl;

    Tuple<int, float, double>tuple(1, 2.0f, 3.0);
    std::cout << "First element: " << tuple.head() << std::endl;
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
