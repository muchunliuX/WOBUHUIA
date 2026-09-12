#include <stdio.h>

/*
 * hello.c —— 第一个 C 程序
 *
 * 用途：验证 VS Code + gcc 环境是否配置成功
 * 编译：Ctrl+Shift+B  或  终端执行 gcc hello.c -o hello.exe
 */

int main(void)
{
    printf("Hello, WOBUHUIA!\n");
    printf("C 语言环境配置成功。\n\n");

    /* 简单示例：变量与循环 */
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("1 到 10 的和是: %d\n", sum);

    return 0;
}
