#include"loan.h"
#include<iostream>
using namespace std;

int main (void)
{
      PersonalLoan pl(1200,2);
      HomeLoan hl(24000,4);  
      cout << "EMI for personal loan : " << pl.get_emi()<<endl;
      cout << "EMI for home loan : " << hl.get_emi()<<endl;
}
