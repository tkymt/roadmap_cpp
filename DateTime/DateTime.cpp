// DateTime.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <chrono>

int main()
{
	std::chrono::seconds sec(5);
	std::chrono::minutes min(2);
	std::chrono::hours hr(1);

	// 時点
	std::chrono::system_clock::time_point system_tp = std::chrono::system_clock::now();
	std::chrono::steady_clock::time_point steady_tp = std::chrono::steady_clock::now();
	std::chrono::high_resolution_clock::time_point high_res_tp = std::chrono::high_resolution_clock::now();

	{
		// 時計
		// time_point 特定の時点
		// duration ２つの時点間の期間
		// now() 現在の時点を返す静的関数
		std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
		std::chrono::system_clock::time_point one_hour_from_now = now + std::chrono::hours(1); // 現在時刻に1時間を足した時刻を得る
	}
	{
		// 時点からカレンダー時間への変換
		std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
		std::time_t now_c = std::chrono::system_clock::to_time_t(now);

		char buffer[26]; // 時刻を文字列に変換した結果を保存するバッファ
		ctime_s(buffer, 26, &now_c); // 時刻を文字列に変換する

		std::cout << "Current time: " << buffer << std::endl;
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
