#include<iostream>
using namespace std;

class Rekening {
	private:
		string nama;
		double saldo;
	
	public:
		void setSaldo(double s) {
			saldo = s;
		}
		
		double getSaldo() {
			return saldo;
		}
		
		void ambilSaldo(double a) {
			if(a < 0) {
				cout << "Saldo Tidak Boleh Negatif" << endl;
			}
			else if(saldo - a >= 0) {			
				setSaldo(saldo - a);
				cout << "Saldo Yang anda ambil " <<a << ". Saldo anda sekarang " << getSaldo() << endl;
			} else {
				cout << "Saldo Anda Tidak Cukup" << endl;
			}
		}
};

int main () {
	Rekening r;
	r.setSaldo(10000);
	cout << "Saldo: " << r.getSaldo() << endl;
	r.ambilSaldo(8000);
	
	
	return 0;
}
