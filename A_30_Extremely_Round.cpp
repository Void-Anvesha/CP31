#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        int digit=0;
        int first_digit;
        while(n>0){
            first_digit=n%10;
            n/=10;
            digit++;
        }
        cout<<(digit-1)*9+first_digit<<endl;
    }
    return 0;
}