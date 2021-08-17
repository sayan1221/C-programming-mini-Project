#include<stdio.h>
#include<stdlib.h>
int main(){
	char a1[30],a2[30],a3[30],a4[30],a5[30],a6[30],a7[30],a8[30],a9[30],a10[30],a11[30];
	int r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0,r10=0,r11=0;
	int b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,b10=0,b11=0;
	int ch=0;
	printf("\t<----- WELCOME TO CRICKET RUN COUNT TABLE ------>\n");
	printf("Enter your 11 team member name :");
/*	scanf("%c",&a1);
	scanf("%c",&a2);
	scanf("%c",&a3);
	scanf("%c",&a4);
	scanf("%c",&a5);
	scanf("%c",&a7);
	scanf("%c",&a8);
	scanf("%c",&a9);
	scanf("%c",&a10);
	scanf("%c",&a11);*/
	gets(a1);
	gets(a2);
	gets(a3);
	gets(a4);
	gets(a5);
	gets(a6);
	gets(a7);
	gets(a8);
	gets(a9);
	gets(a10);
	gets(a11);
	
	while(ch!=13){
		printf("\n\n<-<- PRESS NUMBER FOR BATTING AND BOWLING RUN COUNT ->->\n");
		printf("1- %s\t",a1);
		printf("2- %s\t",a2);
		printf("3- %s\t",a3);
		printf("4- %s\t",a4);
		printf("5- %s\t",a5);
		printf("6- %s\t",a6);
		printf("7- %s\n",a7);
		printf("8- %s\t",a8);
		printf("9- %s\t",a9);
		printf("10- %s\t",a10);
		printf("11- %s\t",a11);
		printf("12- Show full score board\t ");
		printf("13 - exit\n");
		scanf("%d",&ch);
switch(ch){
	case 1:{
		int t;
			int a=0,z1=0,z2=0;
		printf("1- BOWLER  or  2- BATSMAN --RUN count  '0'for BACK :\n");
		scanf("%d",&a);
			if(a==1{
				while(1){
					printf("Enter run :");
					scanf("%d",&z1);
					b1=b1+z1;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s given run : %d\n",a1,b1);
				break;
			}
			if(a==2){
				while(1){
					printf("Enter run :");
					scanf("%d",&z2);
					r1=r1+z2;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s get run : %d\n",a1,r1);
				break;
			}
			else {
				break;
			}
		break;
	}
	case 2:{
		int t;
			int a=0,z1=0,z2=0;
		printf("1- BOWLER  or  2- BATSMAN --RUN count  '0'for BACK :\n");
		scanf("%d",&a);
			if(a==1){
				while(1){
					printf("Enter run :");
					scanf("%d",&z1);
					b2=b2+z1;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s given run : %d\n",a2,b2);
				break;
			}
			if(a==2){
				while(1){
					printf("Enter run :");
					scanf("%d",&z2);
					r2=r2+z2;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s get run : %d\n",a2,r2);
				break;
			}
			else {
				break;
			}
		break;
	}	
	case 3:{
		int t;
			int a=0,z1=0,z2=0;
		printf("1- BOWLER  or  2- BATSMAN --RUN count  '0'for BACK :\n");
		scanf("%d",&a);
			if(a==1){
				while(1){
					printf("Enter run :");
					scanf("%d",&z1);
					b3=b3+z1;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s given run : %d\n",a3,b3);
				break;
			}
			if(a==2){
				while(1){
					printf("Enter run :");
					scanf("%d",&z2);
					r3=r3+z2;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s get run : %d\n",a3,r3);
				break;
			}
			else {
				break;
			}
		break;
	}
	case 4 :{
		int t;
			int a=0,z1=0,z2=0;
		printf("1- BOWLER  or  2- BATSMAN --RUN count  '0'for BACK :\n");
		scanf("%d",&a);
			if(a==1){
				while(1){
					printf("Enter run :");
					scanf("%d",&z1);
					b4=b4+z1;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s given run : %d \n",a4,b4);
				break;
			}
			if(a==2){
				while(1){
					printf("Enter run :");
					scanf("%d",&z2);
					r4=r4+z2;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s get run : %d\n",a4,r4);
				break;
			}
			else {
				break;
			}
		break;
	}
	case 5:{
		int t;
			int a=0,z1=0,z2=0;
		printf("1- BOWLER  or  2- BATSMAN --RUN count  '0'for BACK :\n");
		scanf("%d",&a);
			if(a==1){
				while(1){
					printf("Enter run :");
					scanf("%d",&z1);
					b5=b5+z1;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s given run : %d\n",a5,b5);
				break;
			}
			if(a==2){
				while(1){
					printf("Enter run :");
					scanf("%d",&z2);
					r5=r5+z2;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s get run : %d\n",a5,r5);
				break;
			}
			else {
				break;
			}
		break;
	}
	case 6:{
		int t;
			int a=0,z1=0,z2=0;
		printf("1- BOWLER  or  2- BATSMAN --RUN count  '0'for BACK :\n");
		scanf("%d",&a);
			if(a==1){
				while(1){
					printf("Enter run :");
					scanf("%d",&z1);
					b6=b6+z1;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s given run : %d \n",a6,b6);
				break;
			}
			if(a==2){
				while(1){
					printf("Enter run :");
					scanf("%d",&z2);
					r6=r6+z2;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s get run : %d\n",a6,r6);
				break;
			}
			else {
				break;
			}
		break;
	}
	case 7:{
		int t;
			int a=0,z1=0,z2=0;
		printf("1- BOWLER  or  2- BATSMAN --RUN count  '0'for BACK :\n");
		scanf("%d",&a);
			if(a==1){
				while(1){
					printf("Enter run :");
					scanf("%d",&z1);
					b7=b7+z1;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s given run : %d",a7,b7);
				break;
			}
			if(a==2){
				while(1){
					printf("Enter run :");
					scanf("%d",&z2);
					r7=r7+z2;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s get run : %d\n",a7,r7);
				break;
			}
			else {
				break;
			}
		break;
	}
	case 8:{
		int t;
			int a=0,z1=0,z2=0;
		printf("1- BOWLER  or  2- BATSMAN --RUN count  '0'for BACK :\n");
		scanf("%d",&a);
			if(a==1){
				while(1){
					printf("Enter run :");
					scanf("%d",&z1);
					b8=b8+z1;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s given run : %d\n",a8,b8);
				break;
			}
			if(a==2){
				while(1){
					printf("Enter run :");
					scanf("%d",&z2);
					r8=r8+z2;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s get run : %d\n",a8,r8);
				break;
			}
			else {
				break;
			}
		break;
	}
	case 9:{
		int t;
			int a=0,z1=0,z2=0;
		printf("1- BOWLER  or  2- BATSMAN --RUN count  '0'for BACK :\n");
		scanf("%d",&a);
			if(a==1){
				while(1){
					printf("Enter run :");
					scanf("%d",&z1);
					b9=b9+z1;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s given run : %d\n",a9,b9);
				break;
			}
			if(a==2){
				while(1){
					printf("Enter run :");
					scanf("%d",&z2);
					r9=r9+z2;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s get run : %d \n",a9,r9);
				break;
			}
			else {
				break;
			}
		break;
	}
	case 10:{
		int t;
			int a=0,z1=0,z2=0;
		printf("1- BOWLER  or  2- BATSMAN --RUN count  '0'for BACK :\n");
		scanf("%d",&a);
			if(a==1){
				while(1){
					printf("Enter run :");
					scanf("%d",&z1);
					b10=b10+z1;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s given run : %d\n",a10,b10);
				break;
			}
			if(a==2){
				while(1){
					printf("Enter run :");
					scanf("%d",&z2);
					r10=r10+z2;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s get run : %d \n",a10,r10);
				break;
			}
			else {
				break;
			}
		break;
	}
	case 11:{
		int t;
			int a=0,z1=0,z2=0;
		printf("1- BOWLER  or  2- BATSMAN --RUN count  '0'for BACK :\n");
		scanf("%d",&a);
			if(a==1){
				while(1){
					printf("Enter run :");
					scanf("%d",&z1);
					b11=b11+z1;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s given run : %d\n",a11,b11);
				break;
			}
			if(a==2){
				while(1){
					printf("Enter run :");
					scanf("%d",&z2);
					r11=r11+z2;
					printf("'0' for back or '+' for continue:\n");
					scanf("%d",&t);
					if(t==0){
						break ;
					}
				}
				printf("%s get run : %d \n",a11,r11);
				break;
			}
			else {
				break;
			}
		break;
	}
	case 12:{
		printf("<-<-<- WELCOME TO FULL SCORE BOARD ->->-> \n");
		printf("%s RUN IS -- BATTING : %d\t BOWLING : %d \n",a1,r1,b1);
		printf("%s RUN IS -- BATTING : %d\t BOWLING : %d \n",a2,r2,b2);
		printf("%s RUN IS -- BATTING : %d\t BOWLING : %d \n",a3,r3,b3);
		printf("%s RUN IS -- BATTING : %d\t BOWLING : %d \n",a4,r4,b4);
		printf("%s RUN IS -- BATTING : %d\t BOWLING : %d \n",a5,r5,b5);
		printf("%s RUN IS -- BATTING : %d\t BOWLING : %d \n",a6,r6,b6);
		printf("%s RUN IS -- BATTING : %d\t BOWLING : %d \n",a7,r7,b7);
		printf("%s RUN IS -- BATTING : %d\t BOWLING : %d \n",a8,r8,b8);
		printf("%s RUN IS -- BATTING : %d\t BOWLING : %d \n",a9,r9,b9);
		printf("%s RUN IS -- BATTING : %d\t BOWLING : %d \n",a10,r10,b10);
		printf("%s RUN IS -- BATTING : %d\t BOWLING : %d \n",a11,r11,b11);
		printf("-----------------------------------------------------------\n");
		int r=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;
		int b=b1+b2+b3+b4+b5+b6+b7+b8+b9+b10+b11;
		printf("TOTAL RUN -- BATTING : %d \t BOWLING : %d\n",r,b);
		break;
	}
	case 13:{
		printf("THANKS FOR USING ME , HAVE A GOOD DAY , BYE BYE");
		exit(0);
		break;
	}
	default :{
		printf("Enter valid number \n");
	}
}//switch 
}//loop
return 0;	
}


