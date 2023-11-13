#include <stdio.h>
// int main(){
//     for (int i = 1; i <20 ; i+=2)
//     {
//         printf("%d\n",i);
//     }
// }

int main()
{

    int sum, t;
    printf("Nhập vào số các số nguyên cần nhập\n");
    scanf("%d", &t);
    while (t--)
    {
        int num;
        scanf("%d", &num);
        if (num%2!=0)
        {
            sum+=num;
        }
    }
    printf("tổng các số nguyên lẻ vừa nhập là %d",sum);
}