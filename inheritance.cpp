#include<iostream>
using namespace std;

// class Base {
//     int x;

// public:
//     Base(int p = 0) {
//         this->x = p;
//     }

//     void show() {
//         cout << "x = " << x;
//     }

//     int getX(){
//         return x;
//     }
// };

// class Derived : public Base {
//     int y;

// public:
//     Derived(int x, int y) : Base(x) {
//         this->y = y;
//     }

//     void show() {
//         cout << "x = " <<getX()<< ",y = " << y;
//     }
// };




// class A{

//     public:
//     A(){
//         cout<<"Default constructor of A"<<endl;
//     }

//     A(int x){
//         cout<<"Parametrized constructor of A"<<endl;
//     }

// };

// class B:public A{
//     public:
//     B(){
//         cout<<"Default constructor of B"<<endl;
//     }

//     B(int x):A(5){
//         cout<<"Parameterized constructor of B"<<endl;
        
//     }
// };

class A {
public:
    int x;
    void show() {
        cout << x;
    }
};

class B : virtual public A {
public:
    int y = 5;

    void display() {
        cout << y;
    }
};

class C : virtual public A {
public:
    int z;

    void Display() {
        cout << z;
    }
};

class D : public B, public C {
public:
    int m;

    void Display() {
        cout << m;
    }
};

int main() {
    D d;

    /*
    Here there are two paths two reach A from D.  1) D-B-A   2) D-C-A. 
    That's why we have used virtual keyword here which will ensure that only one object of A is shared by both B and C.
    This will eliminate the ambiguity . 
    
    */
    d.show();

    return 0;
}