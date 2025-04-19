#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "=== Program Penghitung Judul Buku Digital ===" << endl;
    cout << "Silakan masukkan daftar judul buku yang dipisahkan oleh spasi:" << endl;
    cout << "Masukkan daftar judul buku: ";
    getline(cin, input);  

    int i = 0;
    int count = 0;
    int length = input.length();

   
    while (i < length && input[i] == ' ') {
        i++;
    }

    while (i < length) {
        if (input[i] != ' ') {
            count++;  
            while (i < length && input[i] != ' ') {
                i++;  
            }
        } else {
            while (i < length && input[i] == ' ') {
                i++;
            }
        }
    }

    cout << "Jumlah judul buku : " << count << endl;
    cout << "Terima kasih telah menggunakan sistem pustakawan digital!" << endl;

}