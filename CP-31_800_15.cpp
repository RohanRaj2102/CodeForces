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
        int arr[n];
        int cntodd=0;
        int cnteven=0;
        for(int i=0;i<n;i++){
            cin>> arr[i];
            if(arr[i]%2==0){
                cnteven++;
            }
            else{
                cntodd++;
            }
        }
        if(cntodd==0){
            cout<< "Yes";
        }
        else if(cnteven==0){
            if(cntodd%2==0){
                cout<< "Yes";
            }else{
                cout<< "No";
            }
        }
        else{
            if(cntodd>1){
                if(cntodd%2!=0){
                    cout<< "No";
                }else{
                    cout<< "Yes";
                }
            }else{
                cout<< "No";
            }
        }
        nl;
    }
    return 0;
}