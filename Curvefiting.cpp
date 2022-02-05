#include<iostream>
#include<cmath>
using namespace std;


double sum(double arr[],int n)
{
     double sum=0;

     for(int i=0 ;i<n;i++)
       sum=sum+arr[i];

       return sum;
}

double sumofproduct(double arr[], double arr1[], int n)
{
    double pro;
    double sum=0;

    for(int i=0;i<n;i++)
    {
        pro= arr[i]* arr1[i];
         sum = sum+pro;
    }

    return sum;
}



int main()
{
     int n;

//cout <<"yes";
    double sumX , sumY ,sumXY , sumX2;
    double d1,d2 ,d,a,b;
    
    cout<<"Enter number of elements"<<endl;
    cin>>n;

    double x[n] , y[n];



cout<<endl<<n<<endl;
    cout<<"Enter Elements of X"<<endl;
    for(int i=0 ;i<n;i++)
    {
         cin>>x[i];
         cout<<endl<<n<<endl;
    }

    cout<<"Enter Elemnts of Y"<<endl;
     for (int i = 0; i < n; i++)
     {
         cin>>y[i];
     }

     sumX = sum(x,n);
     sumY = sum(y,n);

     sumXY= sumofproduct(x,y,n);

     sumX2=sumofproduct(x,x,n);


d=(n*sumX2) - pow(sumX,2);

d1= (sumY*sumX2) - (sumX*sumXY);

d2= (n*sumXY)-(sumX*sumY);

a= d1/d;

b=d2/d;

cout<<" equation is "<<endl;

cout<<a<<" + "<<b<<"x"<<endl;

}

