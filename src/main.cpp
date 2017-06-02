#include "../include/Headers.h"
#include "../include/GraphHelper.h"
#include "../include/Helper.h"

using namespace std;
int main() {
    GraphHelper g;
    MFOR(i, 10) {
        int rand1 = g.rand_no();
        int rand2 = g.rand_no();
        cout << "let have a random number " << rand1 << endl;
        cout << "lets have another random number " << rand2 << endl;
        cout << "now lets genenrate a random number between these two "
             << g.rand_no(min(rand1, rand2), max(rand1, rand2)) << endl;
    }
    return 0;
}