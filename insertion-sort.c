//Insertion Sort

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

    //insertion sort
    for(int i=1; i< MAX; i++){

        int j = i;

        while( j>0 && array[j-1]>array[j]){
            swap(array, j-1,j);
            j--;
        }

    }


    //print array
    for(int i=0; i<MAX; i++){
        printf("%d ", array[i]);
    }
    

 return 0;
}