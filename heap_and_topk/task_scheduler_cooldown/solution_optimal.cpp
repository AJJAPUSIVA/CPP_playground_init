#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::vector<char>&tasks,int n){std::array<int,26>c{};for(char x:tasks)++c[x-'A'];int mx=*std::max_element(c.begin(),c.end()),ties=std::count(c.begin(),c.end(),mx);return std::max<int>(tasks.size(),(mx-1)*(n+1)+ties);}
}  // namespace optimal
