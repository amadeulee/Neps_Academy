#include <iostream>
using namespace std;

int main(){

    int n;

    cin>>n;

    if(n<1 || n>1000){
        exit(1);
    }

    int x,i=0,j=0,k=0,total=0;

    while(i<n){

        cin>>x;
        total=total+x;
        if(total<1000001){
            j++;
        }
        i++;
    }
    if(total<1000000){
        exit(1);
    }
    cout<<j;

    return 0;
}