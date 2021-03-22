#include<iostream>
using namespace std;
class matrix
{
    int M[10][10];
    int row,col;
    public:
           void GetData(int ,int );
           void DisplayMatrix();
           void MatrixMult(matrix A,matrix B);
};
void matrix::GetData(int m,int n)
{
    int i,j;
    row=m,col=n;
    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
       {
          cin>>M[i][j];
       }  
}
void matrix::DisplayMatrix()
{
    int i,j;
    for(i=0;i<row;i++)
    {
       for(j=0;j<col;j++)
       {
          cout<<"     "<<M[i][j];
       }
       cout<<endl;
    }
}
void matrix::MatrixMult(matrix A,matrix B)
{
    int i,j,k,l;
    row=A.row;
    col=B.col;
    for(i=0;i<A.row;i++)
       for(j=0,l=0;j<A.col || j<B.col;j++)
         for(k=0;k<A.col;k++)
            M[i][j]=M[i][j]+(A.M[i][k]*B.M[k][j]);
}
int main()
{
    int m,n,temp;
    matrix A,B,C;
    cout<<"Enter size (m*n) of the matrix A : ";
    cin>>m>>n;
    cout<<"Enter "<<m*n<<" elements of matrix : "<<endl;
    A.GetData(m,n);
    temp=n;
    cout<<"Enter size (m*n) of the matrix B : ";
    cin>>m>>n;
    cout<<"Enter "<<m*n<<" elements of matrix : "<<endl;
    B.GetData(m,n);
    cout<<"Displaying the matrix A and B ...\n\n";
    cout<<"      A\n\n";
    A.DisplayMatrix();
    cout<<"\n      B\n\n";
    B.DisplayMatrix();
    if(temp!=m)
      {
       cout<<"Sorry....Can't multiply matrices A and B...\n";
       return -1;
      }
    C.MatrixMult(A,B);
    cout<<"The product of both matrices A and B is \n";
    cout<<"\n      C\n\n";
    C.DisplayMatrix();
    return 0;
}