#include<iostream>
#include<cmath>
using namespace std;

double calcfunction1( double Z)
{
    return(Z);
}

double calcfunction2(double X , double Y , double Z)
{
    return(X + 2*Y + Z);
}
int main()
{
    double Xo , Yo , Zo, Xn ,h , a,b,c;
    int n;

    cout<<"Enter Initial Condition"<<endl;
    cout<<"Enter Xo"<<endl;
    cin>>Xo;
    cout<<"Enter Yo"<<endl;
    cin>>Yo;
    cout<<"Enter Zo"<<endl;
    cin>>Zo;
    cout<<"Enter Xn"<<endl;
    cin>>Xn;
    cout<<"Enter Number of subintervals"<<endl;
    cin>>n;

    h=(Xn-Xo)/n;

    a=Xo;
    b=Yo;
    c=Zo;
    double k,k1,k2,k3,k4,l1,l2,l3,l4,l;
    for(int i=1; i<=n ;i++)
    {
        k1 = h*calcfunction1(c);
        l1 = h * calcfunction2(a,b,c);

        k2= h * calcfunction1(c+(l1/2));
        l2= h * calcfunction2(a+(h/2),b+(k1/2),c+(l1/2));
        
        k3= h * calcfunction1(c+(l2/2));
        l3= h * calcfunction2(a+(h/2),b+(k2/2), c+(l2/2));

        k4 = h * calcfunction1(c+l3);
        l4 = h * calcfunction2(a+h,b+k3,c+l3);

        k=(k1+(2*k2) + (2*k3) + (k4))/6;
        l=(l1+(2*l2) + (2*l3) + (l4))/6;

        b=b+k;
        a=a+h;
        c=c+l;
        cout<<"X["<<i<<"] = "<<a<<"\t";
        cout<<"Y["<<i<<"] = "<<b<<"\t";
        cout<<"Z["<<i<<"] = "<<c<<endl;
        
    }



}