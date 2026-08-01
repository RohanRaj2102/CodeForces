#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

int main(){
    fastio()
    int t;
    cin>> t;
    //cout<< "hi";
    while(t--){
        int n,k,p,m;
        cin>> n>> k>> p>> m;

        vector<int> v(n+1);

        for(int i=1;i<=n;i++){
            cin>> v[i];
        }

        int first=0;
        if(p > k){
            multiset<int> st;
            int sum=0;
            for(int i=1;i<=k;i++){
                st.insert(v[i]);
            }
            for(int i=k+1;i<p;i++){
                sum=sum+*st.begin();
                st.erase(st.find(*st.begin()));
                st.insert(v[i]);
            }
            first=sum+*st.begin()+v[p];
        }else{
            first=v[p];
        }
        bool yes=0;
        if(first>m){
            cout<< 0;
            yes=1;
        }
        int move=0;
        vector<int> a;
        for(int i=1;i<=n;i++){
            if(i!=p){
                a.push_back(v[i]);
            }
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n-k;i++){
            move=move+a[i];
        }
        move=move+v[p];
        if(yes==0){
            cout<< (m-first)/move +1;
        }
        nl;
    }
    return 0;
}