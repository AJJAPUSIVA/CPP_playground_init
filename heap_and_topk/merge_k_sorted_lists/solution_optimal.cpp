#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(const std::vector<std::vector<int>>&lists){using T=std::tuple<int,int,int>;std::priority_queue<T,std::vector<T>,std::greater<T>>q;for(int i=0;i<static_cast<int>(lists.size());++i)if(!lists[i].empty())q.push({lists[i][0],i,0});std::vector<int>out;while(!q.empty()){auto[x,i,j]=q.top();q.pop();out.push_back(x);if(j+1<static_cast<int>(lists[i].size()))q.push({lists[i][j+1],i,j+1});}return out;}
}  // namespace optimal
