#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama; 
    string nim;  
    int nilai[3]; 
    const string mataKuliah[3] = {
        "Algoritma dan Pemrograman", 
        "Probabilitas dan Statistika", 
        "Sistem Operasi"
    };

    cout << "=== Program Penilaian Mahasiswa ===" << endl;
    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, nama); 
    cout << "Masukkan NIM: ";
    getline(cin, nim); 


    for (int i = 0; i < 3; i++) {
        cout << "Masukkan Nilai " << mataKuliah[i] << ": ";
        cin >> nilai[i];

        while (nilai[i] < 0 || nilai[i] > 100) {
            cout << "Nilai tidak valid! Masukkan nilai antara 0 hingga 100: ";
            cin >> nilai[i];
        }
    }

    cout << "\nHasil Penilaian:" << endl;
    double total = 0; 

    for (int i = 0; i < 3; i++) {
        total += nilai[i]; 
        if (nilai[i] >= 60) {
            cout << mataKuliah[i] << ": Lulus." << endl;
        } else {
            cout << mataKuliah[i] << ": Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;
        }
    }

    double rataRata = total / 3;
    cout << "Nilai rata-rata semester ini: " << rataRata << endl;

    if (rataRata >= 60) {
        cout << "Selamat, Anda lulus semester ini!" << endl;
    } else {
        cout << "Anda tidak lulus semester ini. Silakan perbaiki di semester berikutnya." << endl;
    }

}