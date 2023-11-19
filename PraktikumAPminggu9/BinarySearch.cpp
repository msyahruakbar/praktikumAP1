#include <iostream>
using namespace std;

// Fungsi untuk pencarian biner
int bnry(int arr[], int ukuran, int cari) {
    int kiri = 0;
    int kanan = ukuran - 1;

    while (kiri <= kanan) {
        int tengah = kiri + (kanan - kiri) / 2;

        if (arr[tengah] == cari) {
            return tengah; // Nilai ditemukan, kembalikan indeks
        }

        if (arr[tengah] < cari) {
            kiri = tengah + 1; // Cari di setengah kanan
        } else {
            kanan = tengah - 1; // Cari di setengah kiri
        }
    }

    return -1; // Nilai tidak ditemukan
}

int main() {
    const int ukuran = 7;
    int nilai[ukuran];

    // Input nilai ke dalam array
    for (int i = 0; i < ukuran; i++) {
        cout << "Masukkan bilangan array index ke-" << i << " :";
        cin >> nilai[i];
    }

    int cari;
    cout << "Masukkan data yang dicari: ";
    cin >> cari;

    // Panggil fungsi pencarian biner
    int hasil = bnry(nilai, ukuran, cari);

    // Tampilkan hasil
    if (hasil != -1) {
        cout << "Data ditemukan di index ke-" << hasil << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}
