#include <iostream>
using namespace std;


struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa {
	string NIM;
	string Nama;
	string Alamat;
	DetailAlamat alamt;
	int umur;
};

int main()
{
	Mahasiswa mhs;
	cout << "Nomor Mahasiswa :";
	cin >> mhs.NIM;
	cout << "Nama Mahasiswa :";
	cin >> mhs.Nama;


}
