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
  int x = 1;
 	for(int i=2; i<=5; i++) {
 		x^=i;
 		cout<<bitset<3>(x)<<endl;
 	}
 	
  return 0;
}