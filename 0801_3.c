#include <stdio.h>

int main()
{
    int score [10] = {100,69,95,92,70,88,71,85,76,90};
    int sum = 0, i ;
    int c60 = 0, c70 = 0, c80 = 0, c90 = 0, cetc = 0;
    float avg;
    
    for( i = 0; i <= 9; i++)
    {
        sum = sum + score[i];

        switch(score[i]/10)
        {
            case 10:
            case 9:
                c90 = c90 + 1;
                break;

            case 8:
                c80 = c80 + 1;
                break;

            case 7:
                c70 = c70 + 1;
                break;

            case 6:
                c60 = c60 + 1;
                break;
            default:
                cetc = cetc + 1;
                break;
        }

    } 
    
    avg = sum / 10.0;

    printf("sum : %d, average : %f\n", sum, avg);
    printf("60 under : %d\n", cetc);
    printf("60 over :  %d\n", c60);
    printf("70 over :  %d\n", c70);
    printf("80 over :  %d\n", c80);
    printf("90 over :  %d\n", c90);


}
