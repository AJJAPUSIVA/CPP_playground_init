#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<int> solve(std::vector<int>a){auto bits=[](int x){int c=0;for(int i=0;i<32;++i)c+=(static_cast<unsigned>(x)>>i)&1U;return c;};std::stable_sort(a.begin(),a.end(),[&](int x,int y){int bx=bits(x),by=bits(y);return bx!=by?bx<by:x<y;});return a;}
}  // namespace brute_force
