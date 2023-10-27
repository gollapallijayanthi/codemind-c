#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    if(n%k==0)
    {
        if(n/k<=m) printf("YES");
        else  printf("NO");
    }
    if(n%k!=0)
    if(n/k<m&&n%k<=k)  printf("YES");
    else printf("NO");
}