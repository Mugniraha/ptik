#include <iostream>
using namespace std;
struct mhswa{
	string nama;
	int kelas;
};
int main(){
	int jml_indx;
	cout<<"jml data:";cin>>jml_indx;
	mhswa mahasiswa[jml_indx];
	for(int a=0;a<jml_indx;a++){
		cout<<"data ke-"<<a+1<<endl;
		cout<<"nama\t";cin>>mahasiswa[a].nama;
		cout<<"kelas\t";cin>>mahasiswa[a].nama;
		cout<<endl;	
	}
	for(int a=0;a<jml_indx;a++){
		cout<<"data ke-"<<a+1<<endl;
		cout<<"nama\t"<<mahasiswa[a].nama<<endl;
		cout<<"kelas\t"<<mahasiswa[a].kelas<<endl;
		cout<<endl;	
}
}
