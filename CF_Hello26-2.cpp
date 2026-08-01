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
        int arr[n];
        int cnt[n+1]={0};
        for(int i=0;i<n;i++){
            cin>> arr[i];
            cnt[arr[i]]++;
        }

        int delete_cnt=n-(k-1);
        for(int i=0;i<=n;i++){
            if(delete_cnt>0){
                while(cnt[i]>1){
                    cnt[i]--;
                    delete_cnt--;
                }
            }
        }
        if(delete_cnt>0){
            for(int i=n;i>=0;i--){
                if(delete_cnt>0 && cnt[i]>0){
                    cnt[i]--;
                    delete_cnt--;
                }
            }
        }
        for(int i=0;i<=n;i++){
            if(cnt[i]==0){
                cout<< i;
                break;
            }
        }
        nl;
    }
    return 0;
}