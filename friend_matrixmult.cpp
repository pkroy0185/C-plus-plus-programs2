#include<iostream>
using namespace std;
class matrix
{
    int M[10][10];
    int row,col;
    public:
           void GetData();
           void DisplayMatrix();
           friend void MatrixMult(matrix ,matrix ,matrix );
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
void MatrixMult(matrix A,matrix B,matrix C)
{
    int i,j,k,l;
    if(A.col==B.row)
    {
     C.row=A.row;
     C.col=B.col;
     for(i=0;i<A.row;i++)
        for(j=0,l=0;j<A.col || j<B.col;j++)
          for(k=0;k<A.col;k++)
             C.M[i][j]=C.M[i][j]+(A.M[i][k]*B.M[k][j]);
    }
    else
     {
      cout<<"Sorry.... Can't multiply matrices A and B..."<<endl;
      exit(-1);
     }
   cout<<"The product of both matrices A and B is \n";
   cout<<"\n      C\n\n";
   for(i=0;i<C.row;i++)
   {
      for(j=0;j<C.col;j++)
         cout<<"      "<<C.M[i][j];
      cout<<endl;
   }        
}
int main()
{
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
    MatrixMult(A,B,C);
    return 0;
}