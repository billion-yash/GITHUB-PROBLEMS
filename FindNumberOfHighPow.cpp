#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

//finding the high power value
//https://cp-algorithms.com/algebra/binary-exp.html
//ab+c=ab⋅ac and a2b=ab⋅ab=(ab)2.



//long long binpow(long long a, long long b) {
//     long long res = 1;
//     while (b > 0) {
//         if (b & 1)
//             res = res * a;
//         a = a * a;
//         b >>= 1;
//     }
//     return res;
// }



long long binpow(ll num , ll pow){
	if(pow==0){
		return 1;
	}
	ll res = 1;
//3^13=3^(1101)=3^8⋅3^4⋅3^1
	while(pow!=0){
		if(pow&1){
			res = res*num;
		}
		pow = pow>>1;
	}
	return res;
}




int main(int argc, char const *argv[])
{
	cout<<setprecision(10020)<<pow(55555555 , 25);
	return 0;
}