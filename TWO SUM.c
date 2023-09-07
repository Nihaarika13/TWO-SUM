#include<stdio.h>
#include<stdlib.h>
struct array
{
    int s[100];
    int size;
};
void reading(struct array *a)
{
    int i,j;
    printf("enter the size of the array");
    scanf("%d",&a->size);
    printf("enter the elements");
    for(i=0;i<a->size;i++)
    {
        scanf("%d",&a->s[i]);
    }
    for(i=0;i<a->size;i++)
    {
        printf("%d\t",a->s[i]);
    }
}
void add(struct array *a)
{
    int target,i,j;
    printf("enter the target");
    scanf("%d",&target);
    for(i=0;i<a->size;i++)
    {
        for(j=i+1;j<a->size;j++)
        {
            if(a->s[i]==a->s[j])
            break;
            if(target==a->s[i]+a->s[j])
            {
                printf("[%d,%d]",i,j);
            }
        }
    }
}
int main()
{
    struct array *a;
    a=(struct array *)malloc(sizeof(struct array));
    int i,j,target,n;
    reading(a);
    for(i=0;i<a->size;i++)
    {
        for(j=i+1;j<a->size;j++)
        {
            if (a->s[i]==a->s[j])
            {
                printf("the number %d is repeated",a->s[i]);
            }
        }
    }
    add(a);
    return 0;
}
