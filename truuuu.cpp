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
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    vector<int> v1;
    vector<int > v2;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            v1.push_back(arr[i]);
        }
        else{
            v2.push_back(arr[i]);
        }
    }
    vector<int> ans;
    for(int i=0;i<v1.size();i++){
        ans.push_back(v1[i]);
    }
    for(int i=0;i<v2.size();i++){
        ans.push_back(v2[i]);
    }
    for(auto a:ans){
        cout<< a<< " ";
    }
    nl;
    return 0;
}