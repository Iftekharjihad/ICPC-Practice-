#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxN = 105;
vector<int> allPrimes;

bool isPrime(int x){
    if(x <= 1)return false;
    for(int i = 2; i*i <= x; i++){
        if(x % i == 0)return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i = 1; i <= maxN; i++){
        if(isPrime(i)){
            allPrimes.push_back(i);
        }
    }
    int c = 1;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ori = n;
        map<int,int> mp;
        int idx = 0;
        while(n > 1 && idx < allPrimes.size()){
            if(n % allPrimes[idx] == 0){
                mp[allPrimes[idx]]++;
                n /= allPrimes[idx];
            }
            else{
                idx++;
            }
        }
        cout << "Case " << c << ": ";
        for(auto [a,b] : mp){
            cout << ori << " = " << a << " (" << b << ")";
        }
        cout << endl;
        c++;
    }
    
      
    return 0;
}
