#include<iostream>
using namespace std:
class complex_number //class initialisation
{
	public:
		int r,i;
};

int main()
	(
	 complex_number n1,n2,sum;  // creating objects
	
		 cout<< "enter real and imaginary parts:"<<endl; //getting the values
		 cin>> n1.r>>n1.i>> n2.r>>n2.i; 

		sum.r=n1.r+n2.r;  // addition of real part 
		 sum.i=n1.i+n2.r;  // addition of imaginary part
	
	// displaying the sum of complex number
                if ( sum.i >=0)  
		 cout << "sum of two complex number ="<< sum.r<<"+"<< sum.i<<"i";
		 else
		 cout <"sum of two complex number ="<< sum.r<< "-" <<sum.i<<"i";
		 return 0;
		 }

//sum of 2 complex no.s:wq

