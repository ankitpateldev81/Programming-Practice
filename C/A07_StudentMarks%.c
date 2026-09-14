#include<stdio.h>
void main()
{
    int c,cpp,csharp,java,python,tmark,per;
    printf("Enter mark of each subject=");
    scanf("%d %d %d %d %d",&c,&cpp,&csharp,&java,&python);
    tmark=c+cpp+csharp+java+python;
    per=tmark/5;
    printf("Total mark of student=%d\nPercentage of student=%d",tmark,per);
}