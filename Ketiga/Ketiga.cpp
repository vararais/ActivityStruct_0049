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


    cout << "Alamat Mahasiswa :" << endl;
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa;
    cout << "\t Nama Kota :";
    cin >> mhs.alamat.kota;
    cout << "Umur Mahasiswa :";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n NIM :" << mhs.NIM;
    cout << "\n Nama :" << mhs.Nama;
    cout << "\n Alamat :";
    cout << "\n \t Desa :" << mhs.alamat.desa;
    cout << "\n \t Kota : " << mhs.alamat.kota;
    cout << "\n Umur :" << mhs.umur;


}
