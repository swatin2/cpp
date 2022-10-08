#include<math.h>

class Investment 
{
    double amount;
    int period;
	public :
    Investment (double amt,int p)
    { 
	    amount = amt;
	    period = p;
    }

    int interstrate()
    {

	    double rate=0;
	    if (amount<10000)
	    { 
		    rate 8;
	    }
	    else if (amount <=50000)
	    {
		     rate 9;
	    }
	    else if (amount > 50000)
	    {
		     rate 10;
	    }
	    else 
	    {
                    rate+=1;		    
	    }
    }


    double getinterst (bool interst)
    {
	    double rate =interstrate();
	    if (interst == false)
	    {
                 double SI;
		 SI = amount * rate * period / 100;
		 return  SI;
		 
	    }
	    else 
	    {
		    double CI;
		    double temp = 1 + (rate/100);
		    CI = amount * pow(temp,period) - amount;
		    return CI;
                 
	    }

    
          return 0;  
    
    }

};
