#include "../../include/playground_types.hpp"

namespace optimal {
long long solve(const std::vector<int>&a,const std::vector<int>&b,const std::vector<int>&c,const std::vector<int>&d){std::unordered_map<int,long long>m;for(int x:a)for(int y:b)++m[x+y];long long ans=0;for(int x:c)for(int y:d)ans+=m[-x-y];return ans;}
}  // namespace optimal
