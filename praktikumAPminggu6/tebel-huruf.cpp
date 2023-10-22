#include <iostream>
using namespace std;

int main() {
    char hr = 'A';
    for (int baris = 0; baris < 26; baris++) {
        for (int kolom = baris; kolom < 26; kolom++) {
            cout << hr++ << "\t";
        }
        hr = 'A' + baris + 1;
        cout << endl;
    }
    return 0;
}