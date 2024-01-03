#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Input password
    cout << "Masukkan password (maksimal 8 karakter): ";
    string password;
    cin >> password;

    // Validasi panjang password
    if (password.length() > 8) {
        cout << "Password terlalu panjang. Maksimal 8 karakter.\n";
        return 1;
    }

    // Validasi huruf dan angka
    for (char& c : password) {
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '1' && c <= '4'))) {
            cout << "Password tidak valid. Gunakan huruf kecil/besar dan angka 1-4.\n";
            return 1;
        }
    }

    // Konversi password
    string convertedPassword = "";
    for (char& c : password) {
        if (c >= 'a' && c <= 'z') {
            convertedPassword += (char)(((c - 'a' + 2) % 26) + 'a');
        }
        else if (c >= 'A' && c <= 'Z') {
            convertedPassword += (char)(((c - 'A' + 2) % 26) + 'A');
        }
        else if (c >= '1' && c <= '4') {
            int digit = c - '0';
            convertedPassword += (digit * 2);
        }
    }

    // Output password dan hasil konversi
    cout << "Password yang diinput: " << password << endl;
    cout << "Password yang tersimpan: " << convertedPassword << endl;

    return 0;
}