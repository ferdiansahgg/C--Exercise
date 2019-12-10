#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{

int array[5],n;
cout<<"Berapa Banyak Data : ";
cin>>n;
// Untuk Menentukan Berapa Banyak Data yang akan ditampilkan
// Untuk Melakukan perulangan random nomer
srand(time(0));
    for(int i=0;i<n;i++){
    // Inisialisasi Array number berdasarkan data n
    array[i]=rand()%100;
    // Menampilkan array value
    cout<<array[i]<<endl;
    }
            // Inisialisasi max, min
                int max=array[0];
                int min=array[0];
/* Mencari array untuk menemukan
   minimum dan maximum
   number  */
for(int i=0;i<n;i++){
    // Mencari minimum number didalam array
      if(min>array[i]){
         min=array[i];
      }
      //Mencari maximum number didalam array
      if(max<array[i]){
      max=array[i];
      }
}
       // menampilkan output
        cout<<"Maximum Number is :"<<max<<endl;
        cout<<"Minimum Number  is:"<<min<<endl;

return 0;
}
