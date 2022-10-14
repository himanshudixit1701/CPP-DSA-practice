#include<iostream>
using namespace std;

struct employee
{
    int eId;
    char favChar;
    float salary;
};

int main(){
   struct employee himanshu;
   himanshu.eId = 1;
   himanshu.favChar = 'N';
   himanshu.salary = 100000;

   cout<<himanshu.eId<<endl;
   cout<<himanshu.favChar<<endl;
   cout<<himanshu.salary<<endl;
   return 0;
}