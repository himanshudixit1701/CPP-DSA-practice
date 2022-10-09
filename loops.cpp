#include<iostream>

using namespace std;

int main(){

    // ********** For Loop *************
    // for loop to print multiplication table
    int a;
    cout<<"Enter a positive integer"<<endl;
    cin>>a;

    cout<<"The multiplication table is"<<endl;

    for(int i=1; i<=10; i++){
        cout<<a<<" * "<<i<<" = "<< a*i<<endl;
    }
    /*comment out the code form line 23 to line 27 and line 32 to line 36 to execute the code of for loop wihtout any mess*/

    // ********** While Loop ************
    // printing 1 to 40 using while loop
    
    int i = 1;
    while(i<=40){
        cout<<i<<endl;
        i++;
    }
    /*comment out the code form line 9 to line 17 and line 32 to line 36 to execute the code of while  loop wihtout any mess*/

    // ********** Do While Loop ************
    // printing 1 to 40 using do while loop
    
    int n = 1;
    do{
        cout<<n<<endl;
        n++;
    }while(n<=40);
    /*comment out the code form line 23 to line 27 and line 23 to line 27 to execute the code of do while loop wihtout any mess*/


    return 0;
}