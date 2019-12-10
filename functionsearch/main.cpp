#include <iostream>

int kWord;
stdDetails  stdFind;
cout<<"Enter the Student Registration Number of the Student: ";
cin>>kWord;
for(int x=0;x<i;x++){
  stdFind = stdDetailsStructs_0[x];
  if(!strcmp(kWord,stdFind.stdNum)){
    search=1;
    break;
  }
}
if(search==1){
  display(stdFind);
}else{
  cout<<"Student details not found please try again."<<endl;
}
