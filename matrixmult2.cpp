#include<iostream>
using namespace std;
class matrix
{
    int M[10][10];
    int row,col;
    public:
           void GetData();
           void DisplayMatrix();
           void MatrixMult(matrix A,matrix B);
};
void matrix::GetData()
{
    int i,j;
    cout<<"Enter size (m*n) of the matrix  : ";
    cin>>row>>col;
    cout<<"Enter "<<row*col<<" elements of the matrix : "<<endl;
    for(i=0;i<row;i++)
       for(j=0;j<col;j++)
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
    if(A.col==B.row)
    {
     row=A.row;
     col=B.col;
     for(i=0;i<A.row;i++)
        for(j=0,l=0;j<A.col || j<B.col;j++)
          for(k=0;k<A.col;k++)
             M[i][j]=M[i][j]+(A.M[i][k]*B.M[k][j]);
    }
    else
     {
      cout<<"Sorry.... Can't multiply matrices A and B..."<<endl;
      exit(-1);
     }
}
int main()
{
    int m,n,temp;
    matrix A,B,C;
    cout<<"This program takes two matrices and displays both matrices and product of matrices..."<<endl;
    cout<<"...A..."<<endl;
    A.GetData();
    cout<<"...B..."<<endl;
    B.GetData();
    cout<<"Displaying the matrix A and B ...\n\n";
    cout<<"      A\n\n";
    A.DisplayMatrix();
    cout<<"\n      B\n\n";
    B.DisplayMatrix();
    C.MatrixMult(A,B);
    cout<<"The product of both matrices A and B is \n";
    cout<<"\n      C\n\n";
    C.DisplayMatrix();
    return 0;
}