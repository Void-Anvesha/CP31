#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;


    vector<int>a(N);
    for(int i=0;i<N;i++)cin>>a[i];

    //Sort in axcending order
    sort(a.begin(),a.end(),[](int a,int b){
        return abs(a)<abs(b);
    });
 

    cout<<a[0]<<endl;
    return 0;
}