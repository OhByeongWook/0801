#include <stdio.h>
int main()
{
    int i = 0;
    char buf[13];

    printf("소문자 12개를 입력해 보세요.\n");
    printf("입력 : ");

    while( i < 12 )
    {
        scanf("%c", &buf[i]);
        
        i++;
    }
    printf("문자를 입력하셨군요. 대문자로 변환합니다.\n");

    for(i = 0; i < 12; i++)
        printf("%c", buf[i] - ('a' - 'A'));
}