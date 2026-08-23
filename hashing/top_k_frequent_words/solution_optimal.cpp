#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<std::string> solve(const std::vector<std::string>&w,int k){std::unordered_map<std::string,int>c;for(auto&s:w)++c[s];using P=std::pair<int,std::string>;auto cmp=[](const P&a,const P&b){return a.first!=b.first?a.first>b.first:a.second<b.second;};std::priority_queue<P,std::vector<P>,decltype(cmp)>q(cmp);for(auto&[s,n]:c){q.push({n,s});if(static_cast<int>(q.size())>k)q.pop();}std::vector<std::string>out;while(!q.empty()){out.push_back(q.top().second);q.pop();}std::reverse(out.begin(),out.end());return out;}
}  // namespace optimal
