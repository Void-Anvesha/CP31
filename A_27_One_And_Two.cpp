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

        int left=0,right=n-1;
        int leftAns=1,rightAns=1;
        while(left<right){
              leftAns*=a[left];
              rightAns*=a[right];
            left++;
            right--;

            if(leftAns==rightAns && n%2==0)cout<<right<<endl;
            break;
        }
        


        cout<<-1<<endl;
    }
    return 0;
}