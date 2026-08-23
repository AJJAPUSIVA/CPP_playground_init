#include "../../include/playground_types.hpp"

namespace brute_force {
long long rec(int r,int c,int m,int n){if(r==m-1&&c==n-1)return 1;if(r>=m||c>=n)return 0;return rec(r+1,c,m,n)+rec(r,c+1,m,n);}
long long solve(int m,int n){return m<=0||n<=0?0:rec(0,0,m,n);}
}  // namespace brute_force
