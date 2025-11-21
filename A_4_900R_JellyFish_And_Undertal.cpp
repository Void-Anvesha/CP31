#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;

        vector<long long>arr;
        for(int i=0;i<n;i++){
            long long val;
            cin>>val;
            arr.push_back(val);
        }

        long long  total_time=b;
        for(long long  num:arr){
            total_time+=min(num,a-1);
        }
        cout<<total_time<<endl;
    }
    return 0;
}