#include <stdio.h>
int main()
{
    int day;
    scanf("%d",&day);
    switch (day)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    printf("gongzuori");
    break;
    case 6:
    case 7:
    printf("xiuxiri");
        break;
    default:
        break;
    }
    return 0;
}