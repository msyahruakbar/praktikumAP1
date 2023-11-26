#include <iostream>

using namespace std;

struct Barang {
    string kodeBrg;
    string namaBrg;
    int jumlah;
    int hargaSatuan;
};

int main() {
    const int size = 20; 
    Barang barang[size];

    cout << "Penjualan Barang" << endl;
    for (int i = 0; i < size; i++) {
        cout << endl;
        cout << "Kode barang: ";
        cin >> barang[i].kodeBrg;

        cout << "Nama barang: ";
        cin >> barang[i].namaBrg;

        cout << "Jumlah: ";
        cin >> barang[i].jumlah;

        cout << "Harga satuan: ";
        cin >> barang[i].hargaSatuan;
    }

    int total_harga_penjualan = 0;
    for (int i = 0; i < size; i++) {
        total_harga_penjualan += barang[i].jumlah * barang[i].hargaSatuan;
    }

    int keuntungan = total_harga_penjualan * 0.1;

    cout << endl;
    cout << "Total harga penjualan: Rp. " << total_harga_penjualan << endl;
    cout << "Keuntungan: Rp. " << keuntungan << endl;

    return 0;
          }
