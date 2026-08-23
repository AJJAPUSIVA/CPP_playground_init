#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<playground::Interval> solve(const std::vector<std::vector<playground::Interval>>&s){
    using T=std::tuple<int,int,int,int>;
    std::priority_queue<T,std::vector<T>,std::greater<T>>q;
    for(int i=0;i<static_cast<int>(s.size());++i)if(!s[i].empty())q.push({s[i][0].start,s[i][0].end,i,0});
    if(q.empty())return{};auto[st,en,li,idx]=q.top();q.pop();int end=en;std::vector<playground::Interval>o;
    if(idx+1<static_cast<int>(s[li].size()))q.push({s[li][idx+1].start,s[li][idx+1].end,li,idx+1});
    while(!q.empty()){auto[a,b,i,j]=q.top();q.pop();if(a>end)o.push_back({end,a});end=std::max(end,b);if(j+1<static_cast<int>(s[i].size()))q.push({s[i][j+1].start,s[i][j+1].end,i,j+1});}
    return o;
}
}  // namespace optimal
