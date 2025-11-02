#include<bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];

        map<int,int>freq;

        for(int i=0;i<n;i++)freq[arr[i]]++;

        if(freq.size()>=3)cout<<"NO"<<endl;
        else{
            int freq_1=freq.begin()->second;
            int freq_2=freq.rbegin()->second;
            if(freq_1==freq_2)cout<<"YES"<<endl;
            else if(n%2==1 && abs(freq_1-freq_2)==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}