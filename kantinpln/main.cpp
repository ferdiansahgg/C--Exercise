#include<iostream>
using namespace std;

int menu[3][2]={{15000,20000},{18000,23000},{21000,25000}};
int gol;
char a[2]={'Y','T'};
int i,n,total,total1,b;
char jwb[5];
int jenis[3]={1,2,3};

float harga1 ()
{
	if(jenis[i]==1){

	total = menu[0][0]*n;
	cout<<"Rp. "<<total;
	}
	else if(jenis[i]==2){

	total = menu[1][0]*n;
	cout<<"Rp. "<<total;
	}else {

	total = menu[2][0]*n;
	cout<<"Rp. "<<total;
}
}
float harga2 ()
{
	if(jenis[i]==1){

	total = menu[0][1]*n;
	cout<<"Rp. "<<total;
	}
	else if(jenis[i]==2){

	total = menu[1][1]*n;
	cout<<"Rp. "<<total;
	}else {

	total = menu[2][1]*n;
	cout<<"Rp. "<<total;
	}
}
	int main ()
{
		cout<<"NO		MENU			HARGA"<<endl;
	cout<<"				    MHS       KRY"<<endl;
	cout<<"1.	   NASI GORENG		Rp.15.000 Rp.20.000		"<<endl;
	cout<<"2.	   MIE GORENG		Rp.18.000 Rp.23.000		"<<endl;
	cout<<"3.	   KWETIAU		Rp.21.000 Rp.25.000		"<<endl;cout<<endl;
	cout<<" Golongan 1. Mahasiswa "<<endl;
	cout<<" Golongan 2. Karyawan "<<endl;

	cout<<"Masukkan Golongan Anda [1/2] : ";
	cin>>gol;

	if (gol==1){
		do
		{
			cout<<"Input No Menu : ";cin>>jenis[i];
	cout<<"Jumlah Yang dibeli : ";cin>>n;
	harga1();
	cout<<endl;
	cout<<"Apa ada tambahan [Y/T] ? ";cin>>a[2];

		}while (a[2]=='Y');
		cout<<"Terima Kasih"<<endl;
	}else if(gol==2)
	do
		{
			cout<<"Input No Menu : ";cin>>jenis[i];
	cout<<"Jumlah Yang dibeli : ";cin>>n;
	harga2();cout<<endl;
	cout<<"Apa ada tambahan [Y/T] ? ";cin>>a[2];

		}while (a[2]=='Y');
		cout<<"Terima Kasih"<<endl;

		return 0;
}

