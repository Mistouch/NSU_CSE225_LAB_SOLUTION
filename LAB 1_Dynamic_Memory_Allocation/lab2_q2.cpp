#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin >> r >> c;

    char **a = new char*[r];

    for(int i=0;i<r;i++)
    {
        a[i]= new char[c];
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin >>a[i][j];
    }
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
           cout<<a[i][j]<<" ";
           cout<<"\n";
    }
    for(int i=0;i<r;i++)
        delete [] a[i];
    delete []a;

   return 0;
}
