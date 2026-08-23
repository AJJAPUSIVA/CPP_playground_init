#include "../../include/playground_types.hpp"

namespace brute_force {
class MyStack{
    std::deque<int> q;
public:
    void push(int x){q.push_back(x);}
    int pop(){int x=q.back();q.pop_back();return x;}
    int top()const{return q.back();}
    bool empty()const{return q.empty();}
};
}  // namespace brute_force
