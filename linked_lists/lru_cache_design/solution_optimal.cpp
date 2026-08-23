#include "../../include/playground_types.hpp"

namespace optimal {
class LRUCache{
    std::size_t cap;std::list<std::pair<int,int>> order;std::unordered_map<int,std::list<std::pair<int,int>>::iterator> pos;
public:explicit LRUCache(std::size_t c):cap(c){}
    int get(int k){auto it=pos.find(k);if(it==pos.end())return -1;order.splice(order.begin(),order,it->second);return it->second->second;}
    void put(int k,int v){auto it=pos.find(k);if(it!=pos.end()){it->second->second=v;order.splice(order.begin(),order,it->second);return;}order.push_front({k,v});pos[k]=order.begin();if(order.size()>cap){pos.erase(order.back().first);order.pop_back();}}
};
}  // namespace optimal
