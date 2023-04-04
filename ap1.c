#include <stdio.h>
#include <stdlib.h>
void main()
{
int list[5];
int *plist[5] = {NULL,}; //정수형 포인터 배열 선언, NULL로 초기화
plist[0] = (int *)malloc(sizeof(int)); // int형 포인터 배열의 첫 번째 요소에 동적 메모리 할당
list[0] = 1;
list[1] = 100;
*plist[0] = 200; //plist[0]이 가리키는 주소에 200 할당
printf("list[0] = %d\n", list[0]); //list[0]의 값
printf("&list[0] = %p\n", &list[0]); //list[0]의 주소
printf("list = %p\n", list); // list배열의 주소
printf("&list = %p\n", &list); //list배열의 시작 주소
printf("----- [변재윤] [2022041046] -------\n\n");
printf("list[1] = %d\n", list[1]); //list[1]의 값
printf("&list[1] = %p\n", &list[1]); //list[1]의 주소
printf("*(list+1) = %d\n", *(list + 1));//list[1]과 같은 갑인 *(list+1) 값
printf("list+1 = %p\n", list+1); //list[1]의 주소
printf("----- [변재윤] [2022041046] -------\n\n");
printf("*plist[0] = %d\n", *plist[0]); //plist[0]이 가리키는 값 값
printf("&plist[0] = %p\n", &plist[0]); //plist[0]의 주소
printf("&plist = %p\n", &plist); //plist배열의 시작 주소
printf("plist = %p\n", plist); //plist의 주소
printf("plist[0] = %p\n", plist[0]); //plist[0]의 값
printf("plist[1] = %p\n", plist[1]); //plist배열의 첫번째 요소인 plist[1], plist[]를 null로 선언해 null값이 나옴
printf("plist[2] = %p\n", plist[2]); //plist배열의 두번째 요소인 plist[2], plist[]를 null로 선언해 null값이 나옴
printf("plist[3] = %p\n", plist[3]); //plist배열의 세번째 요소인 plist[3], plist[]를 null로 선언해 null값이 나옴
printf("plist[4] = %p\n", plist[4]); //plist배열의 네번째 요소인 plist[4], plist[]를 null로 선언해 null값이 나옴
free(plist[0]); //동적 메모리 할당 해제 선언
}