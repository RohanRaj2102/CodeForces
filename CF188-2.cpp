#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define hi cout<<"hi" 
#define ho cout<<"ho" 
#define he cout<<"he" 
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

int main(){
    fastio()
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>> v[i];
        }
        vector<pair<int,int> > p;
        for(int i=0;i<n;i++){
            pair<int,int> temp={v[i],i};
            p.push_back(temp);
        }
        sort(p.begin(),p.end());
        int cnt=0;
        int mini=INT_MAX;
        for(int i=n-1;i>=0;i--){
            if(p[i].second<mini){
                mini=p[i].second;
                cnt++;
            }
        }
        cout<< cnt;
        nl;
    }
    return 0;
}