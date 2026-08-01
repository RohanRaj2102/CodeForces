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
        vector<ll> odd;
        vector<ll> even;
        for(int i=0;i<n;i++){
            int val=0;
            cin>> val;
            if(val & 1){
                odd.push_back(val);
            }else{
                even.push_back(val);
            }
        }
        sort(odd.begin(),odd.end(), greater<ll>());
        sort(even.begin(),even.end(), greater<ll>());
        
        int osize=odd.size();
        int esize=even.size();
        if(osize==0){
            for(int i=0;i<n;i++){
                cout<< 0<< ' ';
            }
        }else if(esize==0){
            for(int i=0;i<n;i++){
                if(i%2==0){
                    cout<< odd[0]<< ' ';
                }else{
                    cout<< 0<< ' ';
                }
            }
        }else if(osize==1 && esize>=1){
            ll sum=odd[0];
            cout<< sum<< ' ';
            for(int i=0;i<esize;i++){
                sum=sum+even[i];
                cout<< sum<< ' ';
            }
        }else if(osize>1 && esize>=1){
            if(osize%2==0){
                ll sum=odd[0];
                cout<< sum<< ' ';
                for(int i=0;i<esize;i++){
                    sum=sum+even[i];
                    cout<< sum<< ' ';
                }
                int left=n-(1+esize)-1;
                for(int i=0;i<left;i++){
                    if(i%2==0){
                        cout<< sum-even[esize-1]<< ' ';
                    }else{
                        cout<< sum<< ' ';
                    }
                }
                cout<< 0<< ' ';
            }else{
                ll sum=odd[0];
                cout<< sum<< ' ';
                for(int i=0;i<esize;i++){
                    sum=sum+even[i];
                    cout<< sum<< ' ';
                }
                int left=n-(1+esize);
                for(int i=0;i<left;i++){
                    if(i%2==0){
                        cout<< sum-even[esize-1]<< ' ';
                    }else{
                        cout<< sum<< ' ';
                    }
                }
            }
        }
        nl;
    } 
    return 0;
}