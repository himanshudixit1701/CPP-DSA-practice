#include<iostream>
using namespace std;

int main(){
   int p, r, t;
   cout<<"Enter the value of p(principal amount)"<<endl;
   cin>>p;
   cout<<"Enter the value of r(rate)"<<endl;
   cin>>r;
   cout<<"Enter the value of t(time)"<<endl;
   cin>>t;

   int si;
   si = (p*r*t)/100;

   cout<<"The interest amount = "<<si<<endl;

   return 0;
}