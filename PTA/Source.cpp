#define _CRT_SECURE_NO_WARNINGS//�ύʱȥ��
//ͷ�ļ���
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<ctype.h>
#include<stdio.h>
//pta basic ����ϰ��
//����д������������������
//ʹ��c����Ϊ��
//1001 �����˲�������(3n+1)����
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

//1002 д�������
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

//1003 ��Ҫͨ����

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    }


