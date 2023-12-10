// VirtualMethods.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <numbers>

// 基底クラス
class Shape {
public:
    virtual double area() const {
        return 0;
    }
};

// 派生クラス
class Circle : public Shape {
public:
    Circle(double r) : radius(r) {}

    // 基底クラスのメソッドをオーバーライドする
    double area() const override {
        return std::numbers::pi * radius * radius;
    }

private:
    double radius;
};

// 派生クラス
class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // 基底クラスのメソッドをオーバーライドする
    double area() const override {
        return width * height;
    }

private:
    double width;
    double height;
};

int main()
{
    // 実行時に実際のオブジェクトの型に基づいて適切なメソッドを呼び出す
    Circle c(5);
    Rectangle r(4, 6);

    Shape* shape = &c;
    std::cout << "Circle's area: " << shape->area() << std::endl;

    shape = &r;
    std::cout << "Rectangle's area: " << shape->area() << std::endl;
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
