#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct score{
    int top;
    int size;
    int* marks;
}score;

void push(score* s , int data){
    s->top++;
    s->marks[s->top]=data;
}

void Scoresort(int* scores , int n , score* sortedstack){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(scores[j]>scores[j+1]){
                int temp = scores[j];
                scores[j]=scores[j+1];
                scores[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        push(sortedstack,scores[i]);
    }
}

void calculateStatistics(score* sortedstack , double* average , int* min_score , int* max_score ,int n){

        int sum = 0;

        *min_score = sortedstack->marks[0];
        *max_score = sortedstack->marks[sortedstack->top];

        for(int i=0;i<n;i++){
            sum+=sortedstack->marks[i];
        }

        *average = (double)sum/n;
    
    }

void display(double average , int min , int max){

    printf("Average Score : %f\n",average);
    printf("Maximum Score :%d\n",max);
    printf("Minimum Score :%d\n",min);
}    


   
    



        

int main(){

    score* s = (score*)malloc(sizeof(score));
    s->top=-1;
    s->size=100;
    s->marks = (int*)malloc(100*sizeof(int));

    int n;
    printf("Enter the number of students :");
    scanf("%d",&n);
    int *scores= (int*)malloc(n*sizeof(int));

    printf("Enter student marks");
    for(int i=0;i<n;i++){
        scanf("%d",(scores+i));
    }

    Scoresort(scores,n,s);

    printf("Sorted scores :");
    for(int i=0;i<n;i++){
        printf("%d ",s->marks[i]);
    }
    printf("\n");

    double average ; int max ; int min;

    calculateStatistics(s,&average,&min,&max,n);

    display(average,min,max);

    
       
    

    free(scores);
    free(s->marks);
    free(s);

}