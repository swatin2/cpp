#include<iostream>
using namespace std;
class Patient 
{
	private :
	int patient_id;
  	string patient_name;
	int patient_bedtype;
	int no_of_days;
	public :
	Patient()
	{
	}

      	Patient(int pid,int btype,int d)
	{
	       	patient_id=pid;
		//		patient_name="abc";
		patient_bedtype=btype;
		no_of_days=d;	
	}


	void set_patient_info(int id,string name,int type,int days)
	{
		patient_id=id;		
		patient_bedtype=type;
		no_of_days=days;
		patient_name=name;
	}
	string get_name()//string getter
	{
		return patient_name;
	}
	/*
	int get_patient_id()
	{
		return patient_id;
	}
	int get_patient_bedtype()
	{
        	return patient_bedtype;
	}
	int get_days()
	{
		return no_of_days;
	}
	string set_patient_name()
	{
		return  patient_name;
	}*/
	virtual double getbill()
	{
             int bedtype=patient_bedtype;
	     int bill=0;
	     if (bedtype == 1)
                     bill = no_of_days * 500;
	     else if (bedtype == 2)
                     bill = no_of_days * 350;
	     else if (bedtype == 3)
                     bill = no_of_days * 250;
	     else
                     bill = no_of_days * 100;

             return bill;	    
	}
};

class InHousePatient : public Patient
{

	private :
		float discount;
	public :
	
	InHousePatient():Patient()
	{
          discount=0;
	}

	InHousePatient(int id,int btype,int nod,double discount):Patient(id, btype ,nod)
	{
           	this->discount = discount;
	}

	double getbill()
	{
	/*	int price =0;
	    double bill=0;
	    int bedtype=patient_bedtype;
	    if ( bedtype == 1 )
                     bill = no_of_days * patient_bedtype * 450;
	    else  if ( bedtype == 2)
                     bill = no_of_days * patient_bedtype * 250;
	    else if(bedtype == 3 )
                     bill = no_of_days * patient_bedtype * 100;

	    discount=bill*5/100;
	    bill = bill - discount; */
		double bill = Patient::getbill();
		if (bill > 5000)
		{
		        discount = bill*5/100;
			return bill - discount;
		}
	    return bill;
	}

};
