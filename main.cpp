#include <iostream>

using namespace std;

int main(){

    int firstValue = 10;
    int secondValue = 8;

    // Tukar nilai kedua variable menggunakan temp (variable tambahan)

    int temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    // output Penukaran kedua variable dengan temp
    cout << "First value:" << firstValue << endl;
    cout << "Second value:" << secondValue << endl <<endl;

    int nilaiPertama = 10;
    int nilaiKedua = 8;

    // Tukar Value kedua variabel tanpa temp (variable tambahan)
    nilaiPertama = nilaiPertama + nilaiKedua;
    nilaiKedua = nilaiPertama - nilaiKedua;
    nilaiPertama = nilaiPertama - nilaiKedua;

    // Output penukaran kedua variabel tanpa temp
    cout << "Nilai Pertama:" << nilaiPertama << endl;
    cout << "Nilai Kedua:" << nilaiKedua << endl <<endl;

    int N, M;

    cout << "bebek Pak Tatang:" ;
    cin >> N;

    cout << "Dibagikan kepada temannya:" ;
    cin >> M;

    int jumlah_bebek_yang_akan_dibagikan = N/M;
    int sisa_bebek = N%M;

    cout << "jumlah bebek yang akan diberikan kepada masing masing temannya:" << jumlah_bebek_yang_akan_dibagikan << endl;
    cout << "jumlah sisa bebek:" << sisa_bebek;



    return 0;

 }
