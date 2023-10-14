#include <stdio.h>
#include <string.h>
struct employee
{
    char name[100];
    char bank[100];
    int amountinbank;
    float salary;
};
int main()
{
    struct employee e1;
    strcpy(e1.name, "vinay");
    strcpy(e1.bank, "canara");
    e1.amountinbank = 150000;
    e1.salary = 50000.00;

    printf(" \nNAME = %s", e1.name);
    printf(" \nBANK ACC NAME : %s", e1.bank);
    printf(" \nAMOUNT IN BANK : %d", e1.amountinbank);
    printf(" \nSALARY OF %s %f", e1.name, e1.salary);

    struct employee e2;
    strcpy(e2.name, "sanju");
    strcpy(e2.bank, "SBI");
    e2.amountinbank = 300000;
    e2.salary = 600000.00;

    printf(" \nNAME : %s", e2.name);
    printf(" \nBANK ACC NAME = %s", e2.bank);
    printf(" \nAMOUNT IN BANK : %d", e2.amountinbank);
    printf(" \nSALARY OF %s : %f", e2.name, e2.salary);

    struct employee e3;
    strcpy(e3.name, "YASH");
    strcpy(e3.bank, "PAYTM");
    e3.amountinbank = 3000000;
    e3.salary = 600000000.00;

    printf(" \nNAME = %s", e3.name);
    printf(" \nBANK ACC NAME : %s", e3.bank);
    printf(" \nAMOUNT IN BANK : %d", e3.amountinbank);
    printf(" \nSALARY OF %s %f", e3.name, e3.salary);

    return 0;
}