#include<iostream>
using namespace std;

int main(){

    // selection control structure (if else-if else)

    // // cout<<"This is Himanshu"<<endl;
    int age;

    cout<<"Enter your age"<<endl;
    cin>>age;
     
    if(age<18){
        cout<<"You are not an adult"<<endl;
    }
    else if(age==18){
        cout<<"You are an adult and your age is 18"<<endl;
    }
    else{
        cout<<"You are an adult and your age is greater then 18"<<endl;
    }

    /* please comment out the code from line 14 to line 22 to run the switch case code without any mess and comment out the code from line 28 to line 45 to run the if else code without any mess */
    
    // control structure switch case

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    
    case 20:
        cout<<"You are 20"<<endl;
        break;
    
    case 22:
        cout<<"You are 22"<<endl;
        break;
    
    default:
        cout<<"No spacial cases"<<endl;
        break;
    }
    return 0;

}