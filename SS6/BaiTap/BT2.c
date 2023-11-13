#include <stdio.h>
#include <stdlib.h>
int ucln(int a, int b)
{
    while (b != 0)
    {
        int count = b;
        b = a % b;
        a = count;
    }
    return a;
}
int bcnn(int a, int b)
{
    int total = a * b / ucln(a, b);
    return total;
}
int main()
{
    do
    {
        int a, b;
        int total;
        printf("Nhập lần lượt 2 số nguyên\n");
        scanf("%d%d", &a, &b);
        printf("1. Tổng 2 số\n");
        printf("2. Hiệu 2 số\n");
        printf("3. tích 2 số\n");
        printf("4. Thương 2 số\n");
        printf("5. Số dư trong phép chia 2 số\n");
        printf("6. Ước chung lớn nhất\n");
        printf("7. Bội chung nhỏ nhất\n");
        printf("8. Thoát\n");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case 2:
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case 3:
            printf("%d x %d = %d\n", a, b, a * b);
            break;
        case 4:
            printf("%d : %d = %d\n", a, b, a / b);
            break;
        case 5:
            printf("%d % %d = %d\n", a, b, a % b);
            break;
        case 6:
            total = ucln(a, b);
            printf("UCLN cua 2 số đó là %d", total);
            break;
        case 7:
            total = bcnn(a, b);
            printf("BCNN cua 2 so do la %d", total);
        case 8:
            return 0;
        default:
            printf("Vui long chon tu 1-8\n");
        }
    } while ("Vui long cho tu 1 - 8\n");
}