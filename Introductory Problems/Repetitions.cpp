#include<bits/stdc++.h>
using namespace std;

void file_i_o() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("../Input.txt","r",stdin);
    freopen("../Output.txt","w",stdout);
  #endif
}

int main(int argc, char** argv) {   
  file_i_o();
  //write your code here Als
  string str;
  cin>>str;
  int maxcount = 1, count = 1;
  for(auto i=1; i<str.length(); i++) {
    if(str[i] == str[i-1]) {
      count++;
    } else {
      count = 1;
    }
    if(count>maxcount) 
        maxcount = count;
  }

  cout<<maxcount;
  return 0;
}