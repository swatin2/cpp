#include<iostream>
using namespace std;

class company_e
{
	int id;
	int hr;
	int rate;
	int age;
	public:
        void emp_info(int a,int b,int c,int d)
	{
		id=a;
		hr=b;
		rate=c;
		age=d;
	}
	int get_income()
	{
		if (hr>180)
		{
			return 250*hr;
		}
		else 
		{
			return 180*hr;
		}
	}
	int get_gross_annual_income()
        {
		return get_income()*12;
	}
};

int main()
{
	company_e emp;
	int p,q,r,s;
	cout<<"enter employee id / hr / rate / age"<<endl;
	cin>>p>>q>>r>>s;
	emp.emp_info(p,q,r,s);
        int income=emp.get_income();
        cout<<" empolyee income per monthg is "<<income <<endl;
	int annualincome=emp.get_gross_annual_income();
	cout<<"employee annual income is"<<annualincome <<endl;
	return 0;
}
