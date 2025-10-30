//
//  main.c
//  09
//
//  Created by 한서윤 on 10/30/25.
//

#include <stdio.h>

int main(void) {
    int i;
    int grade[5]; //5명의 학생에 대한 시험성적 배열 선언
    
    grade[0] = 10;
    grade[1] = 20;
    grade[2] = 30;
    grade[3] = 40;
    grade[4] = 50;
    for(i=0;i<5;i++)
    {
        printf("grade[%d] = %d\n", i, grade[i]); //d대신 i넣어도 동일
    }
    return 0;
}
