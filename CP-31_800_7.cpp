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
        int n,m;
        cin>> n>> m;
        string x;
        string s;
        cin>> x;
        cin>> s;
        string temp="";
        int cnt=0;
        bool found=0;
        temp=x;
        while(1){
            for(int i=0;i<temp.size();i++){
                if(temp[i]==s[0]){
                    int j=0;
                    int k=i;
                    while(k<temp.size() && j<s.size()){
                        if(temp[k]==s[j]){
                            k++;
                            j++;
                        }
                        else{
                            break;
                        }
                    }
                    if(j==s.size()){
                        //mil gaya
                        cout<< cnt;
                        found=1;
                        break;
                    }
                }
            }
            temp=temp+temp;
            if(found==1) break;
            if(temp.size()>250){
                cout<< -1;
                break;
            }
            cnt++;
        }
        nl;
    }
    return 0;
}