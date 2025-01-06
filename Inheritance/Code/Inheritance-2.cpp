#include <iostream>
using namespace std;

class Kendaraan {
	public:
		int jumlahRoda;
		virtual void infoKendaraan() = 0;
};

class Mobil: public Kendaraan {
	public:
		string merek;
		void infoKendaraan() override {
			cout << "Merek: " << merek << endl;
			cout << "Jumlah Roda: " << jumlahRoda << endl; 
		}
};

int main () {
	Mobil m1;
	m1.merek = "Honda";
	m1.jumlahRoda = 4;
	m1.infoKendaraan();
	
	return 0;
}
