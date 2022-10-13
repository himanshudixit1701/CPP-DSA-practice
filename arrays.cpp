#include<iostream>
using namespace std;

int main(){

   int marks[4] = {33, 45, 99, 75};

   cout<<"These are marks"<<endl;
   cout<<marks[0]<<endl;
   cout<<marks[1]<<endl;
   cout<<marks[2]<<endl;
   cout<<marks[3]<<endl;
   cout<<endl;

//    we can also print ṭhis array using loop
//  ***** for loop *****
    for(int i=0; i<4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    cout<<endl;

//  ***** while loop *****
    int a=0;
    while ( a<4)
    {
        cout<<"The value of marks "<<a<<" is "<<marks[a]<<endl;
        a++;
    }
    cout<<endl;

//  ***** do while loop *****
    int b=0;
    do
    {
       cout<<"The value of marks "<<b<<" is "<<marks[b]<<endl;
       b++;
    } while ( b<4);
    

   int mathMarks[4];

   mathMarks[0] = 25;
   mathMarks[1] = 35;
   mathMarks[2] = 60;
   mathMarks[3] = 78;

   cout<<"These are mathMarks"<<endl;
   cout<<mathMarks[0]<<endl;
   cout<<mathMarks[1]<<endl;
   cout<<mathMarks[2]<<endl;
   cout<<mathMarks[3]<<endl;
   cout<<endl;

   int chemistryMarks[] = {31, 53, 62, 71};
   
   cout<<"These are chemistryMarks"<<endl;
   cout<<chemistryMarks[0]<<endl;
   cout<<chemistryMarks[1]<<endl;
   cout<<chemistryMarks[2]<<endl;
   cout<<chemistryMarks[3]<<endl;
   cout<<endl;
   
//    pointers and arrays

    int* p = chemistryMarks;

    cout<<"The value at chemistryMarks[0] is "<<*p<<endl;
    cout<<"The value at chemistryMarks[1] is "<<*(p+1)<<endl;
    cout<<"The value at chemistryMarks[2] is "<<*(p+2)<<endl;
    cout<<"The value at chemistryMarks[3] is "<<*(p+3)<<endl;
   
   return 0;
}