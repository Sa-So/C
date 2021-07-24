#include <stdio.h>
int main() {
    char a[50][20];
    int n=3;
    for(int i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    /*
    for(int i=0;i<n;i++)
    {
        printf("%s",a[i]);
    }
    
    printf("\n");

    */
    
    char *p;
    int l=1;
    for(p=&a[0][0];p<=&a[2][10];)
    {
        if(*p=='\0'){
            printf("\n");
            p=&a[l][0];
            l++;
            continue;
        }
        printf("%c",*p);
        p++;
    }
}
