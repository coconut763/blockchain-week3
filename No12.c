#include <stdio.h>

int main() {
    int decimal;
    printf("输入一个十进制数：");
    scanf("%d", &decimal);
    printf("对应的二进制数是：");

    int bits[32]; // 足够存储int类型的最大值的二进制位
    int i = 0;
    while (decimal > 0) {
        bits[i++] = decimal % 2;
        decimal /= 2;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
    printf("\n");
    return 0;
}
