#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> parent, sz;

    DSU(int n){
        parent.resize(n+1);
        sz.assign(n+1,1);
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int x){
        if(parent[x]==x) return x;
        return parent[x]=find(parent[x]);
    }

    bool unite(int a,int b){
        a=find(a);
        b=find(b);
        if(a==b) return false;

        if(sz[a]<sz[b]) swap(a,b);
        parent[b]=a;
        sz[a]+=sz[b];
        return true;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> p(n+1);
    for(int i=1;i<=n;i++) cin >> p[i];

    vector<tuple<long long,int,int>> edges;

    for(int i=1;i<=n;i++){
        long long g = p[i];

        for(int j=i+1;j<=n;j++){
            g = __gcd(g, p[j]);
            edges.push_back({g,i,j});
            if(g==1) break;
        }
    }

    sort(edges.begin(), edges.end());

    DSU dsu(n);

    long long ans = 0;

    for(auto &[w,u,v] : edges){
        if(dsu.unite(u,v)){
            ans += w;
        }
    }

    cout << ans << "\n";
}