#include "../../include/playground_types.hpp"

namespace optimal {
class Queue{std::vector<int>a;int head=0,count=0;public:explicit Queue(int k):a(k){}bool enQueue(int x){if(isFull())return false;a[(head+count)%a.size()]=x;++count;return true;}bool deQueue(){if(isEmpty())return false;head=(head+1)%a.size();--count;return true;}int Front()const{return isEmpty()?-1:a[head];}int Rear()const{return isEmpty()?-1:a[(head+count-1)%a.size()];}bool isEmpty()const{return count==0;}bool isFull()const{return count==static_cast<int>(a.size());}};
}  // namespace optimal
