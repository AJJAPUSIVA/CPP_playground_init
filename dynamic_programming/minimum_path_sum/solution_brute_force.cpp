#include "../../include/playground_types.hpp"

namespace brute_force {
long long rec(const std::vector<std::vector<int>>&g,int r,int c){if(r==static_cast<int>(g.size())||c==static_cast<int>(g[0].size()))return 1LL<<60;if(r==static_cast<int>(g.size())-1&&c==static_cast<int>(g[0].size())-1)return g[r][c];return g[r][c]+std::min(rec(g,r+1,c),rec(g,r,c+1));}
long long solve(const std::vector<std::vector<int>>&g){return g.empty()||g[0].empty()?0:rec(g,0,0);}
}  // namespace brute_force
