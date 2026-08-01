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
        int a,b;
        cin>> a>> b;
        int layer1=0;
        int layer2=0;
        int i=0;
        ll oddsum=0;
        ll evensum=0;
        while(oddsum<=a && evensum<=b){
            if(i%2==0){
                evensum=evensum+pow(2,i);
            }else{
                oddsum=oddsum+pow(2,i);
            }
            layer1++;
            i++;
        }
        int j=0;
        ll oddsum2=0;
        ll evensum2=0;
        while(oddsum2<=b && evensum2<=a){
            if(j%2==0){
                evensum2=evensum2+pow(2,j);
            }else{
                oddsum2=oddsum2+pow(2,j);
            }
            layer2++;
            j++;
        }
        cout<< max(layer1,layer2)-1;

        nl;
    }


    return 0;
}