#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n); 
    while (n--) {
        int m;
        scanf("%d", &m); 
        int gnomos[m];
        for (int i = 0; i < m; i++) {
            scanf("%d", &gnomos[i]);
        }

        for (int i = 1; i < m - 1; i++) {
            if (gnomos[i] != gnomos[i - 1] + 1 && gnomos[i] != gnomos[i + 1] - 1) {
                printf("%d\n", i + 1);
                break;
            }
        }
    }
    return 0;
}
