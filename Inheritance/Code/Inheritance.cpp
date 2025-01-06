#include <iostream>
using namespace std;

class Binatang {
	public:
		virtual void suara() = 0;
};

class Kucing: public Binatang {
	public:
		void suara() override {
			cout << "Kucing: Meongg Meongg" << endl;
		}
};

class Anjing: public Binatang {
	public:
		void suara() override {
			cout << "Anjing: Gukk Gukk" << endl;
		}
};

int main () {
	cout << ">>Suara Suara Binatang<<" << endl;
	cout << "========================" << endl;
	Kucing k;
	k.suara();
	Anjing a;
	a.suara();
 	
	return 0;
}
