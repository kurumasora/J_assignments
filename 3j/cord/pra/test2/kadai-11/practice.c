#include<stdio.h>

double findmax(int size, double *max, double Max[] ){
    *max = Max[0];
    for(int i = 0; i < size; i++){
        if(*max < Max[i]){
            *max = Max[i];
        }
    }
    return *max;
}

double findmin(int size, double *min, double Min[]){
    *min = Min[0];
    for(int i = 0; i < size; i++){
        if(*min > *(Min+i)){
            *min = *(Min+i);
        }
    }
    return *min;
}
double findsum(int size, double *sum, double* Sum){
    *sum = 0;
    for(int i = 0; i < size; i++){
        *sum += *(Sum + i);
    }
    return *sum;
}

double findave(int size, double *ave, double *Ave){
    *ave = 0;
    for(int i = 0; i < size; i++){
        *ave += Ave[i];
    }
    return *ave/size;
}


int main(void){
    int n = 0;
    printf("Enter a number: "); scanf("%d", &n);
    double x[n];
    for(int i = 0; i < n; i++){
        printf("Enter %d numbers: ", n); scanf("%lf", &x[i]);
    }
    double max,min,sum,ave;

    max = findmax(n, &max, x);
    min = findmin(n, &min, x);
    sum = findsum(n, &sum, x);
    ave = findave(n, &ave, x);

    printf("MAX is %lf\n",max);
    printf("MIN is %lf\n",min);
    printf("SUM is %lf\n",sum);
    printf("AVE is %lf\n",ave);
    

    
  
}