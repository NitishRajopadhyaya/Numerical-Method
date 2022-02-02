#include<iostream>
using namespace std;
 int main()
 { 
     int n;
     double ratio;
     cout<<"Enter Number of Unknowns"<<endl;
     cin >>n;

     double  arr1[n][n+1] , X[n];

     cout<<"Enter Elements of equation"<<endl;

     for(int i=0 ;i <n ;i++)
      {
          for(int j=0 ; j<n+1; j++)
          {
              cin>>arr1[i][j];
          }
      }
        cout<<endl;
        cout<<"array is"<<endl;
     for(int i=0 ;i <n ;i++)
      {
          for(int j=0 ; j<n+1; j++)
          {
              cout<<arr1[i][j]<<"\t";
          }
          cout<<endl;
      }

        for(int i=0 ; i<n-1 ;i++)
        {
            
                for(int j=i+1 ; j<n ;j++) 
                {
                       ratio = arr1[j][i] / arr1[i][i];

                       for(int k=0 ; k<=n ;k++)
                       {
                           arr1[j][k] = arr1[j][k] - (ratio * arr1[i][k]);
                       }
                }
        }

X[n-1] = arr1[n-1][n] / arr1[n-1][n-1];

double sum;

        for(int i = n-2 ; i>=0 ;i--)
        {
            sum = 0 ;
            for(int j=i+1 ; j<n+1 ;j++)
             {
                   sum = sum + (arr1[i][j] * X[j]);
             } 

             X[i] = (arr1[i][n] - sum )/ arr1[i][i];
        }
    
    cout<<"Solution is"<<endl;
        for(int i = 0 ; i<n ;i++)
        {
            cout<<X[i]<<endl;
        }

 }