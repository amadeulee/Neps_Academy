#include <iostream>
using namespace std;

int main(){

    int b,c,total;

    cin>>b>>c;

    total=b+c;

    if(total%2==0){
        cout<<"Bino";
    }else{
        cout<<"Cino";
    }

    return 0;
}