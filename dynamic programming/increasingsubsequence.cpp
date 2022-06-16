#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define fro(i,k,n)      for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define in              cin>>
#define o(x)            cout<<x<<endl;
typedef vector<int>                     vll;
void ans(){
    int n;
    cin>>n;
    vll dp(n,0);
    int a[n];
    memset(a,0,sizeof(a));
    int k;
    int size=0;
    fr(i,n){
        in k;
        if(a[0]==0){a[0]=k;size+=1;}
        else{
            int c=upper_bound(a,a+size,k)-a;
            if(c>=1){if(k!=a[c-1]){a[c]=k;}}
            if(c==0){a[c]=k;}
            if(c==size && a[c-1]!=k){size++;}
        }
    }
    int count=0;
    fr(i,n){
        if(a[i]!=0){count++;}
        else{break;}
    }
    o(count)
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}