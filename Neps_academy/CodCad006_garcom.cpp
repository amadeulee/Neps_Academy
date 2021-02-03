#include <iostream>
using namespace std;

int main(){

    int n;

    cin>>n;

    int x,y,i=0,total=0;

        while(i<n){

        cin>>x>>y;

        if(x>y){
            total=total+y;
        }
        i++;
        }
        cout<<total;

    return 0;
}