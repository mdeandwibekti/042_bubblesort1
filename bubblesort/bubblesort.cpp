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
void bubbleshortarray() { // prosedur untuk mengurutkan array dengan metode bubble short
	int pass = 1; // step 1
	do {
		for (int j = 0; j <= n - 1 - pass; j++) { //step 2
			if (arr[j] > arr[j + 1]) {            //step 3
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		pass = pass + 1;      //step 4

		cout << "\npass " << pass - 1 << ": "; // output ke layar
		for (int k = 0; k < n; k++) {        // looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";           //output ke layar

		}
		cout << endl;
	} while (pass <= n - 1);   //step 5
}
void display() {
	cout << endl;
	cout << "=================" << endl;
	cout << "element array yang telah tersusun" << endl;
	cout << "=================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j];
		if (j < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}
int main() {
	input(); // call the input function to get user input
	bubbleshortarray(); //call the selection sort function
	display(); //display the sorted array
	system("pause");

	return 0;
}
