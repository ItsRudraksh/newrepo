#include <stdio.h>
int main() {
    int n,res=0,rem,orig;
    printf("Enter a number: ");
    scanf("%d",&n);
    orig=n;
    while (orig>0)
    {
        rem=orig%10;
        res+=rem*rem*rem;
        orig/=10;
    }
    if (res==n)
    {
        printf("%d is armstrong",n);
    }
    else
    printf("%d is not armstrong",n);
    return 0;
}