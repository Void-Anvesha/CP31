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

        int negOnes=0,posOnes=0;

        for(int i=0;i<n;i++){
            if(a[i]>0)posOnes++;
            else negOnes++;
        }

       //To make -1 to 1
        long long operations=0;
        while(posOnes<negOnes || negOnes%2==1){
            operations++;
            posOnes++;
            negOnes--;
        }
        cout<<operations<<endl;
    }
    return 0;

}