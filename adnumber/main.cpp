#include <iostream>
using namespace std;
main(){
int nilai['n'];
int temp;
int n;
cout<<"Masukan Banyak Data: ";
cin>>n;
cout<<endl;
for (int a=1; a<=n; a++){
cout<<"Masukan Angka untuk di index ke["<<a<<"]: ";
cin>>nilai[a];
}
cout<<"\n\n";
cout<<"Urutan sebelum disorting"<<endl;
for(int a=1; a<=n; a++){
cout<<nilai[a]<<" ";
}
for(int a=n-1; a>=1; a--){
for(int b=1; b<=a; b++){
if(nilai[b]>nilai[b+1]){
temp=nilai[b+1];
nilai[b+1]=nilai[b];
nilai[b]=temp;
}
}
}
cout<<"\n\nUrutan setelah disorting secara (Ascending)"<<endl;
for (int a=1; a<=n; a++){
cout<<nilai[a]<<" ";
}

cout<<"\n\n";
cout<<"\n\nUrutan setelah disorting secara (Descending)"<<endl;
for (int a=n; a>=1; a--){
cout<<nilai[a]<<" ";
}
return 0;
}
