#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

struct Anak {
    string nama;
    int tanggal;
    int bulan;
    int tahun;
};

bool compareByYear(const Anak& a, const Anak& b) {
    return a.tahun < b.tahun;
}

int main() {
    const int maxData = 20;
    Anak dataAnak[maxData];

    srand(time(0));
    for (int i = 0; i < maxData; ++i) {
        dataAnak[i].nama = "Anak" + to_string(i + 1);
        dataAnak[i].tanggal = rand() % 30 + 1;
        dataAnak[i].bulan = rand() % 12 + 1;
        dataAnak[i].tahun = rand() % 10 + 2010;
    }

    sort(dataAnak, dataAnak + maxData, compareByYear);

    cout << "Data yang belum terurut:\n";
    for (int i = 0; i < maxData; ++i) {
        cout << dataAnak[i].nama << " - " << dataAnak[i].tahun << endl;
    }

    cout << "\nData yang sudah terurut:\n";
    for (int i = maxData - 1; i >= 0; --i) {
        cout << dataAnak[i].nama << " - " << dataAnak[i].tahun << endl;
    }

    cout << "\nData anak yang tahun lahirnya 2020:\n";
    for (int i = 0; i < maxData; ++i) {
        if (dataAnak[i].tahun == 2020) {
            cout << dataAnak[i].nama << " - " << dataAnak[i].tahun << endl;
        }
    }

    return 0;
}