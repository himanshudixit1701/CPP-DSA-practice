#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter the value of n"<<endl;
   cin>>n;
   cout<<endl;
   int i = 0;
   int sum = 0;
   while(i<=n){
    sum = sum+i;
    i = i+2;
   }
    cout<<"The sum is "<<sum;
   return 0;
}