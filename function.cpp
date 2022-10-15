#include<iostream>
using namespace std;

int sum(int, int);

int main(){
   int num1, num2;
   cout<<"Enter number a"<<endl;
   cin>>num1;
   cout<<"Enter number b"<<endl;
   cin>>num2;
// num1 and num2 are actual parameters
   cout<<"The sum is "<<sum(num1, num2);
   return 0;
}
int sum(int a, int b)
{
// a and b are formal parameters
    int c = a+b;
    return c;
}