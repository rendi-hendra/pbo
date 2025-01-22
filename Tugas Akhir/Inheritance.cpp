#include <iostream>
using namespace std;

// Class Abstract
class Karyawan {
	public:
		string nama, nik; 
		double gajiPokok;

		// Method Abstract
	    	virtual void tampilkanInfo() = 0;
};

class KaryawanTetap: public Karyawan {
	public:
		double tunjangan;
		
		double hitungGaji() {
			return gajiPokok + tunjangan;
		}

		// Override/Menimpa Method tampilkanInfo
		void tampilkanInfo() override {
			cout << "Nama: " << nama << endl;
			cout << "Nik: " << nik << endl;
			cout << "Tunjangan: " << tunjangan << endl;
			cout << "Gaji Pokok: " << gajiPokok << endl;
			cout << "Total Gaji: " << hitungGaji() << endl;
		}
};

class KaryawanHarian: public Karyawan {
	public:
		int jumlahHariKerja;
		double upahPerHari;
		
		double hitungGaji() {
        	return jumlahHariKerja * upahPerHari;
    	}

		// Override/Menimpa Method tampilkanInfo
	    	void tampilkanInfo() override {
			cout << "Nama: " << nama << endl;
			cout << "Nik: " << nik << endl;
			cout << "Jumlah Hari Kerja: " << jumlahHariKerja << endl;
			cout << "Upah Per Hari: " << upahPerHari << endl;
			cout << "Total Gaji: " << hitungGaji() << endl;
		}
};


int main() {
	KaryawanTetap kt;
	kt.nama = "Rendi";
	kt.nik = "123";
	kt.gajiPokok = 20000;
	kt.tunjangan = 10000;
	kt.tampilkanInfo();
	
	cout << endl;
	
	KaryawanHarian kh;
	kh.nama = "Hendra";
	kh.nik = "321";
	kh.gajiPokok= 10000;
	kh.jumlahHariKerja = 30;
	kh.upahPerHari= 1000;
	kh.tampilkanInfo();
	
	
	return 0;
}
