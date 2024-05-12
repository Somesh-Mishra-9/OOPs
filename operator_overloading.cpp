#include<iostream>
using namespace std;

class Rational{
private:
int p;
int q;

public:

Rational(int p=0, int q=0){
this->p=p;
this->q=q;
}



void display(){
cout<<"The Rational number is: "<<p<<"/"<<q<<endl;
}

friend Rational operator +( Rational & r, Rational & s);

friend ostream& operator<<(ostream& a, Rational r);

};

Rational operator +( Rational & r, Rational & s){
Rational temp;
temp.p=s.p*r.q+r.p*s.q;
temp.q=s.q*r.q;
return temp;

}

ostream& operator<<(ostream& a, Rational r){
    a<<r.p<<"/"<<r.q;

    return a;
}

int main(){

    Rational r1(3,4);
    Rational r2(4,5);

    Rational r3=r1+r2;
    r3.display();

    cout<<endl;

    cout<<r3;


}