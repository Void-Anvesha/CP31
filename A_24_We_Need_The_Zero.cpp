#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        

        //Find xor of all the elements
        long long xorr=0;
        for(int i=0;i<n;i++)xorr^=a[i];

        //If n is odd
        if(n%2==1)cout<<xorr<<endl;

        else{
            if(xorr==0)cout<<xorr<<endl;
            else cout<<-1<<endl;
        
        }

    }
    return 0;
}