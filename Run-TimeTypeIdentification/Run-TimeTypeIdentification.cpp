// Run-TimeTypeIdentification.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <typeinfo>

class Base { virtual void dummy() {} };
class Derived : public Base { /* ... */ };
class Derived1 : public Base { /* ... */ };
class Derived2 : public Base { /* ... */ };

int main()
{
	// ランタイム型識別（RTTI）
	// プログラムの実行中にオブジェクトの型情報を取得できる C++ の機能です
	// これは、オブジェクトの型が実行時に変更される可能性がある動的型付けを使用する場合に便利です

	{
		// typeid演算子
		// オブジェクトの型に関する情報を含む型オブジェクトの参照を返す演算子です
		// 使用するには、ヘッダーファイルをインクルードする必要があります
		Base* base_ptr = new Derived;

		// typeidを使用してオブジェクトの型を取得する
		std::cout << "Type: " << typeid(*base_ptr).name() << std::endl;

		delete base_ptr;
	}
	{
		// dynamic_cast演算子
		// 実行時の型チェックを実行し、ベース ポインターまたは参照を派生ポインターまたは参照に安全にダウンキャストする型キャスト演算子です
		// キャストが失敗すると、nullを返すか、bad_cast例外（キャスト参照の場合）をスローします

		Base* base_ptr = new Derived1;

		// dynamic_castを使用してポインターを安全にダウンキャストする
		Derived1* derived1_ptr = dynamic_cast<Derived1*>(base_ptr);
		if (derived1_ptr)
		{
			std::cout << "Dawncast to Derived1 successful" << std::endl;
		}
		else
		{
			std::cout << "Downcast to Derived1 failed" << std::endl;
		}

		Derived2* derived2_ptr = dynamic_cast<Derived2*>(base_ptr);
		if (derived2_ptr)
		{
			std::cout << "Downcast to Derived2 successful" << std::endl;
		}
		else
		{
			std::cout << "Downcast to Derived2 failed" << std::endl;
		}

		delete base_ptr;
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
