
class Loan
{
	protected:
		double principle;
		float period;
	public :
		Loan ()                  // default constructor
		{
			principle = 2000;
			period = 2;
	       	}
		Loan (double p,float period)         // parametrised constructor
		{
			principle=p;
			this->period=period;
		}
		double get_principle()
		{
			return principle;
		}
		void set_principle(double p)
		{
			principle=p;
		}
		float get_period()
		{
			return period;
		}
	        void  set_period()
		{
			this->period=period;
		}

		virtual float get_rate()=0;          // pure vir fn

		double get_emi()
		{
                     float emi;
		     emi=principle * (1 + (( get_rate() * period )/100))/(12*period);
		     return emi;
		}


};

class PersonalLoan : public Loan            // derived class 
{
	private :
	public :
	

		PersonalLoan(double principle,float period):Loan (principle, period)	    // parameterised constructor
		{

		}

		float get_rate()
                {
			float rate;
			if(principle <= 500000 )
			{
				rate=0.15;
			}
			else if ( principle > 500000 )
			{
				rate=0.16;
			}
			else 
			{
				return 0;
			}
			return rate;
		}
};
class HomeLoan : public Loan
{
	public :

	HomeLoan (double principle,float period) : Loan (principle, period)
	{

	}

		float get_rate()
		{
		
			float rate;
			if (principle <= 2000000 )
			{
				rate=0.1;
			}
			else if (principle > 2000000 )
			{
				rate =0.11;
			}
			else 
			{
				return 0;
			}
			return rate;
		}
};
