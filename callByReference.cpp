#include<iostream>
using namespace std;

// *****CALL BY REFERENCE*****

void swap(int *a, int *b){ // temp a b
    int temp = *a;         //  5   5 4
    *a = *b;               //  5   4 4
    *b = temp;             //  5   4 5
}
int main(){
   int x, y;
   cout<<"Enter an integer for x "<<endl;
   cin>>x;
   cout<<"Enter an integer for y "<<endl;
   cin>>y;
   cout<<"Before swaping x is "<<x<<" and y is "<<y<<endl;
   swap(&x, &y);
   cout<<"Before swaping x is "<<x<<" and y is "<<y<<endl;
   

   return 0;
}