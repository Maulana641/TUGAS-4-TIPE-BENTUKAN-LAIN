#include <iostream>
#include <string>
using namespace std;

struct Data_Buku
{
    string  Judul_Buku;
    string  penulis;
    string  penerbit;
    int      tahun_terbit;
    
};

int main()
{
    Data_Buku *ptr, d;

    ptr = &d;
    
    cout << "Judul Buku: ";
    cin >> (*ptr).Judul_Buku;
      cout << "Nama Penulis: ";
    cin >> (*ptr).penulis;
      cout << "Nama Penerbit: ";
    cin >> (*ptr).penerbit;
      cout << "Tahun Terbit: ";
    cin >> (*ptr).tahun_terbit;


    cout <<"Judul Buku       :"<< (*ptr).Judul_Buku<<endl;
    cout <<"Nama Penulis   :"<< (*ptr).penulis<<endl;
    cout <<"Nama Penerbit :"<< (*ptr).penerbit<<endl;
    cout <<"Tahun Terbit     :"<< (*ptr).tahun_terbit<<endl;
    

    return 0;
}
