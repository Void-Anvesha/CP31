#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int cnt=1,max_cnt=1;

      for(int i=1;i<n;i++){
        if(s[i]==s[i-1])cnt++;
        else {
            max_cnt=max(max_cnt,cnt);
            cnt=1;
        }
      }
      max_cnt=max(max_cnt,cnt);
      cout<<max_cnt+1<<endl;

    }
    return 0;
}