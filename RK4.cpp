#include<iostream>
#include<cmath>
using namespace std;

double calcfunction( double X , double Y)
{
    return(pow(X,2)-Y);
}

int main()
{
    double Xo , Yo , Xn ,h , a,b;
    int n;

    cout<<"Enter Initial Condition"<<endl;
    cout<<"Enter Xo"<<endl;
    cin>>Xo;
    cout<<"Enter Yo"<<endl;
    cin>>Yo;
    cout<<"Enter Xn"<<endl;
    cin>>Xn;
    cout<<"Enter Number of subintervals"<<endl;
    cin>>n;

    h=(Xn-Xo)/n;

    a=Xo;
    b=Yo;
    double k,k1,k2,k3,k4;
    for(int i=1; i<=n ;i++)
    {
        k1 = h*calcfunction(a,b);
        k2= h * calcfunction(a+(h/2),b+(k1/2));
        k3= h * calcfunction(a+(h/2),b+(k2/2));
        k4 = h * calcfunction(a+h,b+k3);
        k=(k1+(2*k2) + (2*k3) + (k4))/6;
        b=b+k;
        a=a+h;
        cout<<"X["<<i<<"] = "<<a<<"\t";
        cout<<"Y["<<i<<"] = "<<b<<endl;
        
    }



}