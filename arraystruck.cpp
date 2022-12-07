#include <iostream>//standar input output
using namespace std;//supaya tidak menggunakan std::

struct mhswa{//isi komponen dari struct
    string nama;//variabel bertipe data string
    string kelas;//variabel bertipe data string
};//penutup dari struct

int main (){//fungsi utama
    
    mhswa mahasiswa[3];
    for (i = 0;i<3;i++) {
        cout << "nama\t : ";
		cin>>mahasiswa[i].nama;
        cout << "kelas\t : ";
		cin>>mahasiswa[i].kelas; 
               
    }
    cout<<"==============="<<endl;
    for (i = 0;i<3;i++) {
        cout << "nama\t : "<< mahasiswa[i].nama<<endl;
        cout << "kelas\t : "<< mahasiswa[i].kelas<<endl;       
    }
}
