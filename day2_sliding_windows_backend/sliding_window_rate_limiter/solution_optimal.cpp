#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<bool> solve(const std::vector<std::pair<std::string,long long>>&r,int maxReq,long long window){std::map<std::string,std::deque<long long>>h;std::vector<bool>o;for(auto&[k,t]:r){auto&q=h[k];while(!q.empty()&&q.front()<=t-window)q.pop_front();bool ok=static_cast<int>(q.size())<maxReq;if(ok)q.push_back(t);o.push_back(ok);}return o;}
}  // namespace optimal
