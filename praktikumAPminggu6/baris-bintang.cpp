#include <iostream>
using namespace std;

int main() {
    int jumlahBaris;
    cout << "Masukkan jumlah baris: ";
    cin >> jumlahBaris;

    for (int i = 1; i <= jumlahBaris; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
      }