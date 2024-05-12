#include<iostream>
using namespace std;


int m=6;

// scope resolution operator
int main (){

int m=5;

{
int m=4;

cout<<"m="<<m<<endl;
cout<<"m="<<::m;



}


return 0;
}