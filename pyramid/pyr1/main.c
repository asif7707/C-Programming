#include<stdio.h>
#include<math.h>
main()
{
    int i,j,k,z,n;
    n=4,z=1;
    for(i=1;i<=n;i++){
        for(j=n-1;j>=i;j--){
            printf(" ");
        }
        for(k=1;k<=z;k++)
        {
            printf("%d",abs(k-i));
        }
        z+=2;
        printf("\n");
    }
    return 0;
}
