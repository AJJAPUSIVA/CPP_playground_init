#include "../../include/playground_types.hpp"

namespace brute_force {
std::uint32_t solve(std::uint32_t x){std::bitset<32>b(x);std::string s=b.to_string();std::reverse(s.begin(),s.end());return static_cast<std::uint32_t>(std::bitset<32>(s).to_ulong());}
}  // namespace brute_force
