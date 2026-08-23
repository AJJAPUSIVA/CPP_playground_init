#include "../../include/playground_types.hpp"

namespace brute_force {
std::vector<int> solve(const std::string&s){int n=s.size();std::vector<int>best{n};for(int mask=0;mask<(1<<(std::max(0,n-1)));++mask){std::map<char,int>part;int p=0;bool ok=true;std::vector<int>lens;for(int i=0;i<n;++i){if(part.count(s[i])&&part[s[i]]!=p){ok=false;break;}part[s[i]]=p;if(i==n-1||(mask>>i&1)){int start=0;for(int x:lens)start+=x;lens.push_back(i+1-start);++p;}}if(ok&&lens.size()>best.size())best=lens;}return best;}
}  // namespace brute_force
