#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];


struct array{
int A[10];
}
int main()
{
    cout << "Enter information of students: " << endl;

    for(int i = 0; i < 10; ++i)
    {
        s[i].roll = i+1;
        cout << "For roll number" << s[i].roll << "," << endl;

        cout << "Enter name: ";
      
        
        cin >> s[i].name;
cin>>A[i].name;
      
        
        cout << "Enter marks: ";
        cin >> s[i].marks;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;
    
    
    
    cout<<"displaying or using the array"<<endl;


    for(int i = 0; i < 10; ++i)
    {
        cout << "\nRoll number: " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
        cout<<"using the array: "<<A[i].marks<<endl;
    }

    return 0;
}
