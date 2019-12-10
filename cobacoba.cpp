#include <iostream>

using namespace std;

main()
{
    int a[8]={1,1,0,1,1,0,0,1}, count=0;
    for(int i=0;i<8;i++) {
    if(count==0&&a[i]==1){
    cout<<a[i]<<" ";
    count++;
    }
    else{
    count=0;
    }
    }

}

