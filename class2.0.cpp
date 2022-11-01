#include<iostream>
#include<string>
using namespace std;
 
 class Animal{
    public:
        string type, name, breed, sound;
        void getData(){
            cout<<"type = "<<type<<endl;
            cout<<"name = "<<name<<endl;
            cout<<"breed = "<<breed<<endl;
            cout<<"sound = "<<sound<<endl;
        }
 };
int main(){
   Animal dog;
   dog.type = "Dog";
   dog.name = "Tommy";
   dog.breed = "Labrador";
   dog.sound = "Bark";
   dog.getData();
   return 0;
}