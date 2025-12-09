#include<stdio.h>

int main(){
	int n,i;
    float price, total = 0,discount,net;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
	{
        scanf("%f", &price);
        total += price;
    }

    if (n == 1)
        discount = 0.95;
    else if (n == 2)
        discount = 0.85;
    else
        discount = 0.7;

    net = total * discount *1.07;

    printf("%.2f\n", net);

    return 0;
}
