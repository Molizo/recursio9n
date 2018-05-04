#include <iostream>

using namespace std;

int sum(int n, int s)
{
    if(n==0)
        return s;
    s+=n;
    cout<<s<<" ";
    return sum(n-1, s);
}

int fact2(int n, int s)
{
    if(n==0)
        return s;
    s*=n;
    cout<<s<<" ";
    return fact2(n-1, s);
}

long long int fact(long long int n, int s)
{
    if(s==1)
        return n;
    n=n*s;
    //cout<<n;
    return fact(n, s-1);
}

int main()
{int n,x;
    //cin>>n;
    x=fact(1, 4);
    cout<<x;
    return 0;
}
