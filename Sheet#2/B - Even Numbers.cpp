#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=2)
    {
        for(int i=2; i<=n; i++)
        {
            if(i%2==0)
            {
                cout<<i<<endl;
            }
        }
    }
    else
    {
        cout<<-1;
    }
    return 0;
}
