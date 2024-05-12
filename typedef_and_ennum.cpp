#include<iostream>
using namespace std;

int main(){

    enum day{mon,tue,wed=4,thur,fri};

    day d1=mon;
    day d2=tue;
    day d3= thur;

    cout<< d1<<d2<<d3;

}