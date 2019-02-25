#define _CRT_SECURE_NO_WARNINGS//提交时去掉
//头文件区
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<ctype.h>
#include<stdio.h>
//pta basic 的练习区
//倒序写法，即新题在最上面
//使用c语言为主
//1001 害死人不偿命的(3n+1)猜想
/*
int main()
{
    int count = 0, n;
    scanf("%d", &n);
    while (1 != n)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = (3 * n + 1) / 2;
        }
        count++;
    }
    printf("%d", count);
    return 0;
}
*/

//1002 写出这个数
/*
int main()
{
    char in;
    int sum = 0;
    const char* name[] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
    while ((in = getchar())!='\n')
    {
        sum = sum + (in - '0');
    }
    if (sum >= 100)
        printf("%s ", name[sum / 100]);
    if (sum >= 10)
        printf("%s ", name[sum / 10 % 10]);
    printf("%s ", name[sum % 10]);
    return 0;
	}
*/

//1003 我要通过！
/*
//这个版本只能得（17/20）分，感觉哪个地方遗漏了，感觉好烦，但先这样吧
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    int i;
    for (i = 0; i < n; i++)
    {

        int flag = 0;
        int count_p = 0, count_t = 0;
        char c;
        int a = 0, p = 0, t = 0,flag1=0,flag2=0;
        while ((c = getchar()) != '\n')
        {
            if (c != 'P'&&c != 'A'&&c != 'T')
                flag = -1;
            if (c == 'P')
            {
                flag1 = 1;
                count_p++;
            }

            if (c == 'T')
            {
                flag2 = 1;
                count_t++;
            }

            if (c == 'A'&&flag1==0&&flag2==0)
                a++;
            if (c == 'A'&&flag1 == 1 && flag2 == 0)
                p++;
            if (c == 'A'&&flag1 == 1 && flag2 == 1)
                t++;
        }
        if (flag == -1)
            printf("NO\n");
        else if (count_p != 1 || count_t != 1)
            printf("NO\n");
        /*
		遗弃的写法
		else if (p==0&&t==0 && (p - 1) == 1)
         {
        	 printf("YES\n");
         }
         else if ((!(t - a < 0)) &&( p - 1) == 1)
         {
        	 printf("YES\n");
         }
		 */
/*
        else if (p - 1 == 1 && (t - a) == a)
            printf("YES\n");//接替遗弃的写法
        else if (p == 1 && flag1 == 1 && flag2 == 1&& a==t)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
*/
//1004 成绩排名
/*
typedef struct score
{
    char name[11];
    char id[11];
    int grade;
} score;
int main()
{
    int n;
    scanf("%d", &n);
    score *use;
    use = (score*)calloc(n, sizeof(score));
    score *max = NULL, *min = NULL;
    max= (score*)calloc(1, sizeof(score));
    min = (score*)calloc(1, sizeof(score));
    max->grade = -1;
    min->grade = 101;
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%s", use->name);
        scanf("%s", use->id);
        scanf("%d", &(use->grade));
        use++;
    }
    for (i = 0; i <n; i++)
    {
        use--;
        if (use->grade > max->grade)
        {
            max = use;
        }
        if (use->grade < min->grade)
        {
            min = use;
        }
    }

    printf("%s %s\n", max->name, max->id);
    printf("%s %s", min->name, min->id);
    //此处应该养成free习惯
    return 0;
}
*/

