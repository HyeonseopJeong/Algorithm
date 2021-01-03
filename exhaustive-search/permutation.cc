#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int elems[10] = {0,1,2,3,4,5,6,7,8,9};
int result[10];

int cnt;

void _perm(int n, int idx) {
    if(idx == n) {
        printf("( ");
        for(int i = 0; i < n; i++)
            printf("%d ", result[i]);
        printf(")\n");
        cnt++;
    }
    else {
        for(int i = idx; i < n; i++) {
            swap(result[idx], result[i]);
            _perm(n, idx + 1);
            swap(result[idx], result[i]);
        }
    }
}

void doPermutation(int n, int m, int M) {
    if(n < m)
        return;
    if(m == 0) {
        _perm(M, 0);
    }
    else {
        result[m - 1] = elems[n - 1];
        doPermutation(n - 1, m - 1, M);
        doPermutation(n - 1, m, M);
    }
}

/*
    n개 중에서 m개를 고른 다음골라진 m개에 순서를 바꿔서 m!개 출력.
    즉, combination을 먼저 한 결과에 모든 순서를 만들어서 출력.
*/

int main() {

    doPermutation(10, 3, 3);
    printf("cnt = %d\n", cnt);
    return 0;
}