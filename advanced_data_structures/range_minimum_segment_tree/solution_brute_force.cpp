#include "../../include/playground_types.hpp"

namespace brute_force {
class SegTree{std::vector<int>a;public:explicit SegTree(std::vector<int>v):a(std::move(v)){}void update(int i,int v){a[i]=v;}int query(int l,int r)const{return *std::min_element(a.begin()+l,a.begin()+r+1);}};
}  // namespace brute_force
