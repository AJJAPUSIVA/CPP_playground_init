#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<int> solve(const std::vector<int>&a,int k){std::vector<int>o;if(k<=0||k>(int)a.size())return o;for(int i=0;i+k<=(int)a.size();++i)o.push_back(*std::max_element(a.begin()+i,a.begin()+i+k));return o;}
}  // namespace brute_force
