#include "../../include/playground_types.hpp"

namespace brute_force {
bool rec(const std::string&s,const std::unordered_set<std::string>&d,int i){if(i==static_cast<int>(s.size()))return true;for(int j=i+1;j<=static_cast<int>(s.size());++j)if(d.count(s.substr(i,j-i))&&rec(s,d,j))return true;return false;}
bool solve(const std::string&s,const std::vector<std::string>&w){return rec(s,std::unordered_set<std::string>(w.begin(),w.end()),0);}
}  // namespace brute_force
