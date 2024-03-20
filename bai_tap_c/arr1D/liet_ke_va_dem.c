#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int val;
    int fre;
}number;
int check(int n){
    while(n >= 10){
        int r = n%10;
        n /= 10;
        if(r < n%10) return 0;
    }
    return 1;
}
int find(number a[], int n, int x){
    for(int i = 0; i < n; i++){
        if(a[i].val == x){
            return i;
        }
    }
    return -1;
}
int cmp(const void *a, const void *b){
    number *numA = (number*) a;
    number *numB = (number*) b;
    if(numA->fre < numB->fre) return 1;
    return -1;
}
void selectionSort(number a[], int n){
    for(int i = 0; i < n-1; i++){
        int m = i;
        for(int j = i +1; j < n; j++){
            if(a[j].fre > a[m].fre) m = j;
        }
        if(m!=i){
            number tmp = a[i];
            a[i] = a[m];
            a[m] = tmp;
        }
    }
}
int main(){
    number a[1000001];
    int n = 0;
    int x;
    while((scanf("%d",&x)) != -1){
        if(check(x)){
            int idx = find(a,n,x);
            if(idx != -1){   
                a[idx].fre += 1;
            }
            else{
                a[n].val = x;
                a[n++].fre = 1;
            }
        }
    }
    qsort(a,n,sizeof(number),cmp);
    // selectionSort(a,n);
    for(int i = 0; i < n; i++) printf("%d %d\n",a[i].val,a[i].fre);
    return 0;
}