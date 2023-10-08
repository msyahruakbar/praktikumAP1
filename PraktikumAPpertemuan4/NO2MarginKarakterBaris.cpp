#include <iostream>
using namespace std;

int main() {
    double PanjangKertas, LebarKertas, MarginAtas, MarginBawah, MarginKiri, MarginKanan;
    double UkuranTitik;
    char spasi;

    cout << "Masukkan panjang kertas (inci): ";
    cin >> PanjangKertas;
    cout << "Masukkan lebar kertas (inci): ";
    cin >> LebarKertas;
    cout << "Masukkan margin atas (inci): ";
    cin >> MarginAtas;
    cout << "Masukkan margin bawah (inci): ";
    cin >> MarginBawah;
    cout << "Masukkan margin kiri (inci): ";
    cin >> MarginKiri;
    cout << "Masukkan margin kanan (inci): ";
    cin >> MarginKanan;
    cout << "Masukkan ukuran titik suatu garis: ";
    cin >> UkuranTitik;
    cout << "Apakah garis diberi spasi ganda? (y/n): ";
    cin >> spasi;

    if (spasi == 'y' || spasi == 'Y') {
        UkuranTitik *= 2.0;
    }

    double panjang_efektif = LebarKertas - MarginKiri - MarginKanan;

    int jumlah_karakter = static_cast<int>(panjang_efektif / (UkuranTitik / 72.0));

    int jumlah_baris = static_cast<int>((PanjangKertas - MarginAtas - MarginBawah) / (UkuranTitik / 72.0));

    cout << "\nJumlah karakter dalam satu baris: " << jumlah_karakter << " karakter" << endl;
    cout << "Jumlah baris yang dapat dicetak pada kertas: " << jumlah_baris << " baris" << endl;

    return 0;
}


