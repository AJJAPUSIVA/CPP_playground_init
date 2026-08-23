#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<bool> solve(const std::vector<std::pair<std::string,long long>>&r,int maxReq,long long w){struct S{long long bucket=-1;int count=0;};std::unordered_map<std::string,S>m;std::vector<bool>o;for(auto&[k,t]:r){long long b=t/w;auto&s=m[k];if(s.bucket!=b){s.bucket=b;s.count=0;}bool ok=s.count<maxReq;if(ok)++s.count;o.push_back(ok);}return o;}
}  // namespace optimal
