#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(const std::string&s){std::array<int,256>last{};for(int i=0;i<static_cast<int>(s.size());++i)last[static_cast<unsigned char>(s[i])]=i;std::vector<int>out;int start=0,end=0;for(int i=0;i<static_cast<int>(s.size());++i){end=std::max(end,last[static_cast<unsigned char>(s[i])]);if(i==end){out.push_back(end-start+1);start=i+1;}}return out;}
}  // namespace optimal
