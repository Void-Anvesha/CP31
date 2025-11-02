#include<bits/stdc++.h>
using namespace std;

int main(){
    int  t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];

        //El not found
        if(find(arr.begin(),arr.end(),k)==arr.end()){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
      
    }
      return 0;
}