#include "../../include/playground_types.hpp"

namespace optimal {
long long line(const std::vector<int>&a,int l,int r){long long p2=0,p1=0;for(int i=l;i<=r;++i){long long c=std::max(p1,p2+a[i]);p2=p1;p1=c;}return p1;}
long long solve(const std::vector<int>&a){if(a.empty())return 0;if(a.size()==1)return a[0];return std::max(line(a,0,a.size()-2),line(a,1,a.size()-1));}
}  // namespace optimal
