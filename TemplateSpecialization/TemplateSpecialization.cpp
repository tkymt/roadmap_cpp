// TemplateSpecialization.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

// 完全なテンプレートの特殊化
template<typename T>
void printData(const T& data) {
    std::cout << "General template: " << data << std::endl;
}

template<>
void printData(const char* const& data) {
    std::cout << "Specialized template for const char*: " << data << std::endl;
}


// 部分的なテンプレートの特殊化
template <typename K,typename V>
class MyPair {
public:
    MyPair(K k, V v) :key(k), value(v) {}

    void print()const {
        std::cout << "General template: key = " << key << ", velue = " << value << std::endl;
    }

private:
    K key;
    V value;
};

template<typename T>
class MyPair<T, int> {
public:
    MyPair(T k, int v) :key(k), value(v) {}

    void print() const{
        std::cout << "Partial specialization for int values: key = " << key << ", value = " << value << std::endl;
    }

private:
    T key;
    int value;
};

int main()
{
    int a = 5;
    const char* str = "Hello, world!";
    printData(a); // General template: 5
    printData(str); // Specialized template for const char*: Hello, world!

    MyPair<double, std::string>p1(3.2, "example");
    MyPair<char, int>p2('A', 65);
    p1.print(); // General template: kye = 3.2, value = example
    p2.print(); // Partial specialization for int values: key = A, value = 65
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
