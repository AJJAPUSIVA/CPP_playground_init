#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(const std::vector<long long>&t,long long w){std::vector<int>o;std::deque<long long>q;for(long long x:t){q.push_back(x);while(!q.empty()&&q.front()<=x-w)q.pop_front();o.push_back(q.size());}return o;}
}  // namespace optimal
