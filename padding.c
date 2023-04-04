#include <stdio.h>
struct student {
char lastName[13]; /* 13 bytes */
int studentId; /* 4 bytes */
short grade; /* 2 bytes */
};
int main()
{
struct student pst;// student 구조체를 이용하여 pst 변수 선언
printf("----- [변재윤] [2022041046] -------\n\n");
printf("size of student = %ld\n", sizeof(struct student));// 구조체 student의 크기 출력
printf("size of int = %ld\n", sizeof(int));// int 타입의 크기 출력
printf("size of short = %ld\n", sizeof(short));// short 타입의 크기 출력
return 0;
}