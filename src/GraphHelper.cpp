//
// Created by Ashutosh Tiwari on 06/12/16.
//

#include "../include/GraphHelper.h"

using namespace std;

int GraphHelper::rand_no(int mn, int mx) {
    mt19937 mt_rand_gen(std::time(nullptr));
    uniform_int_distribution<int> dist(mn, mx);
    return dist(mt_rand_gen);
}

long long int GraphHelper::rand_no(long long int mn, long long int mx) {
    static mt19937_64 mt_rand_gen(std::time(nullptr));
    static uniform_int_distribution<long long int> dist(mn, mx);
    return dist(mt_rand_gen);
}

int GraphHelper::rand_no() {
    typedef std::chrono::high_resolution_clock myclock;
    myclock::time_point beginning = myclock::now();
    myclock::duration d = myclock::now() - beginning;
    unsigned seed2 = d.count();
    std::mt19937 generator (seed2);
    return  generator();

}

