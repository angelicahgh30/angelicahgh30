#include <iostream>
using namespace std;

int main() {
    int angka;

    
    system("CLS");
    
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> angka;

    if (angka % 10 == 0) {
        cout << angka << " adalah kelipatan 10." << endl;
    } else if (angka % 5 == 0) {
        cout << angka << " adalah kelipatan 5." << endl;
    } else {
        cout << angka << " bukan kelipatan 5 atau 10." << endl;
    }

}
