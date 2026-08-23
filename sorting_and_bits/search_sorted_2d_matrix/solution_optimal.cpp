#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(const std::vector<std::vector<int>>&m,int target){if(m.empty()||m[0].empty())return false;int rows=m.size(),cols=m[0].size(),l=0,r=rows*cols-1;while(l<=r){int mid=l+(r-l)/2,x=m[mid/cols][mid%cols];if(x==target)return true;if(x<target)l=mid+1;else r=mid-1;}return false;}
}  // namespace optimal
