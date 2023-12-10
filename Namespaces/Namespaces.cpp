// Namespaces.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

namespace animals {
    std::string dog = "Bobby";
    std::string cat = "Liliy";
}

namespace outer {
    int x = 10;

    // 他の名前空間の入れ子にできる
    namespace inner {
        int y = 20;
    }
}

int main()
{
    {
        // スコープ解決演算子（::）を使ってアクセスする
        std::cout << "Dog's name: " << animals::dog << std::endl;
        std::cout << "Cat's name: " << animals::cat << std::endl;
    }
    {
        // usingキーワードを使うと名前空間の要素を現在のスコープにインポートできる
        using animals::dog;
        std::cout << "Dog's name: " << dog << std::endl;
    }
    {
        // 名前空間全体を現在のスコープにインポートする
        using namespace animals;
        std::cout << "Dog's name: " << dog << std::endl;
        std::cout << "Cats name: " << cat << std::endl;
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
