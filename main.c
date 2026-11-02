
#include <stdio.h>

int main(void)
{
    int number;
    scanf("%d", &number);

    // 0未満、10以上12未満、15以上の場合はNGとする
    int is_ok = !(number < 0 ||
                  (number >= 10 && number < 12) ||
                  number >= 15);

    // 条件に合えばOK、そうでなければNGを表示する
    if (is_ok)
    {
        printf("OK\n");
    }
    else
    {
        printf("NG\n");
    }

    return 0;
}
