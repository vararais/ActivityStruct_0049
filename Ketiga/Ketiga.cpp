#include <iostream>
#include <string>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct Mahasiswa {
    string NIM;
    string Nama;
    string DetailAlamat;
    int umur;
};

int main()
{
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa :";
    getline(cin, mhs.NIM);
    cout << "Nama Mahasiswa :";
    getline(cin, mhs.Nama);


}
