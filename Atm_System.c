#include<conio.h>
#include<stdio.h>
#include<string.h>
	int balance = 0;
	char transaction ='y';
	int pin,i,fast,fast_choice,choice,withdraw,deposit;
int main(){
	while(pin != 7788){
		printf("PLEASE ENTER YOUR PIN\n");
		scanf("%d",&pin);
		if(pin!=7788)
		printf("INVALID PIN!!\n");
	}
	do{
//		for a line
		for(int line = 0 ; line<=40;line++){
			printf("_");
		}
		printf("\nWelcome to ATM Service\n");
		printf("                                1: Check Balance\n");
		printf("                                2: Fast Cash\n");
		printf("                                3: Withdraw Cash\n");
		printf("                                4: Deposit Cash\n");
		printf("                                5: Quit\n");
		printf("\n");
		printf("Enter your choice:");
		scanf("%d", &choice);
		switch (choice){
			case 1:
				printf("YOUR BALANCE IS  Rs: %d\n",balance);
				break;
			case 2:
				printf("FAST CASH MENU\n");
				printf("1:500\t");
				printf("2:1000\n");
				printf("3:5000\t");
				printf("4: 10000\n");
				printf("5:20000\t");
				printf("6:25000\n");
				printf("ENTER YOUR CHOICE\n");
				scanf("%d",&fast_choice);
				if(fast_choice == 1){
					fast = 500;
//					
 				if(fast>balance){
					printf("INSUFFICIENT BALANCE\n");
				}else{
					balance = balance - fast;
					printf("Collect Your Amount Rs:%d\n",fast);
					printf("REMAINING BALANCE IS Rs:%d\n",balance);
				}
					
				}else if(fast_choice == 2){
					fast = 1000;
//					
 				if(fast>balance){
					printf("INSUFFICIENT BALANCE\n");
				}else{
					balance = balance - fast;
					printf("Collect Your Amount Rs:%d\n",fast);
					printf("REMAINING BALANCE IS Rs:%d\n",balance);
				}
			}else if(fast_choice == 3){
					fast = 5000;
//					
 				if(fast>balance){
					printf("INSUFFICIENT BALANCE\n");
				}else{
					balance = balance - fast;
					printf("Collect Your Amount Rs:%d\n",fast);
					printf("REMAINING BALANCE IS Rs:%d\n",balance);
				}
			}else if(fast_choice == 4){
					fast = 10000;
//					
 				if(fast>balance){
					printf("INSUFFICIENT BALANCE\n");
				}else{
					balance = balance - fast;
					printf("Collect Your Amount Rs:%d\n",fast);
					printf("REMAINING BALANCE IS Rs:%d\n",balance);
				}
				}else if(fast_choice == 5){
					fast = 20000;
//					
 				if(fast>balance){
					printf("INSUFFICIENT BALANCE\n");
				}else{
					balance = balance - fast;
					printf("Collect Your Amount Rs:%d\n",fast);
					printf("REMAINING BALANCE IS Rs:%d\n",balance);
				}
			}else if(fast_choice == 6){
					fast = 25000;
//					
 				if(fast>balance){
					printf("INSUFFICIENT BALANCE\n");
				}else{
					balance = balance - fast;
					printf("Collect Your Amount Rs:%d\n",fast); 
					printf("REMAINING BALANCE IS Rs:%d\n",balance);
				}
		}
				break;
			case 3 :
				printf("ENTER AMOUNT YOU WANT TO WITHDRAW (MULTIPLES OF 500,1000)\n");
				scanf("%d",&withdraw);
				if(withdraw>balance){
					printf("INSUFFICIENT BALANCE\n");
				}else if(withdraw%500!=0){
					printf("ENTER AMOUNT IN MULTIPLES OF 500,1000\n");
				}else{
					balance = balance - withdraw;
					printf("WITHDRAWN Rs:%d\n",withdraw);
					printf("REMAINING BALANCE IS Rs:%d\n",balance);
				}
				break;
			case 4:
				printf("ENTER THE AMOUNT YOU WANT TO DEPOSIT\n");
				scanf("%d",&deposit);
				balance = balance + deposit;
				printf("TOTAL BALANCE IS Rs:%d",balance);
				break;
			case 5:
				printf("THANK YOU FOR USING\n");
				break;
				default:
			printf("\n INVALID CHOICE");
		}
		printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
                    i = 1;
	} while (!i);
	printf("\n\n THANKS FOR USING OUT ATM SERVICE");
}
