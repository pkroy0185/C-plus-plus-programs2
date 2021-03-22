#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char argv[])
{
  ofstream fout("outfile");
  ifstream fin("lines");

  if(!fin)
  {cerr<< "unable to open file\n";
    return 1;
  }
  if(!fout)
  {
    cerr<< "unable to open file\n";
      return 1;
  }
  string line;
  while(getline(fin,line))
    fout<<line<<endl;

}
