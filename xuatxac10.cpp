#include <stdio.h>
#include <math.h>
int main() {
    int n, m;
    printf("Nhap vao so hang: ");
    scanf("%d", &n);
    printf("Nhap vao so cot: ");
    scanf("%d", &m);
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Cac so nguyen to trong mang la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int dem = 1; 
            if (a[i][j] < 2) {
                dem = 0;
            } else {
                for (int h = 2; h <= sqrt(a[i][j]); h++) {
                    if (a[i][j] % h == 0) {
                        dem = 0; 
                        break;   
                    }
                }
            }
            if (dem == 1) {
                printf("%d\n", a[i][j]);
            }
        }
    }

    return 0;
}
