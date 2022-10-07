#include <iostream>
using namespace std;

int main (){
	cout << "Muhammad Hanif\n";
	cout << "1C Informatika\n";
	//  Menukarkan 2 Variabel tanpa Variabel Sementara
    int m, n;
    m = 55; //Variabel awal
    n = 22; //Variabel awal

    m = m+n; 
    n = m-n; 
    m = m-n; 

    cout << "\nMenukarkan 2 Variabel tanpa Variabel Sementara\n";
    cout << "M : " << m << endl << "N : " << n;

    return 0;
} 
