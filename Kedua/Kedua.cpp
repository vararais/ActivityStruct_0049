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
	DetailAlamat alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs;
	cout << "Nomor Mahasiswa :";
	cin >> mhs.NIM;
	cout << "Nama Mahasiswa :";
	cin >> mhs.Nama;


	cout << "Alamat Mahasiswa :"; << endl;
	cout << "\t Nama Desa :";
	cin >> mhs.Alamat.desa;
	cout << "t\ Nama Kota :";
	cin >> mhs.alamat.kota;

	cout << "Umur Mahasiswa :";
	cin >> mhs.umur;

}
