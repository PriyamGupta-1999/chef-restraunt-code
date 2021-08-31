#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2){
    return p1.second<p2.second;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<pair<int,int> > arr;
        for (int i = 0; i < n; ++i)
        {
            int x,y;
            cin>>x>>y;
            arr.push_back(make_pair(x,y));
        }


        sort(arr.begin(),arr.end());
        cout<<endl;
        //  for (int i = 0; i < n; ++i)
        // {
        //     cout<<arr[i].first<<" "<<arr[i].second<<endl;
        // }


        while(m--){
            int x;
            cin>>x;
            int position=lower_bound(arr.begin(),arr.end(),make_pair(x,0))-arr.begin();

            if(position==0){
                cout<<(arr[0].first-x)<<endl;
            }else if(position==n){
                // cout<<"* "<<position<<" x "<<x<<endl;
                cout<<-1<<endl;
            }else{
                if(x<arr[position-1].second){
                    cout<<0<<endl;
                }else{
                    cout<<(arr[position].first-x)<<endl;
                }
            }
            
        }

    }
}