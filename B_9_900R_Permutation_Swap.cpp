#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0)return a;

    return gcd(b,a%b);
}
int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n+1);
        for(long long i=1;i<=n;i++)cin>>a[i];

        int ans=0;
        for(int i=0;i<n;i++){
          ans=gcd((abs(a[i]-i)),ans);
        }
        cout<<ans<<endl;

    }
    return 0;
}