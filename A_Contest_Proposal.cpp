#include<bits/stdc++.h>
using namespace std;

int main() {
int t,n,a[10000],x;
cin >> t;
while(t--){
	cin >> n;
	for(int i=1;i<=n;i++)cin >> a[i];
	int ans = 0,p;
	for(int i=1;i<=n;i++){
		cin >> x;
		p = a[i-ans];
		if(p>x)ans++;
	}
	cout << ans << endl;
}
	return 0;
}