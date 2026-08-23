#include "../../include/playground_types.hpp"

namespace brute_force {
bool solve(const std::vector<std::string>& b){
    auto unique=[](const std::vector<char>& xs){ std::set<char>s; for(char c:xs) if(c!='.'&&!s.insert(c).second) return false; return true;};
    for(int r=0;r<9;++r){ std::vector<char>x(b[r].begin(),b[r].end()); if(!unique(x)) return false; }
    for(int c=0;c<9;++c){ std::vector<char>x; for(int r=0;r<9;++r)x.push_back(b[r][c]); if(!unique(x)) return false; }
    for(int br=0;br<3;++br) for(int bc=0;bc<3;++bc){ std::vector<char>x; for(int r=0;r<3;++r)for(int c=0;c<3;++c)x.push_back(b[br*3+r][bc*3+c]); if(!unique(x))return false;}
    return true;
}
}  // namespace brute_force
