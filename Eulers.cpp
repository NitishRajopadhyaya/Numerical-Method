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
    double k;
    for(int i=1; i<=n ;i++)
    {
        k = h*calcfunction(a,b);
        b=b+k;
        a=a+h;
        cout<<"X["<<i<<"] = "<<a<<"\t";
        cout<<"Y["<<i<<"] = "<<b<<endl;
        
    }



}