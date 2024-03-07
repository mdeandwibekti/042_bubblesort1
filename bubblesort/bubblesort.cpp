#include <iostream>
using namespace std;

int arr[20];           //deklarasi array a dengan ukuran 20
int n;                 //deklarasi variabel n untuk menyimpan banyaknya elemen

void input() {         //prosedur untuk input
	while (true) {
		cout << "masukan banyaknya elemen pada array : ";   //output ke layar
		cin >> n; //input dari pengguna
		if (n <= 20) //jika n kurang dari atau sama dengan 20
			break; //keluar dari loop
		else {     //jika n lebih dari 20
			cout << "\narray dapat mempunyai maksimal 20 elemen.\n"; //output ke layar
		}
	}
	cout << endl;                          //output baris kosong
	cout << "===================" << endl; //output ke layar
	cout << "masukan elemen array" << endl;//output ke layar
	cout << "===================" << endl; //output ke layar

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}
