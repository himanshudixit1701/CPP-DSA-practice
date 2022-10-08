#include<iostream>
using namespace std;

int main(){
    
    float x = 455;
    float & y = x;

    cout<<x<<endl;
    cout<<y;

    // ********Type Casting*********

    float a = 5.6;
    cout<<"The value of a is "<<(int)a;  
    return 0;
}
