#include "../../include/playground_types.hpp"

namespace brute_force {
class Queue{std::vector<int>v;std::size_t cap;public:explicit Queue(int k):cap(k){}bool enQueue(int x){if(v.size()==cap)return false;v.push_back(x);return true;}bool deQueue(){if(v.empty())return false;v.erase(v.begin());return true;}int Front()const{return v.empty()?-1:v.front();}int Rear()const{return v.empty()?-1:v.back();}bool isEmpty()const{return v.empty();}bool isFull()const{return v.size()==cap;}};
}  // namespace brute_force
