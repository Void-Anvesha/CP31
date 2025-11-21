#include<bits/stdc++.h>
using namespace std;
//Forked is a condition when a knight can attach both king & queen at the same time
//x& y points in the 4 quardrants

int dx[4]={1,-1,-1,1},dy[4]={1,1,-1,-1};
int main(){
  int t;
  cin>>t;

  while(t--){
    long long  a,b;
    cin>>a>>b;
    long long x_king,y_king;
    cin>>x_king>>y_king;
    long long x_queen,y_queen;
    cin>>x_queen>>y_queen;
    
    vector<pair<int,int>>directions={{a,b},{a,-b},{-a,b},{-a,-b},
                                     {b,a},{b,-a},{-b,a},{-b,-a}};
    set<pair<int,int>>king_hits,queen_hits;
    for(auto& d:directions){
         int x=x_king+d.first;
         int y=y_king+d.second;

         king_hits.insert({x,y});

         x=x_queen+d.first;
         y=y_queen+d.second;

         queen_hits.insert({x,y});
    }
    int ans=0;
    for(auto& pos:king_hits){
        if(queen_hits.find(pos)!=queen_hits.end())ans++;
    }
    cout<<ans<<endl;
    
  }
  return 0;

}