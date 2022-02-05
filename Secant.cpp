#include<iostream>
#include<cmath>
using namespace std;

double CalcFunc( double Num)
{
    return(cos(Num)+exp(Num)-5);
}

void Secant( double a , double b , double error)
{
    int count =0;
    double c;
  do 
  {
        
        if(fabs(CalcFunc(b)-CalcFunc(a))<0.0000005)
        {
            cout<<"Error"<<endl;
        exit(0);
        }

       else if(count>500)
        {
            cout<<"Error"<<endl;
            exit(0);
        }

        else 
        {
            c = (a*CalcFunc(b) - b*CalcFunc(a))/(CalcFunc(b)-CalcFunc(a));
            
            cout<<count<<"\t"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<CalcFunc(c)<<endl;
            a=b;
            b=c;

        }

        count++;

  }while (fabs(CalcFunc(c))>error);
  
  cout<<"Solution is"<<c<<endl;
}
int main()
{
    double I1 ,I2,error;
  cout<<"Enter Interval A"<<endl;
  cin>>I1;
  cout<<"Enter Interval B"<<endl;
  cin>>I2 ;

  cout<<"Enter Error"<<endl;
  cin>>error;

  Secant(I1,I2,error);
}
