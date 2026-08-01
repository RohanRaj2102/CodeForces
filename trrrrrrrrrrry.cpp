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
    int n;
    cin>> n;
    int arr[n];
    int freq[100001]={0};
    for(int i=0;i<n;i++){
        cin>> arr[i];
        freq[arr[i]]++;
    }
    set<int> s(arr,arr+n);
    int diffNos=s.size();
    vector<pair<int,int> > p(diffNos);
    int j=0;
    for(int i=0;i<100001;i++){
        if(freq[i]!=0){
            p[j].first=freq[i];
            p[j].second=i;
            j++;
        }
    }
    sort(p.begin(),p.end());
    int maxi=0;
    int ans=INT_MAX;
    for(int i=diffNos-1;i>=0;i--){
        if(p[i].first>maxi){
            maxi=p[i].first;
            ans=p[i].second;
        }
        else if(p[i].first==maxi){
            if(p[i].second<ans){
                ans=p[i].second;
            }
        }
    }
    cout<< ans;
    return 0;
}