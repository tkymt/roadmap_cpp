// LanguageConcepts.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <vector>

int add(int a, int b) {
	return a + b;
}

struct Student {
	std::string name;
	int age;
};

class Employee {
public:
	std::string name;
	int age;
	void displayInfo() {
		std::cout << "Name: " << name << "\nAge: " << age << std::endl;
	}
};

class Base {
public:
	void display() {
		std::cout << "This is the base class." << std::endl;
	}
};

class Derived :public Base {
public:
	void display() {
		std::cout << "This is the derived class." << std::endl;
	}
};

int main()
{
	int age = 25;
	float height = 1.7f;
	double salary = 50000.0;
	char grade = 'A';
	bool isEmployed = true;

	if (age > 18) {
		std::cout << "You are eligible to vote." << std::endl;
	}
	else
	{
		std::cout << "You are not eligible to vote." << std::endl;
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Hello World!" << std::endl;
	}

	int marks[] = { 90, 80, 95, 85 };
	std::vector<int> scores = { 10,20,30,40 };

	int num = 10;
	int* p = &num;

	Student student = { "John",18 };
	Employee employee = { "John",18 };
	employee.displayInfo();

	Base base = Derived();
	base.display();
	Derived derived = Derived();
	derived.display();

	try {
		throw new std::runtime_error("Runtime error");
	}
	catch (const std::exception& e) {
		std::cout << "Caught an exception: " << e.what();
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
