#include "../../include/playground_types.hpp"

namespace optimal {
class Fenwick{std::vector<long long>b;public:explicit Fenwick(const std::vector<int>&v):b(v.size()+1){for(int i=0;i<static_cast<int>(v.size());++i)add(i,v[i]);}void add(int i,int d){for(++i;i<static_cast<int>(b.size());i+=i&-i)b[i]+=d;}long long prefix(int i)const{long long s=0;for(++i;i>0;i-=i&-i)s+=b[i];return s;}};
}  // namespace optimal
