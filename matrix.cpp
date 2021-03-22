#include<iostream>
using namespace std;

int main()
{
    int i,j,m,n;
    int **p;
    cout<<"Enter the size of matrix (m*n): ";
    cin>>m>>n;
    p=new int *[m];
    for(i=0;i<m;i++)
       p[i]=new int [n];
    cout<<"Enter "<<m*n<<" elements of the matrix : "<<endl;
    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
          cin>>p[i][j];
    cout<<"Displaying elements of the matrix...\n";
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
          cout<<"   "<<p[i][j];
       cout<<endl;
    }
    for(i=0;i<m;i++)
       delete []p;
    return 0;
}