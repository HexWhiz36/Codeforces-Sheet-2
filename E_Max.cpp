#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a,temp=0;
    while(n--)
    {
        cin>>a;
        if(temp<a)  temp=a;
    }
    cout<<temp<<endl;
    return 0;
}