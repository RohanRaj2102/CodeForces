#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

int main(){
    int n;
    cin>> n;
    int val=1;
    int sum=0;
    for(int i=0;i<n;i++){
        int tempval=val;
        int tempsum=0;
        while(tempval!=0){
            int digit=tempval%10;
            tempsum=tempsum+digit;
            tempval=tempval/10;
        }
        if(i==0){
            sum=val;
            val=sum;
        }else{
            sum=val+tempsum;
            val=sum;
        }
    }
    cout<< sum;
    nl;
    return 0;
}