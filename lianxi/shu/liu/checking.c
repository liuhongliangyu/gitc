#include <stdio.h>

int main(int argc, char const *argv[]) {//这是个啥？？？没看懂。。。
  int cmd;
  float balance = 0.0, credit, debit;

  printf("***ACME checkbook-balancing program ***\n");
  printf("Commands: 0 = cleat, 1 = credit, 2 = debit, 3= balance, 4= exit\n \n");
  for (;;){
    printf("Enter command: ");
    scanf("%d", &cmd);
    switch (cmd){
      case 0 : balance = 0.0;break;
      case 1 :
        printf("ENter amount of credit: ");
        scanf("%f", &credit);
        balance += credit;
        break;
      case 2 :
        printf("Enter amount of debit: ");
        scanf("%f", &debit);
        balance -= debit;
        break;
      case 3 :
        printf("Commands: 0 = clear, 1 = credit, 2 = debit, 3 = balance, 4 = exit\n\n");
        break;
    }
  }
  return 0;
}
