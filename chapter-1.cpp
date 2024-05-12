
/*

___________________________Notes__________________________________

*/


// p-1 Understanding a c++ program.

// #include<iostream> 
// /*The #include iostream is a directive that tells the compiler to 
// include the contents of the iostream header file in the program.*/


// using namespace std;
// /*This defines the scope of all the identifiers that are used 
// in the program. std is the namespace where all the standard class
//   libraries are defined.*/
// int main(){

// int a, b;
// cout<<"Enter two numbers: ";
// // cascading of input
// cin>>a>>b; // input can either be given in one line or multiple lines.
// // cascading of output.
// cout<<"The two numbers are: " <<a<<" and "<<b;
// }



// p-2 Example of classes and objects

// #include<iostream>
// using namespace std;

// class student{
//     string name;
//     int roll_number;
//     int total_marks;

//     public:
//     void getData();
//     void display();   

// };

// void student::getData(){
//     cout<<"Enter the name of the student: "<<endl;
//     getline(cin,name); // cin can read only one word that's why I have used getline.
//     cout<<"Enter the roll number of the student: "<<endl;
//     cin>>roll_number;
//     cout<<"Enter the total marks of the student: "<<endl;
//     cin>>total_marks;
// }

// void student:: display(){
//     cout<<"Name: "<<name<<endl;
//     cout<<"Roll Number: "<<roll_number<<endl;
//     cout<<"Total Marks: "<<total_marks<<endl;
// }

// int main(){
//  student st;

//  st.getData();
//  st.display();

// }



//P-3 
// #include<iostream>
// using namespace std;

// int main(){
//     int i=10,j=5;

//     int modResult=0, divResult=0;

//     modResult=i%j;
//     cout<<"Mod Result:"<<modResult;

//     divResult=i/modResult;

//     cout<<"Div Result: "<< divResult;


// }


//P-4 Using ennumerated data types

#include<iostream>
using namespace std;

int main(){

enum color{red, green=7, blue=10, violet};
enum background{};
background white= (background)8;
color pink= (color)9;
cout<<green<<endl;
cout<<blue<<endl;
cout<<violet<<endl;
cout<<pink<<endl;
cout<<white<<endl; 

int c =white;

cout<<"C = "<<c<<endl;

return 0;

}

