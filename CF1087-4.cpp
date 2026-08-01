#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define hi cout<<"hi" 
#define ho cout<<"ho" 
#define he cout<>"he" 
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

int main(){
    fastio()
    int t;
    cin>> t;
    while(t--){
        vector<pair<int,char>> p={{0,'R'},{0,'G'},{0,'B'}};
        for(int i=0;i<3;i++){
            cin>> p[i].first;
        }
        string ans="";
        int flag=0;
        int n=0;
        while(1){
            sort(p.rbegin(),p.rend());
            int pick=-1;
            for(int i=0;i<3;i++){
                if(p[i].first==0) continue;
                if(n>=1 && p[i].second==ans[n-1]) continue;
                if(n>=3 && p[i].second==ans[n-3]) continue;
                if(pick==-1){
                    pick=i;
                    continue;
                }
                if(n>=2 && p[pick].first==p[i].first && p[i].second==ans[n-2]){
                    pick=i;
                }
            }
            if(pick==-1){
                break;
            }
            ans.push_back(p[pick].second);
            n++;
            p[pick].first--;
        }
        for(auto a:ans){
            cout<< a;
        }
        nl;
    }
    return 0;
}