// VariadicTemplates.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

// テンプレート
template<typename T>
T sum(T t) {
    return t;
}

// 可変個引数テンプレート
template <typename T, typename...Args>
T sum(T t, Args...args) {
    return t + sum(args...); // 省略記号（...）は、argsを展開（expansion）する
}

template<typename...Types>
class Tuple;

template<>
class Tuple<> {};

// 再帰的な場合
template<typename Head,typename...Tail>
class Tuple<Head, Tail...> :public Tuple<Tail...> {
public:
    Tuple(Head head, Tail...tail) :Tuple<Tail...>(tail...), head_(head) {}

    Head head()const { return head_; }

private:
    Head head_;
};

// 関数のオーバーロード
template<typename T>
void print(T t) {
    std::cout << t << std::endl;
}

// 再帰関数
template<typename T,typename...Args>
void print(T t, Args...args) {
    std::cout << t << std::endl;
    print(args...);
}

int main()
{
    int result = sum(1, 2, 3, 4, 5);
    std::cout << "The sum is:" << result << std::endl;

    Tuple<int, float, double>tuple(1, 2.0f, 3.0);
    std::cout << "First element: " << tuple.head() << std::endl;

    print(1, 2, 3, 4, 5);
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
