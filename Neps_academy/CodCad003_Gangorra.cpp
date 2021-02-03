#include <iostream>
using namespace std;

int main(){

    int p1,p2,c1,c2,esquerdo,direito;

    cin>>p1>>c1>>p2>>c2;

    esquerdo=p1*c1;
    direito=p2*c2;

    if(esquerdo>100 && esquerdo<10000 && esquerdo>direito){
        cout<<"-1";
    }
    else if(direito>100 && direito<10000 && direito>esquerdo){
        cout<<"1";
    }else{
        cout<<"0";
    }

    return 0;
}