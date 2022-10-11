#include<iostream>
using namespace std;

int main(){
    // program to print the address and value of a variable whose value is input from user.
    int a;
    cout<<"Enter an integer"<<endl;
    cin>>a;

    int* b = &a;

    cout<<"The address of a is "<<b<<endl;
    cout<<"The value of a is "<<*b<<endl;

    // pointer to pointer 
    int** c = &b;
    cout<<"The address of pointer b is "<<&b<<endl;
    cout<<"The value of c is "<<**c<<endl;
  return 0;
}