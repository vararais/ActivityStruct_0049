#include <iostream>
#include <string>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
}

struct Mahasiswa {
    string NIM;
    string Nama;
    DetailAlamat Alamat;
    int umur;
};
int main()
{
    std::cout << "Hello World!\n";
}


