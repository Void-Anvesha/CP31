#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

   int freq[26] ={0};

   for(int i = 0; i < 26; i++){
        freq[s[i] - 'a']++;
   }

   int one = freq['n'-'a'];
   int zeros = freq['z'-'a'];
   

   for(int i = 0; i < one; i++) cout<<1<<" ";
   for(int i = 0; i < zeros; i++) cout<<0<<" ";


cout<<endl;
return 0;

}