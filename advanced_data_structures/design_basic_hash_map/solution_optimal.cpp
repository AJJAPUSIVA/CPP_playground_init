#include "../../include/playground_types.hpp"

namespace optimal {
class HashMap{static constexpr int N=257;std::array<std::list<std::pair<int,int>>,N>b;int h(int k)const{return (k%N+N)%N;}public:void put(int k,int x){auto&z=b[h(k)];for(auto&p:z)if(p.first==k){p.second=x;return;}z.push_back({k,x});}int get(int k)const{for(auto p:b[h(k)])if(p.first==k)return p.second;return-1;}void remove(int k){auto&z=b[h(k)];for(auto it=z.begin();it!=z.end();++it)if(it->first==k){z.erase(it);return;}}};
}  // namespace optimal
