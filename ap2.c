#include <stdio.h>
#include <stdlib.h>
void main()
{
int list[5]; // 크기가 5인 int형 배열 선언
int *plist[5]; // int형 포인터를 담은 배열 선언
list[0] = 10; // list 배열의 첫 번째 요소에 10을 할당
list[1] = 11; // list 배열의 두 번째 요소에 11을 할당
plist[0] = (int*)malloc(sizeof(int)); // int형 포인터 배열의 첫 번째 요소에 동적 메모리 할당
printf("----- [변재윤] [2022041046] -------\n\n");
printf("list[0] \t= %d\n", list[0]); //list[0]의 값
printf("list \t\t= %p\n", list); //list의 주소
printf("&list[0] \t= %p\n", &list[0]); //list[0]의 주소
printf("list + 0 \t= %p\n", list+0); //list첫번째 배열에 0을 더한 것이니까 list[0]의 주소
printf("list + 1 \t= %p\n", list+1); //list첫번째 배열에 1을 더한 것이니까 list[1]의 주소
printf("list + 2 \t= %p\n", list+2); //list첫번째 배열에 2을 더한 것이니까 list[2]의 주소
printf("list + 3 \t= %p\n", list+3); //list첫번째 배열에 3을 더한 것이니까 list[3]의 주소
printf("list + 4 \t= %p\n", list+4); //list첫번째 배열에 4을 더한 것이니까 list[4]의 주소
printf("&list[4] \t= %p\n", &list[4]); //list[4]의 주소
free(plist[0]); //해제 선언
}