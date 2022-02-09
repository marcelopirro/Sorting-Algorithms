//Selection Sort

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
    int array[MAX];

    //scan array
    for(int i=0; i<MAX; i++){
        scanf("%d", &array[i]);
    }

    //selection sort
    for(int i=0; i< MAX-1; i++){

        int min = i;

        for (int j=i+1; j<MAX; j++){
            if(array[j] < array[min]){
                min = j;
            }
        }

        swap(array, i, min);
    }


    //print array
    for(int i=0; i<MAX; i++){
        printf("%d ", array[i]);
    }
    

 return 0;
}