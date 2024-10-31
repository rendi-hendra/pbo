#include <iostream>
using namespace std;

class Mahasiswa {
	public: 
	int nim;
	string nama;
	float nilai, nilaiTotal;
	
	
	void tampil () {
		cout << "NIM \t:" << nim << endl;
		cout << "NAMA \t:" << nama << endl;
		cout << "NILAI \t:" << nilai << endl;
	}
	
	void nilaiMhs (int nilaiTugas) {
		nilaiTotal = ((nilai + nilaiTugas) / 2);
		cout << "Nilai Total = " << nilaiTotal << endl;
	}
};
