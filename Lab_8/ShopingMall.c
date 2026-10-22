
#include <stdio.h>

#define PRODUCTS 4
#define DISCOUNT_LIMIT 3000
#define DISCOUNT_RATE 10

void welcome()
{
    printf("===== Welcome to Shopping Store =====\n");
}

void displayMenu()
{
    printf("\nAvailable Products:\n");
    printf("1. Notebook   - Rs. 200\n");
    printf("2. Pen        - Rs. 50\n");
    printf("3. Bag        - Rs. 1500\n");
    printf("4. Calculator - Rs. 800\n");
    printf("0. Checkout\n");
}

int getProductPrice(int choice)
{
    switch (choice)
    {
        case 1:
            return 200;
        case 2:
            return 50;
        case 3:
            return 1500;
        case 4:
            return 800;
        default:
            return 0;
    }
}

int calculateItemPrice(int price, int quantity)
{
    return price * quantity;
}

int calculateSubtotal(int itemTotals[])
{
    int subtotal = 0;

    for (int i = 0; i < PRODUCTS; i++)
    {
        subtotal = subtotal + itemTotals[i];
    }

    return subtotal;
}

float calculateDiscount(int subtotal)
{
    if (subtotal >= DISCOUNT_LIMIT)
    {
        return subtotal * DISCOUNT_RATE / 100.0;
    }

    return 0;
}

float calculateFinalBill(int subtotal, float discount)
{
    return subtotal - discount;
}

void displayReceipt(int quantities[], int prices[],
                    int itemTotals[], int subtotal,
                    float discount, float finalBill)
{
    printf("\n========== SHOPPING RECEIPT ==========\n");

    printf("%-12s %8s %8s %10s\n",
           "Product", "Qty", "Price", "Total");

    char *names[PRODUCTS] = {
        "Notebook", "Pen", "Bag", "Calculator"
    };

    for (int i = 0; i < PRODUCTS; i++)
    {
        if (quantities[i] > 0)
        {
            printf("%-12s %8d %8d %10d\n",
                   names[i], quantities[i],
                   prices[i], itemTotals[i]);
        }
    }

    printf("---------------------------------------\n");
    printf("Subtotal:       Rs. %8d\n", subtotal);
    printf("Discount:       Rs. %8.2f\n", discount);
    printf("Final Bill:     Rs. %8.2f\n", finalBill);
    printf("=======================================\n");
}

int continueShopping()
{
    int choice;

    printf("\nContinue shopping? (1 = Yes, 0 = No): ");
    scanf("%d", &choice);

    return choice;
}

int main()
{
    int prices[PRODUCTS] = {200, 50, 1500, 800};
    int quantities[PRODUCTS] = {0};
    int itemTotals[PRODUCTS] = {0};

    int choice, quantity;
    int subtotal;
    float discount, finalBill;

    welcome();

    do
    {
        displayMenu();

        printf("Enter product number: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }

        if (choice < 1 || choice > PRODUCTS)
        {
            printf("Invalid product selection!\n");
            continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        if (quantity <= 0)
        {
            printf("Quantity must be greater than zero!\n");
            continue;
        }

        int price = getProductPrice(choice);
        int itemPrice = calculateItemPrice(price, quantity);
        int index = choice - 1;

        quantities[index] += quantity;
        itemTotals[index] += itemPrice;

        printf("Product price: Rs. %d\n", price);
        printf("Item total: Rs. %d\n", itemPrice);

        subtotal = calculateSubtotal(itemTotals);
        discount = calculateDiscount(subtotal);
        finalBill = calculateFinalBill(subtotal, discount);

        printf("Current subtotal: Rs. %d\n", subtotal);

    } while (continueShopping() == 1);

    subtotal = calculateSubtotal(itemTotals);
    discount = calculateDiscount(subtotal);
    finalBill = calculateFinalBill(subtotal, discount);

    displayReceipt(quantities, prices, itemTotals,
                   subtotal, discount, finalBill);

    printf("Thank you for shopping!\n");

    return 0;
}
