#include<iostream>
#include<cmath>
using namespace std;

double CalcFunc(double Num)
{
      return (exp(Num));
}

double Derivative(double Num)
{
   return(exp(Num));
}

void NewtonRapson( double X , double error)
{
    int count =0;
    double Y , diff;

    do
    {
        if(fabs(Derivative(X))<0.00005)
    {
        cout<<"Error: Numerical"<<endl;
        exit(0);
    }

    else if(count > 500)
    {
       cout<<"Error: Timeout"<<endl;
       exit(0);      
     }

     else
     {
         
          Y = X - (CalcFunc(X)/Derivative(X));
          diff = fabs(Y-X);
          X=Y;
     }

     

     count++;
    } while (fabs(CalcFunc(Y))>error);
    cout<<"Solution  is"<<X<<endl;
    
}

int main()
{
    double I1, I2,error;

    cout<<"Enter Starting point"<<endl;
    cin>>I1;
    

    cout<<"Enter Error"<<endl;
    cin>>error;

    NewtonRapson(I1,error);
}