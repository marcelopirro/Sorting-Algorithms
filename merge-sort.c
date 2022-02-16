//Merge Sort

#include <stdio.h>

#define MAX 10


int main(){
    int array[MAX], aux[MAX];
    int imin, imid, imax;

    //scan array
    for(int i=0; i<MAX; i++){
        scanf("%d", &array[i]);
    }
    scanf("%d", &imid);

    imin=0;
    imax=MAX-1;

    //merge sort
    int i = imin, j= imid+1;

    for (int k = imin; k<= imax; k++){
        aux[k] = array [k];
    }

    for (int k = imin; k<= imax; k++){
        if(i>imid){
            array[k] = aux[j++];
        }
        else if (j>imax)
        {
            array[k]=aux[i++];
        }
        else if(aux[j] < aux[i]){
            array[k]=aux[j++];
        }
        else{
            array[k]=aux[i++];
        }
        
    }
    


    //print array
    for(int i=0; i<MAX; i++){
        printf("%d ", array[i]);
    }
    

 return 0;
}