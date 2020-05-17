#ifndef lib_binpow
#define lib_binpow
#include "lib1/alias_declaration.cpp"

ll binpow(ll a, ll ex, ll p) {
	ll result=1;
	while(ex>0) {
		if(ex&1) result=result*a%p;
		ex>>=1;
		a=a*a%p;
	}
	return result;
}

#endif /* lib_binpow */