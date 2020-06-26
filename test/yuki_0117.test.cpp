#define PROBLEM "https://yukicoder.me/problems/no/117"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"
#include "combinatorics/mod_npr.cpp"
#include "combinatorics/mod_ncr.cpp"
#include "combinatorics/nhr.cpp"

int main() {
	pre_mod_comb(2100000,MPRIME);

	int T; cin>>T;
	for(int i=0; i<T; i++) {
		int n=0, r=0, mode;
		string S; cin>>S;
		bool fn=false;
		for(int i=0; i<S.length(); i++) {
			char ch=S[i];
			switch(ch) {
				case 'C':
					mode=0;
					break;
				case 'P':
					mode=1;
					break;
				case 'H':
					mode=2;
					break;
				case ',':
					fn=true;
				case '(':
				case ')':
					break;
				default:
					int d=(int)(ch-'0');
					if(fn) r=r*10+d;
					else   n=n*10+d;
					break;
			}
		}
		switch(mode) {
			case 0:
				cout<<mod_nCr(n,r)<<endl;
				break;
			case 1:
				cout<<mod_nPr(n,r)<<endl;
				break;
			case 2:
				cout<<nHr(n,r,1)<<endl;
				break;
		}
	}
}
