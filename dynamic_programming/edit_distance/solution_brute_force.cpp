#include "../../include/playground_types.hpp"

namespace brute_force {
int rec(const std::string&a,const std::string&b,int i,int j){if(i==static_cast<int>(a.size()))return b.size()-j;if(j==static_cast<int>(b.size()))return a.size()-i;if(a[i]==b[j])return rec(a,b,i+1,j+1);return 1+std::min({rec(a,b,i+1,j),rec(a,b,i,j+1),rec(a,b,i+1,j+1)});}
int solve(const std::string&a,const std::string&b){return rec(a,b,0,0);}
}  // namespace brute_force
