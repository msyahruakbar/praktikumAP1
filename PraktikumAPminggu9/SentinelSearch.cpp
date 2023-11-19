#include <iostream>
using namespace std;

int sentinelSearch(int arr[], int ukuran, const int cari) {
    int terakhir = arr[ukuran - 1]; 
    arr[ukuran - 1] = cari; 
    int i;
    for (i = 0; arr[i] != cari; i++) {
       
    }

    arr[ukuran - 1] = terakhir; 

    if (i < ukuran - 1 || arr[ukuran - 1] == cari) {
        return i;
    }

    return -1;
}

int main() {
    const int ukuran = 5;
    int nilai[ukuran];

   
    for (int i = 0; i < ukuran; i++) {
        cout << "Masukkan bilangan untuk index ke-" << i << " :";
        cin >> nilai[i];
    }

    int cari;
    cout << "Masukkan data yang dicari: ";
    cin >> cari;

    int hasil = sentinelSearch(nilai, ukuran, cari);

    if (hasil != -1) {
        cout << "Data ditemukan di index ke-" << hasil << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}
