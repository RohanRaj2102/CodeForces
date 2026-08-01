#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define nl cout<<endl
#define hi cout<< "hi";
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

int main(){
    int t;
    cin>> t;
    while(t--){
        ll n,m,k;
        cin>> n>> m>> k;

        ll val=(n-1)*2;
        ll total_days=val-1;
        ll ans=0;
        if(m>=total_days){
            cout<< n;
        }else{
            ll left=k-1;
            ll right=n-k;
            ll powertofillblocks=0;
            if(m%2==0){
                powertofillblocks=m/2;
            }else{
                powertofillblocks=m/2 +1;
            }
            ll NoOfBlocksToFillFirst=min(left,right);
            ll spaceemptyformaxblocksection=max(left,right);
            if(powertofillblocks>NoOfBlocksToFillFirst){
                ans=NoOfBlocksToFillFirst+1;
                ll daysusedtofill=NoOfBlocksToFillFirst*2 -1;
                ll daysleft=m-daysusedtofill;
                ll soldleftatmid=1+daysusedtofill-NoOfBlocksToFillFirst;
                
                if(daysleft==1){
                    if(spaceemptyformaxblocksection>=1){
                        ans=ans+1;
                    }
                }
                else if(daysleft==soldleftatmid){
                    if(spaceemptyformaxblocksection>=soldleftatmid){
                        ans=ans+soldleftatmid;
                    }else{
                        ans=ans+min(spaceemptyformaxblocksection,soldleftatmid);
                    }
                }
                else if(soldleftatmid<daysleft){
                    if(spaceemptyformaxblocksection>=((soldleftatmid+daysleft)/2)){
                        ans=ans+((soldleftatmid+daysleft)/2);
                    }else{
                        ans=ans+min(spaceemptyformaxblocksection,
                                ((soldleftatmid+daysleft)/2));
                    }
                }else if(soldleftatmid>daysleft){
                    if(spaceemptyformaxblocksection>=daysleft){
                        ans=ans+daysleft;
                    }else{
                        ans=ans+min(spaceemptyformaxblocksection,daysleft);
                    }
                }
            }
            else if(powertofillblocks<NoOfBlocksToFillFirst){
                if(m%2==0){
                    ans=powertofillblocks+1+1;
                }else{/// m-odd
                    ans=powertofillblocks+1;
                }
            }else{  /////powertofillblocks==NoOfBlocksToFillFirst
                ans=ans+powertofillblocks+1;
                if(m%2==0){
                    ll daysleft=1;
                    if(spaceemptyformaxblocksection>=daysleft){
                        ans=ans+1;
                    }else{  ////spaceemptyformaxblocksection==0
                        ans=ans+0;
                    }
                }else{
                    ll daysleft=0;
                    ans=ans+0;
                }
            }
            cout<< ans;
        }
        nl;
    }
    return 0;
}