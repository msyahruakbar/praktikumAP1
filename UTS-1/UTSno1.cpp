#include <iostream>
#include <unordered_set>
using namespace std;

string convertPassword(string password) {
    if (password.length() != 8) {
        return "Password harus terdiri dari 8 digit";
    }

    unordered_set<char> uniqueChars;
    string convertedPassword = "";

    for (char& c : password) {
        if (!isalnum(c)) {
            return "Password tidak valid, harus terdiri dari huruf dan angka saja";
        }

        if (uniqueChars.find(c) != uniqueChars.end()) {
            return "Terdapat karakter berulang dalam password";
        }

        uniqueChars.insert(c);

        if (isalpha(c)) {
            char convertedChar = c + 2; // Konversi huruf dua langkah setelahnya
            if (convertedChar > 'z') {
                convertedChar -= 26; // Untuk mengatur agar tetap dalam rentang huruf a-z
            }
            convertedPassword += convertedChar;
        } else if (isdigit(c)) {
            int convertedDigit = (c - '0') * 2; // Konversi angka menjadi dua kali angka tersebut
            convertedPassword += to_string(convertedDigit);
        }
    }

    return convertedPassword;
}

int main() {
    string inputPassword;
    cout << "Masukkan password (8 digit): ";
    cin >> inputPassword;

    string converted = convertPassword(inputPassword);

    if (converted.length() == 0) {
        cout << "Password tidak valid, coba lagi." << endl;
    } else {
        cout << "Password yang dimasukkan: " << inputPassword << endl;
        cout << "Password yang tersimpan: " << converted << endl;
    }

    return 0;
}