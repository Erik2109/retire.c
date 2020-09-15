#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char **argv) {

double start_Balance = atof(argv[1]);
double monthly_Contribution = atof(argv[2]);
double rate_Return = atof(argv[3]);
double rate_Inflation = atof(argv[4]);
double years_Retired = atof(argv[5]);

double months_Retired = years_Retired *12;
int month = years_Retired * 12;
double avg_Return = ((1 + rate_Return) / (1 + rate_Inflation) - 1) /12;
double interest = start_Balance + interest + monthly_Contribution

	if(avg_Return < 0 || avg_Return >1 || rate_Inflation < 0 || rate_Inflation > 1) {
		printf("Error: Enter Valid Input\n")
		return 0;
	}
	
	if((monthly_Contribution * 12) > 18500) {
		printf("Error: That exceeds the maximum amount.\n");
		return 0;
	}
	
	double total_Interest;
	
	printf(Month\tInterest\tBalance\n");
	
		for(int i = 1; i <+ months_Retired; i++) {
			rate_Return = (avg_Return *balance) / 12;
			balance = balance + rate_Return + monthly_Contribution;
			printf("%d\t$%0.2f\t\t$0.2f\n", i, rate_Return, balance);
			total_Interest = total_Interest + rate_Return;
		}
		printf("Total Interest Earned: $%0.2f\n",total_Interest);
		printf("Total Nest Egg: $%0.2\n",balance);
		return 0;
}
