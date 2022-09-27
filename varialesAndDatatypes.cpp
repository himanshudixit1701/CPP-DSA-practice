#include<iostream>

using namespace std;
int glo = 6;                //glo is global variable
void sum ()
{
    int a;
    cout<< glo;
}

int main (){
    int glo = 9;            //glo is local variable
    glo = 78;

    //integer variable
    
    int a = 5;              
    int b = 4; 

    //float variable      

    float pi = 3.141;  

    //char variable       

    char c = 'h';
    
    //Boolean variable
    
    bool is_true = false;
    sum();
    cout<<glo<< is_true;
    cout<<"\nthe value of a is "<<a<<"\nthe value of b is "<<b;
    cout <<"\nthe value of pi is "<<pi;
    cout <<"\nthe value of c is "<<c;

    return 0;
}