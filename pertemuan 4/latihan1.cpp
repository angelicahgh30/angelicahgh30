#include <iostream> 
using namespace std;

int main() {
    string kalimat;

    system("CLS");

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);

    
    for (int i = 0; i < kalimat.length(); i++) {
        kalimat[i] = toupper(kalimat[i]);
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;

    return 0;
}