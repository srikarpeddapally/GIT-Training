#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> s;
    sort(s.begin(),s.end())
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
            s.erase(s[i]);
    }
    return 0;
}