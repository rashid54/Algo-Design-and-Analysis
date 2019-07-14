#include<bits/stdc++.h>
using namespace std;

long mulhash(long key)
{
    return floor( 16384*(key*0.618033988-floor(key*0.618033988)));
}


int main()
{
    long key;
    cin>>key;
    cout<<mulhash(key);
    return 0;
}
