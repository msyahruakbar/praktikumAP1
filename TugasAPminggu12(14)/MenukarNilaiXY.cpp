#include <iostream>
using namespace std;

int main() {
    
    int X, Y;

    cout << "Masukkan nilai X: ";
    cin >> X;

    cout << "Masukkan nilai Y: ";
    cin >> Y;

   cout << "Sebelum pertukaran, Nilai X = " << X << " dan Y = " << Y << endl;

     int temp = X;
    X = Y;
    Y = temp;

    
    cout << "Setelah pertukaran, Nilai X = " << X << " dan Y = " << Y << endl;

    return 0;
}
