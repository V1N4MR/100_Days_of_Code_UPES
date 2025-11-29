/* Store employee data in a binary file using fwrite() 
   and read using fread(). */

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e[3];
    FILE *fp;
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter name for employee %d: ", i + 1);
        scanf("%s", e[i].name);

        printf("Enter ID: ");
        scanf("%d", &e[i].id);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);

        printf("\n");
    }

    fp = fopen("employees.dat", "wb");
    fwrite(e, sizeof(struct Employee), 3, fp);
    fclose(fp);

    struct Employee readEmp[3];

    fp = fopen("employees.dat", "rb");
    fread(readEmp, sizeof(struct Employee), 3, fp);
    fclose(fp);

    printf("Employee Details from File:\n");

    for (i = 0; i < 3; i++) {
        printf("Name: %s\n", readEmp[i].name);
        printf("ID: %d\n", readEmp[i].id);
        printf("Salary: %.2f\n\n", readEmp[i].salary);
    }

    return 0;
}