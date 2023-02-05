#include<bits/stdc++.h>
using namespace std;

// todo prefix suffix related string question 

int main(){
  int t ; cin >> t ; 
  while( t--){
    int n ; cin >> n ; 
    string s ; cin >> s ; 
    cout<< s << endl; 
    
    set<char>st ; 
    for( int i= 0 ; i<n ; i++){
      st.insert(s[i]);
      prefix.push_back(st.size());
    }
    st.clear();
    for( int i=n-1 ; i>=0 ; i--){
      st.insert(s[i]);
      suffix
    }
  }
  return 0; 
}