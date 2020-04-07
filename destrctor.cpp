//Destructor is a member function which destructs or deletes an object.
//Destructors have same name as the class preceded by a tilde (~)
//Destructors don’t take any argument and don’t return anything


#include <iostream>
using namespace std;
class HelloWorld{
public:
  //Constructor
  HelloWorld(){
    cout<<"Constructor is called"<<endl;
  
 }

  //Destructor
  ~HelloWorld(){
    cout<<"Destructor is called"<<endl;
   }
  //Member function
   void display(){
     cout<<"Hello World!"<<endl;
   }
};
int main(){
   //Object created
   HelloWorld obj;
   //Member function called
   obj.display();
   return 0;
}
