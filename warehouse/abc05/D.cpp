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
inline int sqrti(int x) { return (int)sqrt(x); }
inline vi divisors(int x) {
  vi divs = {1};
  rep(i, 2, x){
    if (x % i == 0) divs.push_back(i);
  }
  return divs;
}
inline vector<pair<int, int>> divpairs(int x) {
  vector<pair<int, int>> divs;
  rep(i, 1, x + 1){
    if (x % i == 0) divs.push_back(make_pair(i, x / i));
  }
  return divs;
}

const long long MAXN = 1e6;
const long long MOD = 1e9+7;
const long long INF = __LONG_LONG_MAX__ / 2;

#define put PUTS

signed main() {
  int N;
  cin >> N;
  vvi D(N, vi(N));
  READMATRIX(D, N, N);
  vvi DSum(N, vi(N));;
  DSum[0][0] = D[0][0];
  rep(i, 1, N) DSum[i][0] = DSum[i-1][0] + D[i][0];
  rep(j, 1, N) DSum[0][j] = DSum[0][j-1] + D[0][j];

  rep(i, 1, N) rep(j, 1, N)
    DSum[i][j] = DSum[i-1][j] + DSum[i][j-1] - DSum[i-1][j-1] + D[i][j];

  vi bestScore(N * N + 1, 0); // by_takoyaki_counts
  int delimax = 0;
  rep(k, 1, N * N + 1){
    for(auto size : divpairs(k)) {
      for (int i = 0; i + size.first <= N; i++)
        for (int j = 0; j + size.second <= N; j++) {
          auto current = DSum[i + size.first-1][j + size.second-1];
          if (i >= 1) current -= DSum[i-1][j+size.second-1];
          if (j >= 1) current -= DSum[i + size.first-1][j-1];
          if (i >= 1 && j >= 1) current += DSum[i-1][j-1];
          delimax = max(delimax, current);
        }
    }
    bestScore[k] = delimax;
  }
  int Q; cin >> Q;
  rep(i, 0, Q) {
    int P; cin >> P;
    put(bestScore[P]);
  }

  return 0;
}
