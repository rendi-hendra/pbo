#include<iostream>

using namespace std;

class Lingkaran {
	private:
		double radius, hasil;
		double PI = 3.14;
		
	public:
		void setRadius (double r) {
			radius = r;
		}
		
		double getRadius () {
			return radius;
		}
		
		void hitungLuas () {
			hasil = PI * radius * radius;
		}
		
		double getLuas () {
			return hasil;
		}
};

int main () {
	Lingkaran l;
	l.setRadius(7);
	l.hitungLuas();
	cout << "Radius " << l.getRadius() << endl;
	cout << "Luas Lingkaran adalah " << l.getLuas() << endl;
	
	return 0;
}
