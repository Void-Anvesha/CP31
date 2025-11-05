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

        int operations=INT_MAX;
        for(int i=0;i<n-1;i++){
           if(a[i]<=a[i+1]){
            int diff=a[i+1]-a[i];
            int reqd_operation=diff/2+1;
            operations=min(operations,reqd_operation);
           }
           else operations=0;
        }
        cout<<operations<<endl;
    }
    return 0;
}