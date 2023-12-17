#include <iomanip>
#include <iostream>
using namespace std;

const int jumlahBarang = 10;

int main() {
  string namaBarang[jumlahBarang];
  double harga[jumlahBarang];
  int terjual[jumlahBarang];

  cout << "Masukkan data penjualan barang:" << endl;
  for (int i = 0; i < jumlahBarang; ++i) {
    cout << "Item " << i + 1 << endl;

    cout << "Nama barang: ";
    cin >> namaBarang[i];

    cout << "Harga: ";
    cin >> harga[i];

    cout << "Jumlah terjual: ";
    cin >> terjual[i];
  }

  double totalPenjualan = 0;
  for (int i = 0; i < jumlahBarang; ++i) {
    totalPenjualan += harga[i] * terjual[i];
  }

  int maxTerjual = terjual[0];
  int indexLaku = 0;
  for (int i = 1; i < jumlahBarang; ++i) {
    if (terjual[i] > maxTerjual) {
      maxTerjual = terjual[i];
      indexLaku = i;
    }
  }

  cout << fixed << setprecision(2);
  cout << "\nRekapitulasi Penjualan Barang:" << endl;
  cout << "-----------------------------" << endl;
  for (int i = 0; i < jumlahBarang; ++i) {
    cout << "Item " << i + 1 << ": " << namaBarang[i]
         << " - Total Penjualan: " << (harga[i] * terjual[i]) << endl;
  }
  cout << "-----------------------------" << endl;
  cout << "Total penjualan di Minimarket adalah: " << totalPenjualan << endl;
  cout << "Item yang paling laku adalah item ke-" << indexLaku + 1 << ": "
       << namaBarang[indexLaku] << endl;

  return 0;
}