#include<iostream>
using namespace std;

int main()
{
    int n ;

    //  cout<<"Enter number of unknowns"<<endl;
    //  cin>>n;

     double A[3][3] , B[3][3] , X[3];

     cout<<"Enter array "<<endl;
     for(int i= 0 ; i<3 ; i++)
     {
         
         for(int j=0 ;j<3;j++)
         {
             cin>>A[i][j];
             B[i][j]=0;
         }
         B[i][i]=1;
     }

     cout<<"Entered array is"<<endl;
        for(int i= 0 ; i<3 ; i++)
     {
         for(int j=0 ;j<3;j++)
         {
             cout<<A[i][j]<<"\t";

         }
         cout<<endl;
     }


double ratio ;
  for(int i = 0 ; i<3 ;i++)
    {
         

         for(int j=0 ; j<3 ;j++)
         {
            if(i!=j)
            {
               ratio = A[j][i]/A[i][i];
               for(int k =0 ; k <3 ;k++)
               {
                   A[j][k] = A[j][k] - (ratio*A[i][k]);
                   B[j][k] = B[j][k] - (ratio * B[i][k]);
               }
            }
         }
 
    }
 double diagonal;
    for(int i =0 ; i<3 ;i++)
    {
     diagonal = A[i][i];
       for(int j=0 ;j<3;j++)
       {
           A[i][j] = A[i][j]/diagonal;
           B[i][j] = B[i][j]/diagonal;
       }
    }
    cout<<"Inverse matrix is"<<endl;

    for (int i = 0; i < 3; i++)
    {
        for(int j=0 ; j<3 ;j++)
        {
            cout<<B[i][j]<<"\t";
        }
        cout<<endl;
    }
    

}