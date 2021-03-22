#include<iostream>
using namespace std;
class matrix
{
    int **M;
    int row,col;
    public:
           matrix();
           matrix(int ,int );
           void DisplayMatrix();
           void MatrixMult(matrix ,matrix);
           ~matrix();
};
matrix::matrix()
{
}
matrix::matrix(int m,int n)
{
    int i,j;
    row=m,col=n;
    M=new int *[m];
    for(i=0;i<m;i++)
       M[i]=new int[n];
    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
          cin>>M[i][j];
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
    if(A.col==B.row)
    {
     row=A.row;
     col=B.col;
     M=new int *[row];
     for(i=0;i<row;i++)
        M[i]=new int[col];
     for(i=0;i<row;i++)
       for(j=0;j<col;j++)
          M[i][j]=0;
     for(i=0;i<A.row;i++)
        for(j=0,l=0;j<A.col || j<B.col;j++)
          for(k=0;k<A.col;k++)
          {
             M[i][j]=M[i][j]+(A.M[i][k]*B.M[k][j]);
            cout<<M[i][j]<<"  ";
           }
    }
    else
     {
      cout<<"Sorry.... Can't multiply matrices A and B..."<<endl;
      exit(-1);
     }
   cout<<"The product of both matrices A and B is \n";
   cout<<"\n      C\n\n";
   for(i=0;i<row;i++)
   {
      for(j=0;j<col;j++)
         cout<<"      "<<M[i][j];
      cout<<endl;
   }        
}
matrix::~matrix()
{
    int i;
    for(i=0;i<row;i++)
       delete []M;
}
int main()
{
    int m,n;
    cout<<"This program takes two matrices and displays both matrices and product of matrices..."<<endl;
    cout<<"Enter size (m*n) of matrix A : ";
    cin>>m>>n;
    cout<<"Enter "<<m*n<<" elements of A..."<<endl;
    matrix A(m,n);
    cout<<"Enter size (m*n) of matrix B : ";
    cin>>m>>n;
    cout<<"Enter "<<m*n<<" elements of A..."<<endl;
    matrix B(m,n);
    cout<<"Displaying the matrix A and B ...\n\n";
    cout<<"      A\n\n";
    A.DisplayMatrix();
    cout<<"\n      B\n\n";
    B.DisplayMatrix();
    matrix C;
    C.MatrixMult(A,B);
    return 0;
}