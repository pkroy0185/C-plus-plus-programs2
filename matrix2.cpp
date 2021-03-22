#include<iostream>
using namespace std;
class matrix
{
    int M[10][10];
    public:
           void GetData(int ,int );
           void DisplayMatrix(int ,int );
};
void matrix::GetData(int m,int n)
{
    int i,j;
    
    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
       {
          cin>>M[i][j];
       }
    
}
void matrix::DisplayMatrix(int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
          cout<<"  "<<M[i][j];
       }
       cout<<endl;
    }
}
int main()
{
    int m,n;
    matrix A;
    cout<<"Enter size of the matrix (m*n) : ";
    cin>>m>>n;
    cout<<"Enter "<<m*n<<" elements of matrix : "<<endl;
    A.GetData(m,n);
    cout<<"Displaying the matrix...\n\n";
    A.DisplayMatrix(m,n);
    return 0;
}