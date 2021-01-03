#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int elems[10] = {0,1,2,3,4,5,6,7,8,9};
int result[10];
int cnt;

void doCombination(int n, int m, int M) {
    if(n < m)
        return;
    if(m == 0) {
        printf("( ");
        for(int i = 0; i < M; i++)
            printf("%d ", result[i]);
        printf(")\n");
        cnt++;
    }
    else {
        result[m - 1] = elems[n - 1];
        doCombination(n - 1, m - 1, M);
        doCombination(n - 1, m, M);
    }
}

/*
    nCm = n-1Cm-1 + n-1Cm   임을 이용.
*/

int main() {

    doCombination(5, 3, 3);
    printf("cnt = %d\n", cnt);
    return 0;
}