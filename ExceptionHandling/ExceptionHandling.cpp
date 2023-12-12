// ExceptionHandling.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

// try 例外を監視する必要があるコードブロックを定義する
// catch 例外が発生したときに実行されるコードブロックを定義します
// throw catchブロックによって処理される例外を投げます
// noexcept 例外を投げない関数、またはスコープ内で例外が投げられたときにプログラムを終了する関数を指定する
int divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero!";
    }
    return a / b;
}

// 標準例外
// std::exception すべての標準例外の基底クラス
// std::logic_error プログラムによって静的に検出できるエラー
// std::runtime_error プログラムの実行中に発生したエラー
int divide2(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero!");
    }
    return a / b;
}

int main()
{
    {
        int num1, num2;

        std::cout << "Enter two numbers for division: ";
        std::cin >> num1 >> num2;

        try {
            int result = divide(num1, num2);
            std::cout << "The result is: " << result << std::endl;
        }
        catch (const char* message) {
            std::cerr << "Error: " << message << std::endl;
        }
    }
    {
        int num1, num2;

        std::cout << "Enter two numbers for division: ";
        std::cin >> num1 >> num2;

        try {
            int result = divide2(num1, num2);
            std::cout << "The result is: " << result << std::endl;
        }
        catch (const char* message) {
            std::cerr << "Error: " << message << std::endl;
        }
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
