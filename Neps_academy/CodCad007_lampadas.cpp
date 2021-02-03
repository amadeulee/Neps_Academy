#include <iostream>
using namespace std;

int main(){

    int n;

    cin>>n;

    int x,i,a=0,b=0;

    for(i=0;i<n;i++){
        cin>>x;
        if(x==1){
            if(a==0){
                a=1;
            }else if(a==1){
                a=0;
            }
        }
        if(x==2){
            if(a==0){
                a=1;
            }else if(a==1){
                a=0;
            }
            if(b==0){
                b=1;
            }else if(b==1){
                b=0;
            }
        }
    }
    cout<<a<<endl<<b;
    return 0;
}