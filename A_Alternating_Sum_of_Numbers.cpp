#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin >> t;
    while(t--){
        int n,ans = 0;
        cin>>n
		for(int i=1;i<=n;i++) cin>>a,ans+=(i&1)?a:-a;
		cout<<ans<<"\n";
    }
    
      
    return 0;
}
