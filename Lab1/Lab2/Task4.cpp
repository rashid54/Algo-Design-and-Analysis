#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k=10;
    int keys[k]={546,6544,45123,488,686,1541,8465,94979,442,3684};
    int p=701,m=500;

    int table[m+1];
    int a[p],b[p];
    cout<<"Enter Key set \n";
    for(int i=0;i<10;i++)
    {
        a[i]=rand()%p+1;
        b[i]=rand()%p;
        table[i]=((a[i]*keys[i] +b[i]) %p )%m;
    }
    for(int i=0;i<10;i++)
    {
        cout<<"Key: "<<keys[i]<<"   Hash: "<<table[i]<<endl;
    }
}
