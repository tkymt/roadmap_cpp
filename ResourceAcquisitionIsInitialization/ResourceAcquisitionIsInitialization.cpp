// ResourceAcquisitionIsInitialization.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <mutex>

// オブジェクトのライフサイクルを使用してリソースを管理する
// リソースの有効期間を対応するオブジェクトのスコープに束縛して
// オブジェクトを作成したときに自動的に確保され、オブジェクトが破棄されたときに自動的に解されるようにする

class ManagedArray {
public:
    ManagedArray(size_t size) :_size(size), _data(new int[size]) {}
    
    ~ManagedArray() {
        delete[] _data;
    }

    // Access function
    int& operator[](size_t i) {
        return _data[i];
    }

private:
    size_t _size;
    int* _data;
};

class Lock {
public:
    Lock(std::mutex& mtx) :_mutex(mtx) {
        _mutex.lock();
    }

    ~Lock() {
        _mutex.unlock();
    }

private:
    std::mutex& _mutex;
};

std::mutex some_mutex;
void protected_function() {
    Lock lock(some_mutex);
}

int main()
{
    ManagedArray arr(10);
    arr[0] = 42;

    std::thread t1(protected_function);
    std::thread t2(protected_function);

    t1.join();
    t2.join();
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
