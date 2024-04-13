#include <stdio.h>
#include <stdlib.h>

 struct employee{
    char *names[10];
    int salary;
    int bonus;
    int deduction;
};
int main()
{
    struct employee employees[3];
    for (int i=0 ; i<3 ; i++ )
    {
        printf("Please enter the name: ");
        scanf("%s",&employees[i]);
        printf("Please Enter his informations:\n");
        printf("Salary= ");
        scanf("%d", &employees[i].salary);
        printf("Bonus= ");
        scanf("%d", &employees[i].bonus);
        printf("Deduction= ");
        scanf("%d", &employees[i].deduction);
    }
    int total_salary=0;
    for (int j=0 ; j<3 ; j++)
    {
        total_salary = employees[j].salary + employees[j].bonus - employees[j].deduction;
        printf("The total salary is: %d\n",total_salary);
    }
    return 0;
}
