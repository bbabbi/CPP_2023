/*
2021112037 문채영
week1_quiz2.c
심화프로그래밍 1주차 실습과제 1번
*/

#include <stdio.h>

int main(void){
    char name[20]; // 이름을 입력받을 변수
    int stu_num, date; // stu_num는 학번을 date는 날짜
    char say_hello[20]; // say_hello는 인사말
    
    // 각각의 변수에 사용자로부터 입력받은 값을 저장한다.
    scanf("%s %d %d %s", name, &stu_num, &date, say_hello);
    
    // 출력문을 10회 반복한다.
    for(int i = 0; i < 10; i++){
        printf("%s %d %d %s\n", name, stu_num, date, say_hello);
    }
    
    return 0;
}