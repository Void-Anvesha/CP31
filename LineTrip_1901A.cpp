#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;
        
        //Array to store points includind start & destination
        vector<int>points_arr;
        points_arr.push_back(0);
        for(int i=0;i<n;i++){
            int point;
            cin>>point;
            points_arr.push_back(point);
        }
        //Push the destination point
        points_arr.push_back(x);
        n=points_arr.size();
        int max_dist_between_points=INT_MIN;

        //Loop through each point
        for(int i=1;i<n;i++){

            if(i==n-1){
                max_dist_between_points=max(max_dist_between_points,
                2*(points_arr[i]-points_arr[i-1]));
            }
            else{
                max_dist_between_points=max(max_dist_between_points,
                points_arr[i]-points_arr[i-1]);
            }
        }
        cout<<max_dist_between_points<<endl;

    }
    return 0;
}