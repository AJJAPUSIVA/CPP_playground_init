#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::string&a,const std::string&b){std::vector<int> next(b.size()+1),cur(b.size()+1);for(int i=static_cast<int>(a.size())-1;i>=0;--i){for(int j=static_cast<int>(b.size())-1;j>=0;--j)cur[j]=a[i]==b[j]?1+next[j+1]:std::max(next[j],cur[j+1]);next.swap(cur);}return next[0];}
}  // namespace optimal
