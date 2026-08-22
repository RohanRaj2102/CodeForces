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
    fastio();
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
        if(s.size()==1){
            cout<< -1;
            nl;
        }else{
            sort(arr,arr+n);
            if(arr[n-1]==arr[n-2]){
                vector<int> a;
                vector<int> b;
                for(int i=0;i<n;i++){
                    if(arr[i]==arr[n-1]){
                        b.push_back(arr[i]);
                    }else{
                        a.push_back(arr[i]);
                    }
                }
                cout<< a.size()<<" "<< b.size();
                nl;
                for(auto a:a){
                    cout<< a<<" ";
                }
                nl;
                for(auto b:b){
                    cout<< b<<" ";
                }
                nl;
            }
            else{
                cout<< n-1<< " "<< 1;
                nl;
                for(int i=0;i<n-1;i++){
                    cout<< arr[i]<< " ";
                }
                nl;
                cout<< arr[n-1];
                nl;
            }
        }
    }
    return 0;
}