#include <iostream>
using namespace std;

int main(){

    int n;

    cin>>n;

    if(n<1 || n>1000){
        exit(1);
    }

    int x,i,j=1,k=0,total=0;

    for(i=0;i<n;i++){

        cin>>x;
        total=total+x;
        if(total<1000000){
            j++;
        }
    }
    if(total<1000000){
        exit(1);
    }
    cout<<j;

    return 0;
}