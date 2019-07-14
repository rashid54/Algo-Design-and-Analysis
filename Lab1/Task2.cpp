#include<bits/stdc++.h>
using namespace std;

long long radix(string s)
{
    long long i,sum=0;
    for(i=1,sum=(int)s[0];i<s.size();i++)
    {
        sum=sum*6 + (int)s[i];
    }
    return sum;
}

int divhash(long long key)
{
    return (key%701);
}


int main()
{
        bool uni[1000000];
        int counter=0;
        string str;
        getline(cin,str);
        stringstream ss(str);
        while(ss>>str)
        {
            long long j=divhash(radix(str));
            if(uni[j]!=true)
                counter++;
            uni[j]=true;
        }
        cout<<counter;

        return 0;

}
