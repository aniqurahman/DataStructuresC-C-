#include <stdio.h>
#include <iostream>

using namespace std;
 
int step = 1;
void towerOfHanoi(int n, int t1, int t2, int t3) {
    if (n>0) {
        towerOfHanoi (n-1,t1,t3,t2);
        printf("%d\t%d,%d\n",step++,t1,t3);
        towerOfHanoi (n-1,t2,t1,t3);
    }
}

int main() {
    towerOfHanoi(18,1,2,3);
    return 0;
}