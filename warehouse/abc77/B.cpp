#include <bits/stdc++.h>

#ifdef YUCHIKIDEBUG
  #define dump(x)  cerr << #x << " = " << (x) << endl;
  #define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FUNCTION__ << endl;
#else
  #define dump(x) ;
  #define debug(x) ;
#endif // YUCHIKIDEBUG

#define int long long
#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#define _repr(i,n) repir(i,n,0)
#define repir(i,a,b) for(int i=int(a);i>=int(b);--i)
#define repr(...) _overload3(__VA_ARGS__,repir,_repr,)(__VA_ARGS__)
#define all(x) (x).begin(),(x).end()
#define CINV(x,n) rep(i,n){int x##temp; cin >> x##temp; x.push_back(x##temp);}
#define REV(x) reverse(all(x))
#define SORT(x) sort(all(x))
#define PUTS(x) cout<<(x)<<endl;

inline int sqr(int x) { return x * x; }
inline int sqrti(int x) {return (int)sqrt(x); }

const long long MAXN = 1e6;
const long long MOD = 1e9+7;
const long long INF = __LONG_LONG_MAX__ / 2;

using namespace std;

#define put PUTS

signed main(){
    int N; cin >> N;
    put(sqr(sqrti(N)));
    return 0;
}
