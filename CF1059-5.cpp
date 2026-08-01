#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

int main(){
    int t;
    cin>> t;
    while(t--){
        int n,k;
        cin>> n>> k;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int x;
            cin>> x;
            arr.push_back(x);
        }
        vector<int> ans;
        map<int ,bool> visited;

        for(auto &i:visited){
            i.second=false;
        }
        int cnt=k;
        for(int i=1;i<=k;i++){
            int pos=n+i-1;
            
            for(int j=1;j<=n;j++){
                if(j!=arr[n+k-pos-1] && visited[j]!=true && cnt!=0){

                    ans.push_back(j);
                    visited[j]=true;
                    cnt--;
                }
            }
        }
        for(int i=0;i<ans.size();i++){
            cout<< ans[i]<< " ";
        }
        nl;
    }
    return 0;
}