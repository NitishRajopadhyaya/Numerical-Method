#include<iostream>
#include<cmath>
using namespace std;
double calcfunction(double A)
{
    return(1/(1+pow(A,2)));
}

void trapezoidal(double I1 , double I2 , int n)
{
    double H,S1,S2=0,param,I;
    H = (I2-I1)/n;
    S1 = calcfunction(I1) + calcfunction(I2);
    for( int i =1 ; i<=n-1 ;i++)
    {
        param = I1 + (i*H);
        S2 = S2 + calcfunction(param);
    }
   I = (H/2) * (S1 + 2*S2);
   cout<<"solution is \t"<<I <<endl;
}

void simpson(double I1 , double I2 , int n)
{
     double H,S1,S2=0,param,I,S3=0;
     H = (I2-I1)/n; 
     if(n%2 ==0 )
        {
            S1 = calcfunction(I1) + calcfunction(I2);
            for( int i =1 ; i<=n-1 ;i=i+2)
                {
                    param = I1 + (i*H);
                    S2 = S2 + calcfunction(param);
                }
            for( int i =2 ; i<=n-1 ;i=i+2)
                {
                    param = I1 + (i*H);
                    S3 = S3 + calcfunction(param);
                } 
             I = (H/3) * (S1 + 4*S2 + 2*S3);      
            cout<<"solution is \t"<<I <<endl;        
       }

       else
          cout<<"Invalid"<<endl;
}


void simpson3by8(double I1 , double I2 , int n)
{
     double H,S1,S2=0,param,I,S3,param1;
     H = (I2-I1)/n;
     if( n%3 == 0)
     {
          S1 = calcfunction(I1) + calcfunction(I2);
          for( int i =1 ; i<=n-1 ; i++)
          {
              if(i%3!=0)
               {
                   param = I1 + (i*H);
                    S2 = S2 + calcfunction(param);
               }
               else
               {
                     param1 = I1 + (i*H);

                    S3 = S3 + calcfunction(param1);
               }
          }
       I = ((3*H)/8) * (S1 + (3*S2) + (2*S3));
       cout<<"Solution is \t"<<I<<endl;
     } 

     else
         cout<<"Invalid"<<endl;

}

int main()
{
    double I1 , I2 ;
    int select,n;
    cout<<"Enter lower bound "<<endl;
    cin>>I1;

    cout<<"Enter upper bound"<<endl;
    cin>>I2;

    cout<<"Enter nuber of stripes"<<endl;
    cin>>n;

    
    


cout<<"1 . trapezoidal"<<endl;
cout<<"2. simpson 1/3"<<endl;
cout<<"3. simpson 3/8"<<endl;
cin>>select;
        switch (select)
        {
              case 1 : 
                       trapezoidal(I1,I2,n);
                       break;
              case 2:
                      simpson(I1,I2,n);
                      break; 
              case 3:
                      simpson3by8(I1,I2,n);
                      break;                
              default : 
                       break;         
        }

}

