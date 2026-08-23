#include "../../include/playground_types.hpp"

namespace brute_force {
class LRUCache{
    std::size_t cap;std::vector<std::pair<int,int>> items;
public:explicit LRUCache(std::size_t c):cap(c){}
    int get(int k){for(std::size_t i=0;i<items.size();++i)if(items[i].first==k){auto p=items[i];items.erase(items.begin()+i);items.push_back(p);return p.second;}return -1;}
    void put(int k,int v){for(std::size_t i=0;i<items.size();++i)if(items[i].first==k){items.erase(items.begin()+i);break;}items.push_back({k,v});if(items.size()>cap)items.erase(items.begin());}
};
}  // namespace brute_force
