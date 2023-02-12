#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  //* the logic of this problem is really tricky
  //* you can check this video solution : 
  //* https://www.youtube.com/watch?v=u09JTgRvL5Y
  //* in normal approach you will get TLE
  while (t--)
  {
    string s ; cin >> s ;
    //* notice : calculation a=a*10 , b=b*10 korte gele 
    //* left to right calculation korte hobe
    string a ="" ,b="";
    bool flag= false ;
    for(int i=0;i<s.length();i++){
      int digit= s[i]-'0';
      if(digit%2==0){
        a += (digit/2)+'0';
        b += (digit/2)+'0';
      }
      else{
        if(flag){
          a += ((digit/2)+1)+'0';
          b += (digit/2)+'0';
        }
        else{
          b += ((digit/2)+1)+'0';
          a += (digit/2)+'0';
        }
        flag = !flag ;
      }
    }
    long long aa = stoi(a) , bb= stoi(b);
    cout << aa << " "<< bb << endl;
  }
  return 0;
}