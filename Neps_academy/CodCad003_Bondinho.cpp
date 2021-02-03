#include <iostream>
using namespace std;

int main(){

    int A,M,total;

    cin>>A>>M;

    total=A+M;

    if(total>50 || total<1){
        cout<<"N";
    }
    else{
        cout<<"S";
    }

    return 0;
}