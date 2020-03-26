#include<iostream>
using namespace std:
class complex_number
{
	public:
		int r,i;
};

int main()
	(
	 complex_number n1,n2,sum;
		 cout<< "enter real and imaginary parts:"<<endl;
		 cin>> n1.r>>n1.i>> n2.r>>n2.i;
		 sum.r=n1.r+n2.r;
		 sum.i=n1.i+n2.r;

		 if ( sum.i >=0)
		 cout << "sum of two complex number ="<< sum.r<<"+"<< sum.i<<"i";
		 else
		 cout <"sum of two complex number ="<< sum.r<< "-" <<sum.i<<"i";
		 return 0;
		 }


