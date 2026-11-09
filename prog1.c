#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, difference, product, quotient, remainder;
    float quo;
    int result, result1;

    // Input: Read two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Arithmetic Operators
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    printf("\nEXPRESSIONS WITH ARITHMETIC OPERATORS\n");

    printf("Sum: %d + %d = %d\n", num1, num2, sum);
    printf("Difference: %d - %d = %d\n", num1, num2, difference);
    printf("Product: %d * %d = %d\n", num1, num2, product);

    // Check division by zero
    if (num2 != 0)
    {
        quotient = num1 / num2;
        remainder = num1 % num2;
        quo = (float)num1 / num2;

        printf("Quotient: %d / %d = %d\n", num1, num2, quotient);
        printf("Remainder: %d %% %d = %d\n", num1, num2, remainder);
        printf("Decimal Quotient: %d / %d = %f\n", num1, num2, quo);
    }
    else
    {
        printf("Quotient: Division by zero is not allowed.\n");
        printf("Remainder: Division by zero is not allowed.\n");
        printf("Decimal Quotient: Division by zero is not allowed.\n");
    }

    // Relational Operators
    printf("\nEXPRESSIONS WITH RELATIONAL OPERATORS\n");

    printf("%d Greater than %d ?: %d\n",
           num1, num2, num1 > num2);

    printf("%d Greater than or Equal %d ?: %d\n",
           num1, num2, num1 >= num2);

    result = num1 < num2;

    printf("%d Smaller than %d ?: %d\n",
           num1, num2, result);

    result1 = num1 <= num2;

    printf("%d Smaller than or Equal %d ?: %d\n",
           num1, num2, result1);

    printf("%d Equal to %d ?: %d\n",
           num1, num2, num1 == num2);

    result1 = num1 != num2;

    printf("%d Not Equal to %d ?: %d\n",
           num1, num2, result1);

    // Logical Operators
    printf("\nEXPRESSIONS WITH LOGICAL OPERATORS\n");

    printf("(%d > %d) Logical AND (%d > 10) ?: %d\n",
           num1, num2, num1,
           (num1 > num2) && (num1 > 10));

    printf("(%d > %d) Logical OR (%d > 10) ?: %d\n",
           num1, num2, num1,
           (num1 > num2) || (num1 > 10));

    result = !(num1 < num2);

    printf("Negation(%d Smaller than %d) ?: %d\n",
           num1, num2, result);

    // Increment / Decrement Operators
    printf("\nEXPRESSIONS WITH INCREMENT / DECREMENT OPERATORS\n");

    printf("num1 value: %d\n", num1);

    printf("++num1 value: %d\n", ++num1);

    printf("num1++ value: %d\n", num1++);

    printf("num1 value: %d\n", num1);

    // Bitwise Operators
    printf("\nEXPRESSIONS WITH BITWISE OPERATORS\n");

    printf("%d Bitwise AND %d: %d\n",
           num1, num2, num1 & num2);

    printf("%d Bitwise OR %d: %d\n",
           num1, num2, num1 | num2);

    printf("%d Bitwise XOR %d: %d\n",
           num1, num2, num1 ^ num2);

    result = ~num1;

    printf("Complement(%d): %d\n",
           num1, result);

    printf("%d Left Shift 4: %d\n",
           num1, num1 << 4);

    printf("%d Right Shift 2: %d\n",
           num1, num1 >> 2);

    // Conditional Operator
    printf("\nEXPRESSIONS WITH CONDITIONAL OPERATOR\n");

    printf("(%d > %d ? TRUE : FALSE): ",
           num1, num2);

    num1 > num2 ? printf("TRUE\n") : printf("FALSE\n");

    // Sizeof Operator
    printf("\nEXPRESSIONS WITH SIZEOF OPERATOR\n");

    printf("SIZE OF(%d): %zu\n",
           num1, sizeof(num1));

    printf("SIZE OF(INTEGER): %zu\n",
           sizeof(int));

    printf("SIZE OF(FLOAT): %zu\n",
           sizeof(float));

    printf("SIZE OF(DOUBLE): %zu\n",
           sizeof(double));

    printf("SIZE OF(CHARACTER): %zu\n",
           sizeof(char));

    return 0;
}