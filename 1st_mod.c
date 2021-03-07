#include <stdio.h>


long long exgcd(long long,long long,long long*,long long*);
int main(){
        long long a,m;
        scanf("%lld%lld",&a,&m); // going to find that ( a * x )%m == 1, x == ? i.e., ax + my = 1, x == ?
        long long x=1;
        long long y=1;
        exgcd(a,m,&x,&y);
        if(x<0)
            x+=m;
        printf("%lld",x);

return 0;
}

long long exgcd(long long a,long long b,long long *x,long long *y){ //return gcd(a,b) and modify x y so that ax + by = gcd(a,b)
    if ( b == 0){
        *x = 1, *y = 0;
        return a;
    }
    else{
        exgcd( b, a%b, x, y);
        long long tmp = *x;
        *x = *y;
        *y = tmp - (a/b)*(*y);
    }

}
