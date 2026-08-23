#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<double> solve(const std::vector<int>&a){std::priority_queue<int>lo;std::priority_queue<int,std::vector<int>,std::greater<int>>hi;std::vector<double>out;for(int x:a){if(lo.empty()||x<=lo.top())lo.push(x);else hi.push(x);if(lo.size()>hi.size()+1){hi.push(lo.top());lo.pop();}if(hi.size()>lo.size()){lo.push(hi.top());hi.pop();}out.push_back(lo.size()==hi.size()?(lo.top()+hi.top())/2.0:lo.top());}return out;}
}  // namespace optimal
