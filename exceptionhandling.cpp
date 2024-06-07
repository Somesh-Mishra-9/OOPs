#include<iostream>
using namespace std;

int main(){

    int a=0, b=10,c;
    try{
        if(a==0) throw 1;
        int c=b/a;
    }
    catch(int e){
        cout<<"Bad input "<<e;
    }

    return 0;
}