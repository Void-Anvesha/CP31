#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int empty_cnt=0;
        bool triple_cell=false;
        for(int i=0;i<n;i++){
          if(s[i]=='.')empty_cnt++;
          if(i+2<n && s[i]=='.' && s[i+1]=='.' && s[i+2]=='.') triple_cell=true;
           
        }
        if(triple_cell)cout<<2<<endl;
        else cout<<empty_cnt<<endl;
        
    }
    return 0;
}