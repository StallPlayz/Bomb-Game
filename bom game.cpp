#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main () {
	srand(time(0));
	int tebak, minim = 1, max = 100;
	int bom = rand() %100+1;
	cout << "Permainan Awas Bom!\n" << "\nMasukkan angka dan selalu hindari bom, jika kena... \n\n DUAR!!\n";
	
	while (true) {
		cout << "\nMasukkan tebakan mulai dari " << minim << " hingga " << max << endl;
		cin >> tebak;
		if (tebak<bom) {
			if(tebak<minim) {
				cout << "Range menebak angka dari " << minim << " hingga " << max << "\n\n";
			} else {
				minim = tebak + 1;
				cout << "\nTebakan bukan bom! Kamu aman!\n" << "Range dimulai dari " << minim << " Hingga " << max << endl;
			}
		} else if (tebak>bom) {
			if (tebak>max) {
				cout << "Range menebak angka dari " << minim << " hingga " << max << "\n\n";
			} else {
				max = tebak - 1;
				cout << "\nTebakan bukan bom! Kamu aman!\n" << "Range dimulai dari " << minim << " Hingga " << max << endl;
			}
		} else {
			cout << "\nDuar!!\n" << "Kamu kena bom! Kau sebuah kegagalan!";
			break;
		}
		if (minim==bom) {
			if (max==bom) {
				cout << "Selamat!! Kamu Menang!\n" << "Bom ada di " << bom;
				break;
			}
		}
	}
}
