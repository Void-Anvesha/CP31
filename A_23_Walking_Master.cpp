#include<bits/stdc++.h>
using namespace std;

//Operation types:
//1. Move up & right
//2. Move Left
int main(){
    int t;
    cin>>t;

    while(t--){

        int source_x,source_y,destination_x,destination_y;
        cin>>source_x>>source_y>>destination_x>>destination_y;


        //If destination 'y' is at the bottom of source 'y'
        //Then iit's not poss to reach the dest
        if(destination_y<source_y){
            cout<<-1<<endl;
            continue;
        }

        //If dest y is up to the source y
        int moves=destination_y-source_y;
         
       //Source x also moves by that number of moves
        source_x+=moves;
 
      //If the destination x is to the right of source x then it's imposs to reach
        if(source_x<destination_x){
            cout<<-1<<endl;
            continue;
        }

        moves+=(source_x-destination_x);
        cout<<moves<<endl;

    }
    return 0;


}