#include "../../include/playground_types.hpp"

namespace optimal {
class MyQueue{
    std::stack<int> in,out;
    void shift(){if(out.empty())while(!in.empty()){out.push(in.top());in.pop();}}
public:
    void push(int x){in.push(x);}
    int pop(){shift();int x=out.top();out.pop();return x;}
    int peek(){shift();return out.top();}
    bool empty()const{return in.empty()&&out.empty();}
};
}  // namespace optimal
