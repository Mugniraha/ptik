#include <iostream>

using namespace std;

int main(){
 
  // deklarasi tipe data variabel
  string nama;
  int nim;
  string jurusan;
  string hobi;
  int umur;
  char jenis_kelamin;
 
  // --- proses input ---
  cout << "Siapakah namamu?" << endl;
  cout << "jawab: ";
  // menyimpan data ke variabel
  getline(cin,nama);
  
  cout <<"Berapa nim kamu?" << endl;
  cout <<"jawab: ";
  // menyimpan data ke variabel
  cin >> nim;
  
  // --- proses input ---
  cout << "Apa jurusan kamu?" << endl;
  cout << "jawab: ";
  // menyimpan data ke variabel
  getline(cin,jurusan);
  
  // --- proses input ---
  cout << "Apa hobi kamu" << endl;
  cout << "jawab: ";
  // menyimpan data ke variabel
  getline(cin,hobi);
 
  cout << "Berapa umurmu?" << endl;
  cout << "jawab: ";
  // menyimpan data ke variabel
  cin >> umur;
 
  cout << "Jenis kelamin [L/P]: ";
  // menyimpan data ke variabel
  cin >> jenis_kelamin;
 
  // --- proses output ---
  cout << "Salam kenal, " << nama << " Sekarang engkau berusia ";
  cout << umur << " dan kau berjenis kelamin "<< jenis_kelamin;
 
  return 0;

}
