#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define hi cout<< "hi"
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

int main(){
    fastio()
    int t;
    cin>> t;
    while(t--){
        vector<int> arr(1000001,0);
        int n;
        cin>> n;
        vector<vector<int> > v(n);
        for(int i=0;i<n;i++){
            vector<int> temp;
            int size;
            cin>> size;
            for(int j=0;j<size;j++){
                int val;
                cin>> val;
                temp.push_back(val);
            }
            reverse(temp.begin(),temp.end());
            //ll arr[1000001]={0};
            // static int arr[1000001];
            // memset(arr,0,sizeof(arr));

            vector<int> temp2;
            for(auto a:temp){
                if(arr[a]==0){
                    temp2.push_back(a);
                    arr[a]=1;
                }
            } 
            v[i]=temp2;
            fill(arr.begin(),arr.end(),0);
        }
        // for(auto a:v){
        //     for(auto b:a){
        //         cout<< b<< " ";
        //     }nl;
        // }
        vector<int> ans;
        vector<int> vis(1000001,0);
        while(!v.empty()){
            int minidx=0;
            for(int i=0;i<v.size();i++){
                if(v[minidx]>v[i]){
                    minidx=i;
                }else{
                    minidx=minidx;
                }
            }
            for(int i=0;i<v[minidx].size();i++){
                int val=v[minidx][i];
                if(vis[val]==0){
                    ans.push_back(val);
                    vis[val]=1;
                }
            }
            for(int i=0;i<v[minidx].size();i++){
                int val=v[minidx][i];
                for(int j=0;j<v.size();j++){
                    if(j!=minidx){
                        v[j].erase(remove(v[j].begin(),v[j].end(),val),v[j].end());
                    }
                }
            }
            v.erase(v.begin()+minidx);
        }
        for(auto a:ans){
            cout<< a<< " ";
        }
        nl;
    }
    return 0;
}