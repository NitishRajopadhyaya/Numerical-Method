#include<iostream>
#include<cmath>
using namespace std;

void matrixmult(int n,double (*A)[3] , double B[] , double C[])
{

    for(int i=0 ;i < n ; i++ )
    {
       
        C[i] =0;
        for(int j=0 ; j<n ; j++)
        {
            C[i] = C[i] + B[j] * A[i][j]; 
            
        }
    }

}

double FindLargest( double X[] , int n)
{
    double max;
    max=X[1];
    for(int i=0; i<n ; i++)
    {
        if(fabs(max)<fabs(X[i]))
        {
            max = X[i];
        }
    }

    return max;
}

void divisobBylargest(double X[] , double Y[],int n , double max)
{
    for(int i=0 ;i<n ;i++)
    {
        Y[i] = X[i]/max;
    }
}

void CalcDiff(double Y[] ,double X[] , int n , double Diff[])
{
    for(int i=0 ;i<n ;i++)
    {
        Diff[i] = fabs(Y[i] - X[i]);
    }
}


int main()
{
     int n ,count=0;
     double maxerror;
     cout<<"Enter size of array"<<endl;
     cin>>n;
     double A[3][3] , X[n], Difference[n] , Y[n], Z[n];
     double lambda;
     cout<<"Enter Array"<<endl;
     for(int i=0 ;i< n ;i++)
    {
        for(int j=0 ;j<n ;j++)
         {
             cin>>A[i][j];
         }
         X[i] =1;
    }
     
      do
        {
            matrixmult(n,A,X,Z);
            lambda = FindLargest(Z,n);
            divisobBylargest(Z,Y,n,lambda);
            CalcDiff(Y,X,n,Difference);

            for(int i =0 ;i<n ;i++)
            {
               X[i] =Y[i];
            }
            maxerror=FindLargest(Difference,n);

            count++;
        }while((count<100) || (fabs(maxerror) > 0.00005));

   cout<<"Largest eigen value is"<<lambda<<endl;
   for(int i=0 ;i<n ;i++)
   {
       cout<<"Y["<<i+1<<"] :"<<Y[i]<<endl;
   }
}

