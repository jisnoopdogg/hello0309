#include <stdio.h>

int main(){
    int month, day; 		// 월, 일
    int day_count; 			// 1년 중 날 수 

    printf("날짜를 입력해주세요: ");
    scanf("%d %d", month, day);

    for(int i=0;i<month;i++){
        if(month == 2){
            day_count = day_count + 28;
        }else if(month == 1||3||5||7||8||10||12){
            day_count = day_count + 31;
        }else if(month == 4||6||9||11){
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