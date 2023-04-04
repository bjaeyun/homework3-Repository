#include <stdio.h>
struct student1 { //구조체 선언
char lastName;
int studentId;
char grade;
};
typedef struct { 
char lastName;
int studentId;
char grade;
} student2;
int main() {
struct student1 st1 = {'A', 100, 'A'}; //student1 타입의 변수 st1을 선언하고 초기화
printf("----- [변재윤] [2022041046] -------\n\n");
printf("st1.lastName = %c\n", st1.lastName); //st1의 lastName 값 출력
printf("st1.studentId = %d\n", st1.studentId); //st1의 studentId 값 출력
printf("st1.grade = %c\n", st1.grade); //st1의 grade 값 출력
student2 st2 = {'B', 200, 'B'}; // student2 타입의 변수 st2를 선언하고 초기화
printf("\nst2.lastName = %c\n", st2.lastName);//st2의 lastName 값 출력
printf("st2.studentId = %d\n", st2.studentId); //st2의 studentId 값 출력
printf("st2.grade = %c\n", st2.grade); //st2의 grade 값 출력
student2 st3;
st3 = st2; //st3에 st2값 대입
printf("\nst3.lastName = %c\n", st3.lastName);//st3의 lastName 값 출력 = st2의 lastName 값 출력
printf("st3.studentId = %d\n", st3.studentId);//st3의 studentId 값 출력 = st2의 studentId 값 출력
printf("st3.grade = %c\n", st3.grade);//st2의 grade 값 출력 = st2의 grade 값 출력
/* equality test */
if(st3. lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade) /* not working */
printf("equal\n");
else
printf("not equal\n");
return 0;
}
