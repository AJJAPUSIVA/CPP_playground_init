#include "../../include/playground_types.hpp"

namespace brute_force {
class Fenwick{std::vector<long long>a;public:explicit Fenwick(const std::vector<int>&v):a(v.begin(),v.end()){}void add(int i,int d){a[i]+=d;}long long prefix(int i)const{return std::accumulate(a.begin(),a.begin()+i+1,0LL);}};
}  // namespace brute_force
