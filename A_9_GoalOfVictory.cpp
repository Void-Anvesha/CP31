#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){
        //No of teams
        int n;
        cin>>n;

        //Efficiency of each team
        vector<int>a(n-1);
        for(int i=0;i<n-1;i++)cin>>a[i];

        //Efficiency of missing team
        int sum=0;
        for(int i=0;i<n-1;i++)sum+=a[i];

        cout<<-1*sum<<endl;
        return 0;
    }
}