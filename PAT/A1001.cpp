#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, i, left, zero = 0;
    int pow10[3] = {1000000, 1000, 1};
    int x[3];
    scanf("%d %d", &a, &b);
    c = a + b;
    left = abs(c);
    for (i = 0; i < 3; i++) {
        x[i] = left / pow10[i];
        left = left % pow10[i];
    }
    if (c < 0)
        printf("-");
    for (i = 0; i < 2; i++) {
        if (x[i] != 0 && zero == 0) {
            printf("%d,", x[i]);
            zero = 1;
        } else if (zero == 1) {
            printf("%03d,", x[i]);
        }
    }
    if (zero == 0)
        printf("%d", x[2]);
    else
        printf("%03d", x[2]);
    return 0;
}
