#include<iostream>
#include<math.h>
using namespace std;
int prime(int n)
{
    int i;
    if(n<=1)
    {
        return 0;
    }
    for(i=2;i<=sqrt(n)/1;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,m,c=0;
    cin>>n>>m;
    for(int i=n;i<=m;i++)
    {
        if(prime(i))
        {
            c++;
        }
    }
    cout<<c;
}