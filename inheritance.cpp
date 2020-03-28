// c++ inhritance program
#include<iostream>
using namespace std;
class parent //base class
{
	public:
		int id_p;  // parent id
};

class child : public parent      //sub class inheriting from base 
{
	public:
	int id_c;  // child id
};

int main()
{
	child obj;
	cout << "enter child and parent id respectively : <<endl;
	cin >> obj.id_c >> obj.id_p;

	cout << "child id is "  << obj.id_c << endl;
	cout << "parent id is " << obj.id_p << endl;
	 return 0;
}
