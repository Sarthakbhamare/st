#include <stdio.h>

int main() {
    int locks, stocks, barrels;
    int tlocks = 0, tstocks = 0, tbarrels = 0;
    float lprice = 45.0, sprice = 30.0, bprice = 25.0;
    float lsales, ssales, bsales, sales, comm;

    printf("Enter the number of locks (enter -1 to stop): ");
    scanf("%d", &locks);

    while (locks != -1) {
        printf("Enter the number of stocks and barrels: ");
        scanf("%d %d", &stocks, &barrels);

        tlocks += locks;
        tstocks += stocks;
        tbarrels += barrels;

        printf("Enter the number of locks (enter -1 to stop): ");
        scanf("%d", &locks);
    }

    // Total items sold
    printf("\nTotal locks   = %d", tlocks);
    printf("\nTotal stocks  = %d", tstocks);
    printf("\nTotal barrels = %d", tbarrels);

    // Total sales
    lsales = lprice * tlocks;
    ssales = sprice * tstocks;
    bsales = bprice * tbarrels;
    sales = lsales + ssales + bsales;

    printf("\n\nTotal sales = %.2f", sales);

    // Commission calculation
    if (sales > 1800.0) {
        comm = 0.10 * 1000.0;
        comm += 0.15 * 800.0;
        comm += 0.20 * (sales - 1800.0);
    } else if (sales > 1000.0) {
        comm = 0.10 * 1000.0;
        comm += 0.15 * (sales - 1000.0);
    } else {
        comm = 0.10 * sales;
    }

    printf("\nCommission = %.2f\n", comm);

    return 0;
}
