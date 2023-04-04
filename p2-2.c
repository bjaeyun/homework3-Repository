#include <stdio.h>
void print_one(int *ptr, int rows);
int main()
{
int one[] = {0, 1, 2, 3, 4};
printf("one = %p\n", one); //배열 one의 시작 주소 출력
printf("&one = %p\n", &one);//배열 one의 시작 주소의 주소 출력
printf("&one[0] = %p\n", &one[0]); //배열 one의 첫번째 원소의 주소 출력
printf("\n");
printf("----- [변재윤] [2022041046] -------\n");
printf(" print_one(&one[0], 5) \n");
printf("------------------------------------\n");
print_one(&one[0], 5); //함수 호출, 배열 one의 첫번쨰 원소의 주소와 원소 개수를 전달
printf("------------------------------------\n");
printf(" print_one(one, 5) \n");
printf("------------------------------------\n");
print_one(one, 5); //함수 호출, 배열 one의 이름과 원소 개수를 전달
return 0;
}
void print_one(int *ptr, int rows)//// 배열의 첫 번째 원소의 주소와 원소 개수를 전달받아 배열의 내용을 출력하는 함수
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n");
for (i = 0; i < rows; i++)
printf("%p \t %5d\n", ptr + i, *(ptr + i));
printf("\n");
}