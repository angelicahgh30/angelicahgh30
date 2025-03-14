#include <iostream>
using namespace std;

int main() {
    double r, V, Lp;
    const double pi = 3.14159; 

    
    cout << "Masukkan jari-jari bola: ";
    cin >> r;

    V = (4.0 / 3.0) * pi * r * r * r; 
    Lp = 4 * pi * r * r;              

  
    cout << "Volume bola: " << V << endl;
    cout << "Luas permukaan bola: " << Lp << endl;

    return 0;
}