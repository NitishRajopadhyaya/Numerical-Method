#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

float CalcFunc(float Num)
{
	
		
	return(exp(2.80*Num)+cos(Num)-(3*pow(Num,2)));
    
}

  void Bisection(float I1 , float I2)
  {
      
      double c,e;
      int count=0;
       cout<<"Enter Error"<<endl;
       cin>>e;
      do
      {
         c=(I1+I2)/2;
          cout<<count<<"\t"<<I1<<"\t"<<I2<<"\t"<<c<<"\t"<<CalcFunc(c)<<endl;

           if((CalcFunc(c)*CalcFunc(I1)) >0)
              I1=c;
           else
               I2=c;  

          count++;      

       }while(abs(CalcFunc(c))>e || abs(I2-I1)>e);

       cout<<"Solution is \t"<<c;
       cout<<"Function value \t"<<CalcFunc(c);
  }

void CheckFunc( float I1 , float I2)
{
   if((CalcFunc(I1) * CalcFunc(I2)) >0)
       cout<<"Error";

   else if((CalcFunc(I1) * CalcFunc(I2))==0)
       {
           if(CalcFunc(I1)==0)
               cout<<"Solution is \t"<<I1<<endl;

           if(CalcFunc(I2)==0)
               cout<<"Solutio is \t"<<I2<<endl;    
       }

    else
         Bisection(I1,I2);         
}

int main()
{
    float I1,I2;

    cout<<"Enter Interval 1 "<<endl;
    cin>>I1;

    cout<<"Enter Interval 2 "<<endl;
    cin>>I2;

    CheckFunc(I1,I2); 
}
