// ObjectOrientedProgramming.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

// クラス
class Dog {
public:
    std::string name;
    int age;

    void bark() {
        std::cout << name << " barks!" << std::endl;
    }
};

// カプセル化
// 必要な機能のみを公開すること
class Dog2 {
private:
    std::string name;
    int age;

public:
    void setName(std::string n) {
        name = n;
    }

    void SetAge(int a) {
        age = a;
    }

    void bark() {
        std::cout << name << " barks!" << std::endl;
    }
};

// 継承
// 既存のクラスから新しいクラスを派生させる機能
// コードの再利用を可能にする
class Animal {
public:
    void breathe() {
        std::cout << "I can breathe" << std::endl;
    }
};

class Dog3 : public Animal {
public:
    void bark() {
        std::cout << "Dog barks!" << std::endl;
    }
};

// ポリモーフィズム
class Animal2 {
public:
    virtual void makeSound() {
        std::cout << "The Animal makes a sound" << std::endl;
    }
};

class Dog4 : public Animal2 {
public:
    void makeSound() override {
        std::cout << "Dog barks!" << std::endl;
    }
};

class Cat : public Animal2 {
public:
    void makeSound() override {
        std::cout << "Cat meows!" << std::endl;
    }
};

int main()
{
    {
        Dog myDog;
        myDog.name = "Fido";
        myDog.age = 3;
        myDog.bark(); // 出力: Fido barks!
    }
    {
        Dog3 myDog;
        myDog.breathe(); // 出力: I can breathe
        myDog.bark(); // 出力: Dog barks!
    }
    {
        Animal2* animals[2] = { new Dog4, new Cat};
        animals[0]->makeSound(); // 出力: Dog barks!
        animals[1]->makeSound(); // 出力: Cat meows!
        delete animals[0];
        delete animals[1];
    }
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
