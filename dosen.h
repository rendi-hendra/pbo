#include <iostream>
using namespace std;

class Dosen {
	public: 
	int nik;
	string nama, matakuliah;
	
	
	void tampil () {
		cout << "Nama Dosen " << nama << ", NIK " << nik << ", Nama Mata Kuliah " << matakuliah << endl; 
	}
};
