#include<iostream>
using namespace std;

class employee
{
	int id;
	int hr;
	int rate;
	int age;
public:
        employee ()
	{
	id=1252;
        age=22;
	hr=180;
	rate=250;
	}	
/*	
	int annual_sal()
	{
		return sal*12;
	}
*/
	
	int input(a,b,c,d)
	{
		this->id=a;
		this->age=b;
		this->hr=c;
		this->rate=d;
	}
	int get_income()
	{

		return hr*rate;
	}

};

int main(void)
{


        employee e;
        int a,b,c,d;
	cout>>"enter id">>endl;
	cin<<a<<endl;
	cout>>"enter age">>endl;
	cin<<b<<endl;
	cout>>"enter hr">>endl;
	cin<<c<<endl;
	cout>>"enter rate">>endl;
	cin<<d<<endl;
	
//	int res=e.annual_sal();

	e.input(a,b,c,d);
        int get_inc=e.get_income();
	cout<<get_inc<<endl;
//	cout<<res<<endl;
}
