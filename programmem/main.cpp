#include <iostream>
#include <stdlib.h>
using namespace std;

double total,r,d;
char pil1,pil2;

float rupiah()
{
	total = r / 14000;
	cout<<"Uang anda dikonversi menjadi $ "<<total<<endl;
}

float dolar()
{
	total = d * 14000;
	cout<<"Uang anda dikonversi menjadi Rp. "<<total<<endl;
}

int main()
{
	cout<<"Program Konversi Mata Uang"<<endl;
	cout<<"1. Rupiah ke Dollar"<<endl;
	cout<<"2. Dollar ke Rupiah"<<endl;
system("cls");


	do
	{
cout<<"Masukkan Pilihan Anda [1/2] :";
	cin>>pil1;
		if(pil1=='1')
		{
			cout<<"Banyak uang anda : Rp. ";cin>>r;
			rupiah();
		}
		else if(pil1=='2')
		{
			cout<<"Banyak uang anda : $ ";cin>>d;
			dolar();
		}
		else if(pil1>=3)
		{
			cout<<"Pilihan hanya 1 dan 2";
		}

		cout<<"\nApakah ingin mengulang ? [y/t] : ";cin>>pil2;
	}
	while(pil2=='y');

	cout<<"Terima Kasih";
	return 0;
}
