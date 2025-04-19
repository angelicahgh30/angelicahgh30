#include <iostream>
using namespace std;

int main() {
    int kode1, kode2, kode3;

    cout << "=== Sistem Keamanan Nuklir ===" << endl;
    cout << "Masukkan kode ke-1 (0-100): ";
    cin >> kode1;
    cout << "Masukkan kode ke-2 (0-100): ";
    cin >> kode2;
    cout << "Masukkan kode ke-3 (0-100): ";
    cin >> kode3;
    cout << "Kode yang dimasukkan: " << kode1 << ", " << kode2 << ", " << kode3 << endl;

    if (kode1 > 50 && kode2 > 50 && kode3 > 50) {
    
        int total = kode1 + kode2 + kode3;

        cout << "Total dari ketiga kode adalah: " << total << endl;

        if (total > 200) {
            cout << "=== Status: Aman ===" << endl; 
            cout << "Sistem berhasil dinonaktifkan. Misi berhasil!" << endl;
        } else {
            cout << "=== Status: Bahaya ===" << endl; 
            cout << "Total tidak mencukupi untuk menonaktifkan sistem. Misi gagal!" << endl;
        }
    } else {
        cout << "=== Status: Bahaya ===" << endl; 
        cout << "Salah satu atau lebih kode kurang dari atau sama dengan 50. Sistem terkunci!" << endl;
    }

}