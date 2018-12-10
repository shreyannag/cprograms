#include<stdio.h>
struct report
{
    char  name[100];
    int first_term;
    int second_term;
    int third_term;
    int fourth_term;
} progress[20];
int main()
{
    int i;
    for(i=0;i<20;i++){
        printf("\nEnter Student's Name: ");
        scanf("%s",progress[i].name);
        printf("\nEnter First Term Marks: ");
        scanf("%d",&progress[i].first_term);
        printf("\nEnter Second Term Marks: ");
        scanf("%d",&progress[i].second_term);
        printf("\nEnter Third Term Marks: ");
        scanf("%d",&progress[i].third_term);
        printf("\nEnter Fourth Term Marks: ");
        scanf("%d",&progress[i].fourth_term);

    }
    printf("\nProgress Report Of Class VIII\n");
    printf("Name\tTerm 1\tTerm 2\tTerm 3\tTerm 4\n");
    for(i=0;i<20;i++){
        printf("%s\t%d\t%d\t%d\t%d\n",progress[i].name,progress[i].first_term,progress[i].second_term,progress[i].third_term,progress[i].fourth_term);
    }
    return 0;
}
