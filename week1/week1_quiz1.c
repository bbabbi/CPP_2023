#include <stdio.h>

int main(void){
    char name[20];
    int stu_num, date;
    char say_hello[20];
    
    scanf("%s %d %d %s", name, &stu_num, &date, say_hello);
    
    for(int i = 0; i < 11; i++){
        printf("%s %d %d %s\n", name, stu_num, date, say_hello);
    }
    
    return 0;
}
