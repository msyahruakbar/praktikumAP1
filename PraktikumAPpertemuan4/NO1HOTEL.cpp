#include <iostream>
using namespace std;

// Konstanta diskon
const int MIN_KAMAR_DISKON_10 = 10;
const int MIN_KAMAR_DISKON_20 = 20;
const int MIN_KAMAR_DISKON_30 = 30;
const double DISKON_10 = 0.10;
const double DISKON_20 = 0.20;
const double DISKON_30 = 0.30;
const int HARI_MINIMAL_DISKON = 3;
const double DISKON_HARI = 0.05;

int main() {
    // Variabel input
    double biaya_sewa_kamar;
    int jumlah_kamar_dipesan;
    int jumlah_hari_pemesanan;
    double pajak_penjualan;

    // Meminta input dari pengguna
    cout << "Masukkan biaya sewa satu kamar per malam: $";
    cin >> biaya_sewa_kamar;

    cout << "Masukkan jumlah kamar yang dipesan: ";
    cin >> jumlah_kamar_dipesan;

    cout << "Masukkan jumlah hari pemesanan kamar: ";
    cin >> jumlah_hari_pemesanan;

    cout << "Masukkan pajak penjualan dalam persen: ";
    cin >> pajak_penjualan;

    // Menghitung diskon berdasarkan jumlah kamar yang dipesan
    double diskon = 0.0;
    if (jumlah_kamar_dipesan >= MIN_KAMAR_DISKON_30) {
        diskon = DISKON_30;
    }
    else if (jumlah_kamar_dipesan >= MIN_KAMAR_DISKON_20) {
        diskon = DISKON_20;
    }
    else if (jumlah_kamar_dipesan >= MIN_KAMAR_DISKON_10) {
        diskon = DISKON_10;
    }

    // Menghitung diskon tambahan jika jumlah hari pemesanan mencapai syarat
    if (jumlah_hari_pemesanan >= HARI_MINIMAL_DISKON) {
        diskon += DISKON_HARI;
    }

    // Menghitung total biaya kamar
    double total_biaya_kamar = (biaya_sewa_kamar * jumlah_kamar_dipesan * jumlah_hari_pemesanan) * (1 - diskon);

    // Menghitung pajak penjualan
    double total_pajak_penjualan = (total_biaya_kamar * pajak_penjualan) / 100;

    // Menghitung total jumlah tagihan
    double total_tagihan = total_biaya_kamar + total_pajak_penjualan;

    // Menampilkan hasil
    cout << "\nRincian Pemesanan:" << endl;
    cout << "Biaya sewa satu kamar per malam: $" << biaya_sewa_kamar << endl;
    cout << "Diskon kamar: " << (diskon * 100) << "%" << endl;
    cout << "Jumlah kamar yang dipesan: " << jumlah_kamar_dipesan << endl;
    cout << "Jumlah hari pemesanan kamar: " << jumlah_hari_pemesanan << endl;
    cout << "Total biaya kamar: $" << total_biaya_kamar << endl;
    cout << "Pajak penjualan (" << pajak_penjualan << "%): $" << total_pajak_penjualan << endl;
    cout << "Total jumlah tagihan: $" << total_tagihan << endl;

    return 0;
}