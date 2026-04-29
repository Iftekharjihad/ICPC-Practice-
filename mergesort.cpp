#include<bits/stdc++.h>
using namespace std;
#define ll long long

void merge(int a[],int left,int mid, int right){
    int n1 = (mid - left) + 1;
    int n2 = right - mid;
    int l[n1],r[n2];
    for(int i = 0,j = left; i < n1; i++,j++){
        l[i] = a[j];
    }
    for(int i = 0,j = mid+1; i < n2; i++,j++){
        r[i] = a[j];
    }
    int i = 0,j = 0,k = left;
    while(i < n1 && j < n2){
        if(l[i] < r[j]){
            a[k] = l[i];
            i++;
        }
        else{
            a[k] = r[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        a[k] = l[i];
        i++,k++;
    }
    while(j < n2){
        a[k] = r[j];
        j++,k++;
    }
}

void mergesort(int a[], int left,int right){
    if(left >= right)return;

    int mid = left + (right-left)/2;
    mergesort(a,left,mid);
    mergesort(a,mid+1,right);

    merge(a,left,mid,right);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int a[100005];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    mergesort(a,0,n-1);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
      
    return 0;
}
