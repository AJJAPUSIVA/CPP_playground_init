#include "../../include/playground_types.hpp"

namespace brute_force {
std::string solve(const std::string&p){std::stringstream ss(p);std::string seg,out;while(std::getline(ss,seg,'/')){if(seg.empty())continue;bool num=!seg.empty()&&std::all_of(seg.begin(),seg.end(),[](unsigned char c){return std::isdigit(c);});out+="/"+std::string(num?":id":seg);}return out.empty()?"/":out;}
}  // namespace brute_force
