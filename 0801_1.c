#include <stdio.h>
#include <stdlib.h>

char *AddString(char *src1, char *src2);

int main()
{
    char data_1[80] = " I am a boy";
    char data_2[80] = " Who are you ";
    char *ret;

    printf("AddString()함수를 호출하기 전\n");
    printf("data_1의 문자열 : %s\n", data_1);
    printf("data_2의 문자열 : %s\n", data_2);

    ret = AddString(data_1, data_2);
    printf("\nAddString()함수를 호출한 후 \n");
    printf("data_1의 문자열 : %s\n", data_1);
    printf("data_2의 문자열 : %s\n", data_2);
    printf("ret의 문자열 : %s\n", ret);
}
char *AddString(char *src1, char *src2)
{
    char *ret, *ptr;
    ptr = (char *)malloc(sizeof(src1) + sizeof(src2) + 2);
    ret = ptr;

    while(*src1)
        *ptr++ = *src1++;

    while(*src2)
        *ptr++ = *src2++;

    *ptr = '\0';
    return ret;

}
