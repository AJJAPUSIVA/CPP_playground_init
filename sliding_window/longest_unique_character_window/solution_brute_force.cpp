#include "../../include/playground_types.hpp"

namespace brute_force {
int solve(const std::string& s){
    int best=0;for(int i=0;i<(int)s.size();++i){std::set<char>seen;for(int j=i;j<(int)s.size();++j){if(!seen.insert(s[j]).second)break;best=std::max(best,j-i+1);}}return best;
}
}  // namespace brute_force
