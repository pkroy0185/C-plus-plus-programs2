#include<iostream>
using namespace std;
class matrix
{
    int M[10][10];
    public:
           void GetData(int ,int ,int );
           void Display(int ,int );
};
void matrix::GetData(int i,int j,int val)
{
    M[i][j]=val;
}
void matrix::Display(int i,int j)
{
    cout<<"  "<<M[i][j];
}
int main()
{
    int i,j,m,n,val;
    matrix A;
    cout<<"Enter size of the matrix (m*n) : ";
    cin>>m>>n;
    cout<<"Enter "<<m*n<<" elements of matrix : "<<endl;
    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
       {
          cin>>val;
          A.GetData(i,j,val);
       }
    cout<<"Displaying the matrix...\n\n";
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
          A.Display(i,j);
       }
       cout<<endl;
    }
    return 0;
}