#include <iostream>  // header untuk C++
#include <conio.h>  // header untuk fungsi getch() dan getche()
using namespace std;

int main() {

  string nama;
  char KOM, jenisKelamin;
  float IP;
  int NIM;

  /*ini untuk komen 
  beberapa baris*/

  cout << "Hello world" << endl;

  cout << "Masukkan nama Anda : " ;
//   cin >> nama;
getline(cin, nama);

  cout << "Masukkan KOM Anda : " ;
  cin >> KOM;

  cout << "Masukkan IP Anda : " ;
  cin >> IP;

  cout << "Masukkan NIM Anda : " ;
  cin >> NIM;

  cout << "Masukkan jenis kelamin (L/P) : ";
  jenisKelamin = getche(); // agar karakter langsung tampil, tanpa tekan enter


  /*untuk output*/
  cout << "n" << nama << endl;
  cout << nama << endl;
  cout << KOM << endl;
  cout << IP << endl;
  cout << NIM << endl;
  putchar (jenisKelamin); //untuk menampilkan karakter

  getch(); // karakter yang diketik ga ditemapilkan di layar

}