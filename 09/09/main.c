//
//  main.c
//  09
//
//  Created by 한서윤 on 10/30/25.
//

#include <stdio.h>
#define SIZE 5 //전처리. size 모두 5로 바꿔줌. 매크로

int main(void) {
    int i,average;
    int sum;
    int grade[SIZE];
    
    sum = 0; //누적해서 연산할 땐 무조건 초기화해주기
    for(i=0;i<SIZE;i++)
    {
        printf("학생 성적을 입력하세요: ");
        scanf("%d", &grade[i]); //scanf에는 항상 &붙이기
        sum += grade[i];
    }
    
    average = sum/SIZE;
    printf("성적 평균: %d\n",average);
    return 0;
}
