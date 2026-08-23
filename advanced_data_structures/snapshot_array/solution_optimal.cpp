#include "../../include/playground_types.hpp"

namespace optimal {
class SnapshotArray{int sid=0;std::vector<std::vector<std::pair<int,int>>>h;public:explicit SnapshotArray(int n):h(n,std::vector<std::pair<int,int>>{{0,0}}){}void set(int i,int v){if(h[i].back().first==sid)h[i].back().second=v;else h[i].push_back({sid,v});}int snap(){return sid++;}int get(int i,int id)const{auto&v=h[i];auto it=std::upper_bound(v.begin(),v.end(),std::make_pair(id,std::numeric_limits<int>::max()));return std::prev(it)->second;}};
}  // namespace optimal
