#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        string x;
        cin>>x;
        string s;
        cin>>s;

        int op=0;
        bool found=false;
        string temp=x;

       // Check initial string
        if(temp.find(s) != string::npos){
            cout << 0 << "\n";
            continue;
        }

        // Here we append temp to itself instead of appending x repeatedly
        // As each operation doubles the string as per problem statement
        // Limit operations for safety to avoid memory blow-up (e.g., max 10)
        for(int i = 1; i <= 10; i++) {
            temp += temp;
            op++;
            if(temp.find(s) != string::npos) {
                found = true;
                break;
            }
        }
        if(found==true)cout<<op<<endl;
        else cout<<-1<<endl;
       

    }
     return 0;

}