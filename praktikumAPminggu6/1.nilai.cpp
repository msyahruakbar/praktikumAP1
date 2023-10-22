#include <iostream>
#include <limits>
using namespace std;

int main() {
    const int n = 10;

    int angka;
    double sum = 0;
    int tertinggi = numeric_limits<int>::min();
    int terendah = numeric_limits<int>::max();

    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai " << i + 1 << ": ";
        cin >> angka;

        sum += angka;

        if (angka > tertinggi) {
            tertinggi = angka;
        }

        if (angka < terendah) {
            terendah = angka;
        }
    }

    double rata_rata = sum / n;

    cout << "Nilai Rata-rata: " << rata_rata << endl;
    cout << "Nilai Tertinggi: " << tertinggi << endl;
    cout << "Nilai Terendah: " << terendah << endl;

    return 0;
}


