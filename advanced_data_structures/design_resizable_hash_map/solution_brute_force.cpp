#include "../../include/playground_types.hpp"

namespace brute_force {
class HashMap{std::vector<std::pair<int,int>>v;public:void put(int k,int x){for(auto&p:v)if(p.first==k){p.second=x;return;}v.push_back({k,x});}int get(int k)const{for(auto p:v)if(p.first==k)return p.second;return-1;}void remove(int k){v.erase(std::remove_if(v.begin(),v.end(),[&](auto p){return p.first==k;}),v.end());}};
}  // namespace brute_force
