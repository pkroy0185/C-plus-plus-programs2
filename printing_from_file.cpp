// read all the lines from file and put it in vector and print with line number and line size


#include<iostream>
#include<vectors>
#include<fstream>
using namespace std;

int main(int argc, char argv[])
{
  ifstream fin(argv[1]);
  string line;
  vector<string> vlines;
  int i;

  while (getline(fin,line)) {
    /* code */
    vlines.pushback(line);
  }

  for(i=0;i!=vlines.size();i++)
    cout<< i+1 <<"  "<< vlines.size() << "  "<< vlines[i]<<endl;
}
