#include <cassert>
#include "solution_brute_force.cpp"
#include "solution_optimal.cpp"

int main(){brute_force::SnapshotArray a(2);optimal::SnapshotArray b(2);a.set(0,5);b.set(0,5);int x=a.snap(),y=b.snap();a.set(0,6);b.set(0,6);assert(a.get(0,x)==5&&b.get(0,y)==5);
    return 0;
}
