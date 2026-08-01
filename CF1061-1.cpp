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
        long long int n;
        cin>> n;
        long long int hao=0;
        while(1){
            if(n<3){
                cout<< hao;
                break;
            }else{
                int m[3]={0};
                int val=n/3;
                int excess=n%3;
                for(int i=0;i<3;i++){
                    m[i]=val;
                }
                
                for(int i=0;i<excess;i++){
                    m[2]++;                    
                }
                hao=hao+m[0];
                n=m[2];
            }
        }
        cout<< endl;
    }
    return 0;
}