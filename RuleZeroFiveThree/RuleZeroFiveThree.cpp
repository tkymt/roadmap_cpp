// RuleZeroFiveThree.cpp

#include <string>

// ０の法則
// クラスまたは構造体がリソースを
// 明示的に管理しない場合、特別な
// メンバー関数、つまり、デストラ
// クター、コピー コンストラクター、
// コピー代入演算子、移動コンスト
// ラクター、移動代入演算子を定義し
// てはならない
struct MyResource {
    std::string name;
    int value;
};

// ３の法則
// リソースを管理するクラスまたは構造
// 体は、次の 3 つの特別なメンバー関
// 数を定義する必要があると規定されて
// います
// デストラクタ
// コピーコンストラクタ
// コピー代入演算子
class MyResource {
public:
    // コンストラクターとデストラクター
    MyResource(): data(new int[100]) {}
    ~MyResource() { delete[] data; }

    // コピーコンストラクター
    MyResource(const MyResource& other) : data(new int[100]) {
        std::copy(other.data, other.data + 100, data);
    }

    // 代入演算子のオーバーロード
    MyResource& operator=(const MyResource& other) {
        if (&other == this) { return *this; }
        std::copy(other.data, other.data + 100, data);
        return *this;
    }

private:
    int* data;
};

// ５の法則
// ３の法則を拡張して、2 つの特別なメンバー関数を追加します
// 移動コンストラクター
// 移動代入演算子
class MyResource {
public:
    // コンストラクターとデストラクター
    MyResource() : data(new int[100]) {}
    ~MyResource() { delete[] data; }

    // コピーコンストラクター
    MyResource(const MyResource& other) : data(new int[100]) {
        std::copy(other.data, other.data + 100, data);
    }

    // コピー代入演算子
    MyResource& operator=(const MyResource& other) {
        if (&other == this) { return *this; }
        std::copy(other.data, other.data + 100, data);
        return *this;
    }

    // 移動コンストラクター
    MyResource(MyResource&& other) noexcept : data(other.data) {
        other.data = nullptr;
    }

    // 移動代入演算子
    MyResource& operator=(MyResource&& other) noexcept {
        if (&other == this) { return *this; }
        delete[] data;
        data = other.data;
        other.data = nullptr;
        return *this;
    }

private:
    int* data;
};