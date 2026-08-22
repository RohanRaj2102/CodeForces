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
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        set<int> s(arr,arr+n);
        if(s.size()>2){
            cout<< "No";
        }
        else if(s.size()==1){
            cout<< "Yes";
        }
        else{
            unordered_map<int,int> m;
            int val[2];
            int i=0;
            for(auto a:s){
                val[i]=a;
                i++;
            }
            for(int i=0;i<n;i++){
                if(arr[i]==val[0]){
                    m[val[0]]++;
                }
                if(arr[i]==val[1]){
                    m[val[1]]++;
                }
            }
            if(n%2==0){
                if(m[val[0]]==m[val[1]]){
                    cout<< "Yes";
                }else{
                    cout<< "No";
                }
            }else{
                if(abs(m[val[0]]-m[val[1]]) == 1 ){
                    cout<< "Yes";
                }else{
                    cout<< "No";
                }
            }
        }
        nl;
    }
    return 0;
}