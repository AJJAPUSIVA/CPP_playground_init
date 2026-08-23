#include "../../include/playground_types.hpp"

namespace brute_force {
int rec(const std::string&s,int l,int r){if(l>r)return 0;if(l==r)return 1;if(s[l]==s[r])return 2+rec(s,l+1,r-1);return std::max(rec(s,l+1,r),rec(s,l,r-1));}
int solve(const std::string&s){return s.empty()?0:rec(s,0,s.size()-1);}
}  // namespace brute_force
