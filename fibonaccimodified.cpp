#include <iostream>
using namespace std;
int main()
{
    int t1,t2,n;
    cin>>t1>>t2>>n;
    int s[n+1];
    s[0]=t1;
    s[1]=t2;
    for(int i=2;i<=n;i++)
    {
        s[i]=((s[i-1])^2)+s[i-2];
    }
    cout<<s[n];    
    return 0;
}
