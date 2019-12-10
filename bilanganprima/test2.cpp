#include <iostream>
using namespace std;
int main(){

	int angka = 1;
	int n;
	int total = 0;

	//int tot_aray[5][5];
	cout<<"n? ";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		int hasil = 0;
		int juml = 0;
		for(int j = 1; j <= i; j++)
		{
			//tot_array[i][j] = total + angka;
			total = juml + angka;
			//cout<<tot_array[i][j]<<" + ";
			cout<<total;
			if(j != i){
				cout<<" + ";
			}
			else {
				cout<<" = ";
			}
			hasil = hasil + total;
			angka = angka + 2;
		}

		cout<<hasil;
		cout<<endl;
	}
return 0;
}


