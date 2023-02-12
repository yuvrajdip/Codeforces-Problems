#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t ;
  while(t--){
    long long a , b , n , m ; cin >> a >> b >> n >> m ;
    long long res =0;
    res = min( a+abs(n-1)*b , min( n*a , m*a + abs(n-(m+1))*b));
    cout<< res << endl;
  }
}