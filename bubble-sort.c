//BubbleSort

#include <stdio.h>

#define MAX 10

//swap function
void swap(int ARRAY[MAX], int OLD,int NEW)
{
    int aux;
    aux=ARRAY[OLD];
    ARRAY[OLD]=ARRAY[NEW];
    ARRAY[NEW]=aux;
}

int main(){
    int array[MAX], swapped, k=0;

    //scan array
    for(int i=0; i<MAX; i++){
        scanf("%d", &array[i]);
    }

    //bubble sort
    do{
        swapped=0;
        for(int j=MAX-1; j>k; j--){
            if(array[j-1]>array[j]){
                swap(array, j-1, j);
                swapped = 1;
            }
        }
        k++;
    }while(swapped && k< MAX);


    //print array
    for(int i=0; i<MAX; i++){
        printf("%d ", array[i]);
    }
    

 return 0;
}