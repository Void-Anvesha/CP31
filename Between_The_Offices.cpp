#include<bits/stdc++.h>
using namespace std;


int main(){


    int n;
    cin>>n;

    string s(n , ' ');
    cin>>s;


    //Cnt of SF -> S
    int cntSF = 0;

    //Cnt of S ->SF 
    int cntS = 0;
    for(int i = 0; i < n-1; i++){
        if(s[i] == 'F' && s[i+1] == 'S') cntSF++;
        else if(s[i]== 'S' && s[i+1] == 'F') cntS++;
    }

    if(cntS > cntSF) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;





}


