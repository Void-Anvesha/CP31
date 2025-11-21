#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
       long long n;
       cin>>n;

       long long k;
       cin>>k;
       vector<long long>a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
          if(n==0){
            cout<<0<<endl;
            return 0;
          }
       sort(a.begin(),a.end());

       long long cnt=1;
       long long largest_len=1;
       for(int i=1;i<n;i++){
        if(a[i]-a[i-1] <=k)cnt++;
        else {
            largest_len=max(largest_len,cnt);
            cnt=1;
        }
       }
         largest_len=max(largest_len,cnt);
         cout<<n-largest_len<<endl;
    }
    return 0;
}
