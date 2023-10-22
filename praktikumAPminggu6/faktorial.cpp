#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int nilai;
    double faktorial = 1;

    cout << "Masukkan bilangan : ";
    cin >> nilai;

    for (int i = 1; i <= nilai; i++) {
        faktorial *= i;
    }

    cout << nilai << "! = " << fixed << setprecision(0) << faktorial << endl;

    return 0;
}