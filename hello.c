#include <stdio.h>

int main(){
    int m, day; 		// 월, 일
    int day_count=0; 			// 1년 중 날 수 

    printf("날짜를 입력해주세요: ");
    scanf("%d %d", &m, &day);

    for(int i=1;i<m;i++){
        if(i == 2){
            day_count = day_count + 28;
        }else if(i == 1||i==3||i==5||i==7||i==8||i==10||i==12){
            day_count = day_count + 31;
        }else if(i == 4||i==6||i==9||i==11){
            day_count = day_count + 30;
        }else{
            continue;
        }
    }

    for(int i=0;i<day;i++){
        day_count++;
    }

    printf("%d",day_count);

    return 0;
}