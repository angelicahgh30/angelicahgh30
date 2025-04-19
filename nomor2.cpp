#include <iostream>
using namespace std;

int main() {
    int kode;
    cout << "=== Pembuka Kode Rahasia Mainan Anak ===" << endl;
    cout << "Silakan masukkan kode 3 digit (antara 100 hingga 999): ";
    cin >> kode;

    if (kode >= 100 && kode <= 999) {
        int digit1 = kode / 100;          
        int digit2 = (kode / 10) % 10;    
        int digit3 = kode % 10;           

        int jumlah = digit1 + digit2 + digit3;

        cout << "Kode yang Anda masukkan: " << kode << endl;
        cout << "Jumlah digit: " << jumlah << endl;
        cout << "Selamat! Kode berhasil dibuka." << endl;
    } else {
        cout << "Kode Salah!" << endl;
        cout << "Silakan coba lagi." << endl;
    }

}