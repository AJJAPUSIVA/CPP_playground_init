#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(const std::vector<int>&a,int k){std::vector<int>o;if(k<=0||k>(int)a.size())return o;std::deque<int>d;for(int i=0;i<(int)a.size();++i){while(!d.empty()&&d.front()<=i-k)d.pop_front();while(!d.empty()&&a[d.back()]<=a[i])d.pop_back();d.push_back(i);if(i>=k-1)o.push_back(a[d.front()]);}return o;}
}  // namespace optimal
