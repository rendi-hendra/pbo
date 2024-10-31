#include <iostream>
#include "mahasiswa.h"
#include "dosen.h"

using namespace std;

int main () {
	cout << "==========Mahasiswa==========" << endl;
	cout << endl;
	
	Mahasiswa mhs1;
	mhs1.nim = 1;
	mhs1.nama = "Rendi Hendra S.";
	mhs1.nilai = 99.9;
	mhs1.tampil();
	mhs1.nilaiMhs(50);
	
	Dosen dsn1;
	dsn1.nik = 234;
	dsn1.nama = "Dito S.Kom";
	dsn1.matakuliah = "PBO";
	dsn1.tampil();
	
	return 0;
}
