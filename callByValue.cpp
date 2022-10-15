#include<iostream>
using namespace std;

// *****CALL BY VALUE*****

void swapPointer(int &a, int &b){// temp a b
   int temp = a;                 //  5   5 4
   a = b;                        //  5   4 4
   b = temp;                     //  5   4 5
}
int main(){
   int x, y;  
   cout<<"Enter an integer for x"<<endl;
   cin>>x;
   cout<<"Enter an integer for y"<<endl;
   cin>>y;
   cout<<"Before swaping the value of x is "<<x<<" and the value of y is "<<y<<endl;
   swapPointer(x, y);
   cout<<"After swaping the value of x is "<<x<<" and the value of y is "<<y<<endl;
   return 0;
}