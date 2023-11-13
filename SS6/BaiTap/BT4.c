#include <stdio.h>
#include <stdlib.h>
int main()
{
    do
    {
        int a;
        int total;
        printf("Nhập 1 số nguyên\n");
        scanf("%d", &a);
        printf("1. In dãy số chia hết cho 2 và giảm dần (n >= số >= 2)\n");
        printf("2. In các số nhỏ hơn n và tính tổng\n");
        printf("3. In ra các ước số chẵn của n\n");
        printf("4. In ra các ước số lẻ và số lượng các ước lẻ của n\n");
        printf("5. In ra ước số lẻ lớn nhất của n\n");
        printf("6. Thoát\n");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            for (int i = a; i >= 2; i--)
            {
                if (i % 2 == 0)
                {
                    printf(" %d  ", i);
                }
            }
            printf("\n");

            break;
        case 2:
            int sum;
            for (int i = 1; i <= a; i++)
            {
                printf("%d  ", i);
                sum += i;
            }
            printf("\n");
            printf("Tổng các só đó là %d\n", sum);
            break;
        case 3:
            for (int i = 2; i <= a; i+=2)
            {
                if (a % i == 0)
                {
                    printf("%d ", i);
                }
            }
            break;
        case 4:
            int count=0;
            for (int i = 1; i <= a; i += 2)
            {
                if (a % i == 0)
                {
                    ++count;
                    printf("%d ", i);
                }
            }
            printf("\n Số lượng ước lẻ của %d là %d\n",a,count);
            break;
        case 5:
        for (int i = a; i >=1; i-=1)
        {
            if (a%i==0 && i%2!=0)
            {
                printf("Ước số lẻ lớn nhất là %d\n",i);
                break;
            }
            
        }
        
        default:
            printf("Vui long chon tu 1-6\n");
        }
    } while ("Vui long cho tu 1 - 6\n");
}