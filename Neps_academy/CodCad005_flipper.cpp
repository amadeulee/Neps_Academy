#include <iostream>
using namespace std;

int main(){

    int p,r;

    cin>>p>>r;

    if(p!=1 && p!=0){
        exit(1);
    }
    if(r!=1 && r!=0){
        exit(1);
    }
    if(p==0 && r==0){
        cout<<"C";
    }else if(p==1 && r==0){
        cout<<"B";
    }else if(p==0 && r==1){
        cout<<"C";
    }else{
        cout<<"A";
    }
    return 0;
}