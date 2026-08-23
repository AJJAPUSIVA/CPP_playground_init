#include "../../include/playground_types.hpp"

namespace optimal {
class MyStack{
    std::queue<int> q;
public:
    void push(int x){q.push(x);for(std::size_t i=0;i+1<q.size();++i){q.push(q.front());q.pop();}}
    int pop(){int x=q.front();q.pop();return x;}
    int top()const{return q.front();}
    bool empty()const{return q.empty();}
};
}  // namespace optimal
