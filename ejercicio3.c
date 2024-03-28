#include<stdio.h>
int square_root();
int main(){
    int x=0;
    printf("Ingrese un numero: ");
    scanf("%d", &x);
    printf("La raiz cuadrada de %d es %d\n", x, square_root(x));
    return 0;
}
int square_root(int x){
    if(x==0||x==1){
        return x;
    }
    int l=0, r=x/2, ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(mid<=x/mid){
            l=mid+1;
            ans=mid;
        }else{
            r=mid-1;
        }
    }
    return ans;
}