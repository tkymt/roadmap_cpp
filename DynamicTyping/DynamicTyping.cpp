// DynamicTyping.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <any>

int main()
{
	// 動的型付け
	// C++は、静的型付け言語として知られており、変数のデータ型はコンパイル時に決定されます
	// ただし、C++には、実行時に変数のデータ型を決定することを意味する、特定のレベルの動的型付けを持つ概念も用意されています

	{
		// void* ポインター
		// 任意のデータ型のオブジェクトを指すことができるジェネリックポインターです
		// これらは、オブジェクトの特定の型を知らなくても、任意の型のオブジェクトへの参照を格納するために使用できます

		int x = 42;
		float y = 3.14f;
		std::string z = "Hello, world!";

		void* void_ptr;

		void_ptr = &x;
		std::cout << "int value: " << *(static_cast<int*>(void_ptr)) << std::endl;

		void_ptr = &y;
		std::cout << "float value: " << *(static_cast<float*>(void_ptr)) << std::endl;

		void_ptr = &z;
		std::cout << "string value: " << *(static_cast<std::string*>(void_ptr)) << std::endl;
	}
	{
		// std::any （C++17の場合）
		std::any any_value;

		any_value = 42;
		std::cout << "int value: " << std::any_cast<int>(any_value) << std::endl;

		any_value = 3.14;
		std::cout << "double value: " << std::any_cast<double>(any_value) << std::endl;

		any_value = std::string("Hello, world!");
		std::cout << "string value: " << std::any_cast<std::string>(any_value) << std::endl;
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
