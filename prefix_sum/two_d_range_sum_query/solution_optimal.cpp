#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<long long> solve(const std::vector<std::vector<int>>&g,const std::vector<std::array<int,4>>&q){if(g.empty())return std::vector<long long>(q.size());int m=g.size(),n=g[0].size();std::vector<std::vector<long long>>p(m+1,std::vector<long long>(n+1));for(int r=0;r<m;++r)for(int c=0;c<n;++c)p[r+1][c+1]=g[r][c]+p[r][c+1]+p[r+1][c]-p[r][c];std::vector<long long>o;for(auto z:q)o.push_back(p[z[2]+1][z[3]+1]-p[z[0]][z[3]+1]-p[z[2]+1][z[1]]+p[z[0]][z[1]]);return o;}
}  // namespace optimal
