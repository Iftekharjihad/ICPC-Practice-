#include<iostream>
using namespace std;

void pointerSwap(int *p,int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(){

	int a,b;
    cin >> a >> b;
    pointerSwap(&a,&b);
    cout << a << " " << b << endl;
}