#include<iostream>
using namespace std;



class A{
    public:
    virtual void foo(){
        cout<<"function inside A";
    }
};

class B: public A{
    public:
    void foo(){
        cout<<"Function inside B";
    }
};

int main(){

    
    A *p= new B();

    p->foo();
    return 0;


        
    
}