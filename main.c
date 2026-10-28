#include <stdio.h>
#define MAX 100
int verifyPin(int pin);
void deposit(float *balance, int pin);
void withdraw(float *balance, int pin);
void balanceEnquiry(float balance);
void miniStatement(int type[], float amount[], int count);

int main()
{
    float balance = 5000;
    float amount[MAX];
    int type[MAX];
    int count = 0;
    int choice;
    int pin;
    int attempts = 0;

    printf("===== WELCOME TO ATM =====\n");

    // PIN verification
    while (attempts < 3)
    {
        printf("Enter your ATM PIN: ");
        scanf("%d", &pin);

        if (verifyPin(pin))
        {
            printf("PIN verified successfully!\n");
            break;
        }
        else
        {
            printf("Incorrect PIN!\n");
            attempts++;
        }
    }

    if (attempts == 3)
    {
        printf("Too many wrong attempts. Access denied.\n");
        return 0;
    }

    // ATM menu
    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Deposit\n");
        printf("2. Withdrawal\n");
        printf("3. Balance Enquiry\n");
        printf("4. Mini Statement\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            {
                float oldBalance = balance;

                deposit(&balance, pin);

                if (balance > oldBalance && count < MAX)
                {
                    amount[count] = balance - oldBalance;
                    type[count] = 1;
                    count++;
                }
                break;
            }

            case 2:
            {
                float oldBalance = balance;

                withdraw(&balance, pin);

                if (balance < oldBalance && count < MAX)
                {
                    amount[count] = oldBalance - balance;
                    type[count] = 2;
                    count++;
                }
                break;
            }

            case 3:
                balanceEnquiry(balance);
                break;

            case 4:
                miniStatement(type, amount, count);
                break;

            case 5:
                printf("Thank you for using our ATM!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 5);

    return 0;
}

// PIN verification function
int verifyPin(int pin)
{
    return pin == 1234;
}

// Deposit function using pointer
void deposit(float *balance, int pin)
{
    int enteredPin;
    float amount;

    printf("Enter PIN to authorize deposit: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin)
    {
        printf("Authentication failed!\n");
        return;
    }

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount > 0)
    {
        *balance = *balance + amount;
        printf("Deposit successful!\n");
    }
    else
    {
        printf("Invalid amount!\n");
    }
}

// Withdrawal function using pointer
void withdraw(float *balance, int pin)
{
    int enteredPin;
    float amount;

    printf("Enter PIN to authorize withdrawal: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin)
    {
        printf("Authentication failed!\n");
        return;
    }

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount!\n");
    }
    else if (amount > *balance)
    {
        printf("Insufficient balance!\n");
    }
    else
    {
        *balance = *balance - amount;
        printf("Withdrawal successful!\n");
    }
}

// Balance enquiry function
void balanceEnquiry(float balance)
{
    printf("Available balance: Rs. %.2f\n", balance);
}

// Mini statement function
void miniStatement(int type[], float amount[], int count)
{
    int i;

    printf("\n===== MINI STATEMENT =====\n");

    if (count == 0)
    {
        printf("No transactions found.\n");
        return;
    }

    for (i = 0; i < count; i++)
    {
        if (type[i] == 1)
        {
            printf("%d. Deposit: Rs. %.2f\n",
                   i + 1, amount[i]);
        }
        else
        {
            printf("%d. Withdrawal: Rs. %.2f\n",
                   i + 1, amount[i]);
        }
    }

    printf("==========================\n");
}