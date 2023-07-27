#include <stdio.h>

// Function to calculate profit or loss
int share_calc(int numShares, int purchasePrice, int purchaseCommission, int salePrice, int saleCommission) {
    return ((numShares * salePrice) - saleCommission) - ((numShares * purchasePrice) + purchaseCommission);
}

int main() {
    int numShares, salePrice, saleCommission, purchasePrice, purchaseCommission, result;

    printf("Please enter the Number of shares: ");
    scanf("%d", &numShares);

    printf("Please enter the Sale price per Share: ");
    scanf("%d", &salePrice);

    printf("Please enter the Sale Commission: ");
    scanf("%d", &saleCommission);

    printf("Please enter the Purchase Price per Share: ");
    scanf("%d", &purchasePrice);

    printf("Please enter the Purchase Commission: ");
    scanf("%d", &purchaseCommission);

    result = share_calc(numShares, purchasePrice, purchaseCommission, salePrice, saleCommission);
    
    if(result < 0){
        printf("You have made a loss.\n");
        printf("Your loss is %d\n", -result);
    }
    else if (result == 0) {
        printf("You have neither made a profit nor loss.\n");
    }
    else {
        printf("You have a Profit.\n");
        printf("Your profit is %d\n", result);
    }

    return 0;
}
