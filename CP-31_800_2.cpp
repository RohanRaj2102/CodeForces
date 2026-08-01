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
        int n,x;
        cin>> n>> x;
        vector<int> v;
        v.push_back(0);

        for(int i=0;i<n;i++){
            int val;
            cin>> val;
            v.push_back(val);
        }
        v.push_back(x);
        sort(v.begin(),v.end());
        int maxi=INT_MIN;
        for(int i=0;i<v.size()-1;i++){
            if(v[i+1]==x){
                int doudiff=2*(v[i+1]-v[i]);
                if(doudiff>maxi){
                    maxi=doudiff;
                }
                break;
            }
            int diff=v[i+1]-v[i];
            if(diff>maxi){
                maxi=diff;
            }
        }
        cout<< maxi;
        nl;
    }
    return 0;
}