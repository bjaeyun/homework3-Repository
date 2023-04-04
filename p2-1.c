#include <stdio.h>
#define MAX_SIZE 100
float sum1(float list[], int); //배열을 인수로 사용하고 합계를 반환
float sum2(float *list, int); //배열에 대한 포인터를 인수로 사용하고 합계를 반환
float sum3(int n, float *list); //배열의 크기와 배열의 첫 번째 요소에 대한 포인터를 인수로 사용하고 합계를 반환
float input[MAX_SIZE], answer;
int i;
void main(void)
{
for(i=0; i < MAX_SIZE; i++) // 배열 input[]을 0부터 MAX_SIZE - 1까지의 숫자로 초기화
input[i] = i;
/* for checking call by reference */
printf("--------------------------------------\n");
printf(" sum1(input, MAX_SIZE) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input);
answer = sum1(input, MAX_SIZE);
printf("The sum is: %f\n\n", answer);
printf("--------------------------------------\n");
printf(" sum2(input, MAX_SIZE) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input);
answer = sum2(input, MAX_SIZE);
printf("The sum is: %f\n\n", answer);
printf("--------------------------------------\n");
printf(" sum3(MAX_SIZE, input) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input);
answer = sum3(MAX_SIZE, input);
printf("The sum is: %f\n\n", answer);
}
float sum1(float list[], int n) {
printf("list\t= %p\n", list);//list의 주소
printf("&list\t= %p\n\n", &list);//list의 시작 주소
int i;
float tempsum = 0;
for(i = 0;i < n;i++)
tempsum += list[i];
return tempsum;
}
float sum2(float *list, int n) {
printf("list\t= %p\n", list);//list의 주소
printf("&list\t= %p\n\n", &list);//list의 시작 주소
int i;
float tempsum = 0;
for(i = 0;i < n; i++)
tempsum += *(list +i);
return tempsum;
}
/* stack variable reuse test */
float sum3(int n, float *list) {
printf("list\t= %p\n", list);//list의 주소
printf("&list\t= %p\n\n", &list);//list의 시작 주소
int i;
float tempsum = 0;
for(i = 0; i < n; i++)
tempsum += *(list +i);
return tempsum;
}