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
  long long n;
  cin>>n;
  cout<<n<<" ";
  while(n!=1) {
  	if(n%2==0) {
  		n /= 2;
  	} else {
  		n = (n*3)+1;
  	}
  	cout<<n<<" ";
  }
  return 0;
}