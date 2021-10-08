#include <stdio.h>

int binaryS(int ar[],int first,int last,int find){
    if(last>=first){
    int mid = (first+last)/2;
    if(ar[mid]==find){
        return 1;
    }else if(find>ar[mid]){
        first = mid+1;
    }else{
        last = mid-1;
    }
    return(binaryS(ar,first,last,find));
    }
    else{
        return 0;
    }

}


int main(int argc, char const *argv[])
{
    int arr[] = {1,6,12,23,35,56};
    int find = 2;
    int first = 0, last = (sizeof(arr)/sizeof(int))-1;
      
    printf("\n%d\n",binaryS(arr,first,last,find));
}
