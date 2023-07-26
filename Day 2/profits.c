#include  <stdio.h>

int main(){
    int share_calc(int ns, int pp, int pc, int sp, int sc);
    int num_s, share_p, sale_c, purchase_p, purchase_c, verdict;

    printf("Please enter the Number of shares: ");
    scanf("%d", &num_s);

    printf("Please enter the Sale price per Share: ");
    scanf("%d", &share_p);

    printf("Please enter the Sale Commission: ");
    scanf("%d",&sale_c);

    printf("Please enter the Purchase Price per Share: ");
    scanf("%d", &purchase_p);

    printf("Please enter the purchase commission: ");
    scanf("%d", &purchase_c);

    verdict = share_calc(num_s,purchase_p,purchase_c,share_p, sale_c);
    
    if(verdict< 0){
        printf("You have made a loss.");
        printf("Your loss is %d\n", (share_calc(num_s,purchase_p,purchase_c,share_p, sale_c)*-1));

    }

    else if (share_calc(num_s,purchase_p,purchase_c,share_p, sale_c) == 0)
    {
        printf("You have neither made a profit nor loss");
    }
    

    else{
        printf("You have a Profit\n");
        printf("Your profit is %d\n", share_calc(num_s,purchase_p,purchase_c,share_p, sale_c));
    }

    return(0);
}

int share_calc(int ns, int pp, int pc, int sp, int sc){
    int profit = ((ns*sp)-sc) - ((ns*pp)+pc);

    return(profit);
}