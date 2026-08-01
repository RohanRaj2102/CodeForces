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
        int n;
        cin>> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>> a[i];
        }
        sort(a,a+n);
        if(a[0]!=0){
            cout<< "NO";
        }else{
            if(a[0]==0 && a[1]!=0){
                cout<< "YES";
            }else if(a[0]==0 && a[1]==0){
                bool found1=0;
                for(int i=2;i<n;i++){
                    if(a[i]==1){
                        found1=1;
                        break;
                    }
                }
                if(found1){
                    cout<< "YES";
                }else{
                    cout<< "NO";
                }
            }
        }
        nl;
    }   
    return 0;
}