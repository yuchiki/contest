#include <bits/stdc++.h>
using namespace std;

#ifdef YUCHIKIDEBUG
  #define dump(x)  cerr << #x << " = " << (x) << endl;
  #define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FUNCTION__ << endl;
#else
  #define dump(x) ;
  #define debug(x) ;
#endif // YUCHIKIDEBUG

#define int long long
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vvi vector<vi>

#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#define _repr(i,n) repir(i,n,0)
#define repir(i,a,b) for(int i=(int)(a);i>=(int)(b);--i)
#define repr(...) _overload3(__VA_ARGS__,repir,_repr,)(__VA_ARGS__)
#define all(x) (x).begin(),(x).end()
#define CINV(x,n) rep(temporary_index,n){int cinvtemp; cin >> cinvtemp; x.push_back(cinvtemp); }
#define READV(x,n) rep(temporary_index,n){int cinvtemp; cin >> cinvtemp; x[temporary_index] = cinvtemp; }
#define READMATRIX(x,m,n) rep(temp_matrix,m){READV(x[temp_matrix],n);}
#define REV(x) reverse(all(x))
#define SORT(x) sort(all(x))
#define PUTS(x) cout<<(x)<<endl;

inline int sqr(int x) { return x * x; }
inline int sqrti(int x) { return (int) sqrt(x); }
inline vi divisors(int x) {
  vi divs = {1};
  rep (i, 2, x) {
    if (x % i == 0) divs.push_back(i);
  }
  return divs;
}
inline vector<pair<int, int>> divpairs (int x) {
  vector<pair<int, int>> divs;
  rep (i, 1, x + 1) {
    if (x % i == 0) divs.push_back(make_pair (i, x / i));
  }
  return divs;
}

/// return the first i in [lb .. ub) where pred(i) holds.
/// if none of the above i satisfies pred, ub is returned.
template <class Predicate>
inline int bin_search(int lb, int ub, Predicate pred) { // return the first i where pred(i) holds.
  while(lb + 1 < ub) {
    int mid = (lb + ub) / 2;
    if (pred(mid)) {
      ub = mid;
    } else {
      lb = mid;
    }
  }
  return pred(lb) ? lb : ub;
}

const long long MAXN = 1e6;
const long long MOD = 1e9+7;
const long long INF = __LONG_LONG_MAX__ / 2;

#define put PUTS

signed main(){
  int N; cin >> N;
  vi C(N); READV(C, N);
  vi smallest(N + 1, INF);
  smallest[0] = -INF;

  for (auto c : C) {
    int pos = bin_search(0, N, [&](int i) -> bool { return smallest[i] >= c; });
    smallest[pos] = c;
  } 

  int sorted = bin_search(0, N+1, [&](int i) -> bool { return smallest[i] == INF; }) - 1;
  put(N - sorted);
  return 0;
}
