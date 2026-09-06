#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack{
    int size;
    int top;
    int* Score;
}stack;

void push(stack *s , int data){
    s->top++;
    s->Score[s->top]=data;
}

void scoresSort(int* scores , int n , stack* sortedstack){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(*(scores+j)>*(scores+j+1)){
                int temp = *(scores+j);
                *(scores+j)=*(scores+j+1);
                *(scores+j+1)=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        push(sortedstack,scores[i]);
    }
}


void calculateStatistics(stack* s , double* average , int* min_score , int* max_score){

    *min_score=s->Score[0];
    *max_score=s->Score[s->top];
    
    int sum = 0;
    for(int i=0;i<=s->top;i++){
        sum+=s->Score[i];
    }
    
    *average = (double)sum/(s->top+1);
}

void display(double average , int min , int max){

    
    printf("Average Score : %.2f\n",average);
    printf("Maximum Score :%d\n",max);
    printf("Minimum Score :%d\n",min);
}


int main(){

    int n;
    printf("Enter the number of students :");
    scanf("%d",&n);

    //making pointer to a stack

    stack* s = (stack*)malloc(sizeof(stack));
    s->top=-1; //same as (*s).top
    s->size=n;
    s->Score=(int*)malloc(s->size*sizeof(int));

    printf("Enter the scores for students");
    int* scores = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",(scores+i));
    }

    double average = 0; int min = 0,max =0;
    scoresSort(scores,n,s);
    calculateStatistics(s,&average,&min,&max);
    display(average,min,max);


    free(scores);
    
    free(s->Score);
    
    free(s);

    return 0;
}
