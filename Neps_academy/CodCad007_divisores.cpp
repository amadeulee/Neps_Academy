#include <iostream>
using namespace std;

int main(){

    int n,i=0,j=1;

    cin>>n;

    while(i<n){
        if(n%j==0){
            cout<<j<<" ";
        }
        j++;
        i++; 
    }
    return 0;
}