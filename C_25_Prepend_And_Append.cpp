#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s(n,' ');
        cin>>s;

        int left=0,right=n-1;
        long long ans=n;

        while(left<=right){
            if(s[left]!=s[right])ans-=2;
            else break;
        left++;
        right--;
        }
        cout<<ans<<endl;

    }
    return 0;
}