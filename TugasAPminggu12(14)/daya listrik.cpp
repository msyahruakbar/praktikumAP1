#include <iostream>

using namespace std;

int main() {
    const double biaya900VA = 1350;
    const double biaya1300VA = 1440;
    const double biaya2200VA = 1450;
    const double biaya3500VA = 1500;

    double teganganListrik;
    cout << "Masukkan tegangan listrik rumah (VA): ";
    cin >> teganganListrik;

    double biayaPerKwh;
    if (teganganListrik == 900) {
        biayaPerKwh = biaya900VA;
    } else if (teganganListrik == 1300) {
        biayaPerKwh = biaya1300VA;
    } else if (teganganListrik == 2200) {
        biayaPerKwh = biaya2200VA;
    } else if (teganganListrik == 3500) {
        biayaPerKwh = biaya3500VA;
    } else {
        cerr << "Tegangan listrik tidak valid." << endl;
        return 1;
    }

    double penggunaanAC, penggunaanKulkas, penggunaanStrika, penggunaanMesinCuci, penggunaanLampu, penggunaanLainnya;

    cout << "Masukkan penggunaan AC (wh): ";
    cin >> penggunaanAC;

    cout << "Masukkan penggunaan Kulkas (wh): ";
    cin >> penggunaanKulkas;

    cout << "Masukkan penggunaan Strika (wh): ";
    cin >> penggunaanStrika;

    cout << "Masukkan penggunaan Mesin Cuci (wh): ";
    cin >> penggunaanMesinCuci;

    cout << "Masukkan penggunaan Lampu (wh): ";
    cin >> penggunaanLampu;

    cout << "Masukkan penggunaan Lainnya (wh): ";
    cin >> penggunaanLainnya;

    double totalPenggunaan = penggunaanAC + penggunaanKulkas + penggunaanStrika + penggunaanMesinCuci + penggunaanLampu + penggunaanLainnya;

    double biayaBulanan = totalPenggunaan * 30 / 1000 * biayaPerKwh;

   
    cout << "Biaya pembayaran listrik tiap bulan: Rp. " << biayaBulanan << endl;

    return 0;
}
