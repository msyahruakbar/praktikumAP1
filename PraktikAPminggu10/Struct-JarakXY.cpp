#include <iostream>
#include <cmath>

using namespace std;

struct point {
    int x;
    int y;
};

double hitungJarak(point t1, point t2) {
    int dx = t2.x - t1.x;
    int dy = t2.y - t1.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    point titik1, titik2;

    cout << "Masukkan koordinat titik pertama (x y): ";
    cin >> titik1.x >> titik1.y;

    cout << "Masukkan koordinat titik kedua (x y): ";
    cin >> titik2.x >> titik2.y;

    double jarak = hitungJarak(titik1, titik2);
    cout << "Jarak antara kedua titik adalah: " << jarak << endl;

    return 0;
}

