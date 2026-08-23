#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<playground::Point> solve(const std::vector<playground::Point>&p,int k){using E=std::pair<long long,int>;std::priority_queue<E>q;for(int i=0;i<static_cast<int>(p.size());++i){long long d=1LL*p[i].x*p[i].x+1LL*p[i].y*p[i].y;q.push({d,i});if(static_cast<int>(q.size())>k)q.pop();}std::vector<playground::Point>out;while(!q.empty()){out.push_back(p[q.top().second]);q.pop();}return out;}
}  // namespace optimal
