#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<int>&a,int k){std::priority_queue<int,std::vector<int>,std::greater<int>>q;for(int x:a){q.push(x);if(static_cast<int>(q.size())>k)q.pop();}return q.top();}
}  // namespace optimal
