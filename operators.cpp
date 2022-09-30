#include<iostream>

using namespace std;

 int main(){
    int a=4, b=5;
    cout<<"Operators in C++:"<<endl;

    //Arithmatic operators
    cout<<"Arithmatic operators"<<endl;
    
      cout<<"\nThe value of a+b is "<<a+b;
      cout<<"\nThe value of a-b is "<<a-b;
      cout<<"\nThe value of a*b is "<<a*b;
      cout<<"\nThe value of a/b is "<<a/b;
      cout<<"\nThe value of a%b is "<<a%b;
      cout<<"\nThe value of a++ is "<<a++;
      cout<<"\nThe value of a-- is "<<a--;
      cout<<"\nThe value of ++a is "<<++a;
      cout<<"\nThe value of --a is "<<--a<<endl;

      cout<<endl;

    //Assignment operator
    // int a= 3, b = 9;
    // char d = 'd';

   //  Comparision Operator
   cout<<"Comparision operator"<<endl;

   cout<<"The value of a == b is "<<(a==b)<<endl;
   cout<<"The value of a != b is "<<(a!=b)<<endl;
   cout<<"The value of a >= b is "<<(a>=b)<<endl;
   cout<<"The value of a <= b is "<<(a<=b)<<endl;
   cout<<"The value of a > b is "<<(a>b)<<endl;
   cout<<"The value of a < b is "<<(a<b)<<endl;
   cout<<endl;

   // Logical operators
   cout<<"Logical operator"<<endl;

   cout<<"The value of logical AND operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
   cout<<"The value of logical OR operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
   cout<<"The value of logical NOT operator (!(a==b)) is:"<<(!(a==b))<<endl;
   
    return 0;

 }