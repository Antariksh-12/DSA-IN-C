#include <stdio.h>
#include <string.h>

int main(){

    typedef struct date{
        int day;
        int month;
        int year;
    }date;

  date arr[2];

    for(int i=0;i<2;i++){
        scanf("%d",&arr[i].day);
        scanf("%d",&arr[i].month);
        scanf("%d",&arr[i].year);
    }    
    

    if((arr[0].day==arr[1].day) && (arr[1].month==arr[0].month) && (arr[0].year == arr[1].year))
{
    printf("Equal");
}else{
    printf("Unequal");
}


    return 0;
}
        