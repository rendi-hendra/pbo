#include<iostream>
using namespace std;

class PersegiPanjang {
	private:
		double panjang, lebar;
		
	public:
		// Setter
		void setDimensi (double p, double l) {
			if (p > 0 &&  l > 0) {
				panjang = p;
				lebar = l;
			} else {
				cout << "Dimensi harus bernilai positif" << endl;
			}
		}
		
		// Getter
		double getLuas() {
			return panjang * lebar;
		}
		
		double getKeliling () {
			return 2 * (panjang + lebar);
		}
};

int main () {
	PersegiPanjang p;
	
	// Masukan nilai panjang dan lebar
	p.setDimensi(8,5);
	
	// Menampilkan di layar
	cout << "Luas persegi panjang adalah " << p.getLuas() << endl;
	cout << "Keliling persegi panjang adalah " << p.getKeliling() << endl;
	
	return 0;
}
