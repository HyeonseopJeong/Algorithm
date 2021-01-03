#include <cstdio>
#include <algorithm>

using namespace std;

int elems[10] = {0,1,2,3,4,5,6,7,8,9};
int result[10];
int cnt;

void findSubset(int n, int idx, int dep) {
    if(dep == n) {
        printf("( ");
        for(int i = 0; i < idx; i++)
            printf("%d ", result[i]);
        printf(")\n");
        cnt++;
    }
    else {
        findSubset(n, idx, dep + 1);
        result[idx] = elems[dep];
        findSubset(n, idx + 1, dep + 1);
    }
}

/*
    subset을 만드는 tree를 생각하면서 구현하면 더 잘된다.
*/

int main() {
    findSubset(3, 0, 0);
    printf("cnt : %d\n", cnt);
    return 0;
}