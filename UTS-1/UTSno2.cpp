#include <iostream>
using namespace std;

int main() {
    // Kurs mata uang
    double kursUSD = 15000;  // 1 US Dollar = Rp. 15,000
    double kursEuro = 0.997 * kursUSD; // 1 Euro = 0.997 US Dollar

    // Tabungan Pak Anto
    double tabunganUSD = 12000;  // Tabungan dalam US Dollar
    double tabunganEuro = 20000; // Tabungan dalam Euro

    // Konversi tabungan ke Rupiah
    double tabunganRupiahUSD = tabunganUSD * kursUSD;
    double tabunganRupiahEuro = tabunganEuro * kursEuro;

    // Total tabungan dalam Rupiah
    double totalTabunganRupiah = tabunganRupiahUSD + tabunganRupiahEuro;

    // Harga mobil baru yang akan dibeli
    double hargaMobilBaru = 425000000 ; // Harga mobil baru dalam Rupiah

    // Menghitung sisa uang setelah membeli mobil baru
    double sisaUang = totalTabunganRupiah - hargaMobilBaru;

    // Menampilkan hasil perhitungan
    cout << "Total dana Pak Anto setelah konversi ke Rupiah: " << totalTabunganRupiah << " Rupiah" << endl;

    if (sisaUang >= 0) {
        cout << "Sisa dana Pak Anto setelah membeli mobil: " << sisaUang << " Rupiah" << endl;
    } else {
        cout << "Maaf, uang tidak mencukupi untuk membeli mobil baru." << endl;
    }

    return 0;
}