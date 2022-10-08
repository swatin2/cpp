#include<iostream>
#include"invest.h"
#include<math.h>
using namespace std;

int main ()
{
	double amt;
	int pd;
	bool type=true;
	cout<< "enter amount and period "<< endl;
	cin>>amt>>pd;
	cout<<"enter type 1. SI / 2. CI "<<endl;
	int itype =0;
	cin>>itype;

	if (itype == 1 )
		type=true;
	else
		type=false;

	Investment i(amt,pd);
	cout<<"calculated interstrate is interst is "<<i.getinterst(type)<<endl;


	return 0;
}
