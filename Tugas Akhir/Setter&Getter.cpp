#include <iostream>
using namespace std;

class Buku {
	private:
		string judul, pengarang, penerbit;
		int tahunTerbit;
		
	public:
//		Method Getter
		string getJudul() {
			return judul;
		}
		
		string getPengarang() {
			return pengarang;
		}
		
		string getPenerbit() {
			return penerbit;
		}
		
		int getTahunTerbit() {
			return tahunTerbit;
		}
		
//		 Method Setter
		void setJudul(string judul) {
			this->judul = judul;
		}
		
		void setPengarang(string pengarang) {
			this->pengarang = pengarang; 
		}
		
		void setPenerbit(string penerbit) {
			this->penerbit = penerbit;
		}
		
		void setTahunTerbit(int tahun) {
//			Validasi Tahun Tidak Boleh Negative
			if(tahun > 0) {
				this->tahunTerbit = tahun;
			} else {
				cout << "Tahun Harus Positif Tidak Boleh Negative!" << endl;
				this->tahunTerbit = 0;
			}
		}
		
//		Menampilkan Detail Info Buku
		void tampilkanInfoBuku() {
			if(tahunTerbit > 0) {
				cout << "Judul: " << getJudul() << endl;
				cout << "Pengarang: " << getPengarang() << endl;
				cout << "Penerbit: " << getPenerbit() << endl;
				cout << "Tahun Terbit: " << getTahunTerbit() << endl;
			} 
		}
};

int main () {
//	Positif
	Buku bk;
	bk.setJudul("PBO");
	bk.setPengarang("Rendi");
	bk.setPenerbit("Gramedia");
	bk.setTahunTerbit(20);
	bk.tampilkanInfoBuku();
	
	cout << endl;
	
//	Negative
	Buku bk1;
	bk1.setJudul("PBO");
	bk1.setPengarang("Rendi");
	bk1.setPenerbit("Gramedia");
	bk1.setTahunTerbit(-1);
	bk1.tampilkanInfoBuku();
	
	return 0;
}
