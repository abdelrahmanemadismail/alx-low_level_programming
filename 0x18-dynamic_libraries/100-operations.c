/**
 * add - Adds two integers
 * @a: The first integer to add
 * @b: The second integer to add
 *
 * Return: The sum of the two integers (a + b).
 */
int add(int a, int b) {
    return a + b;
}

/**
 * sub - Subtracts two integers
 * @a: The integer to subtract from
 * @b: The integer to subtract
 *
 * Return: The result of subtracting the second integer (b) from the first integer (a).
 */
int sub(int a, int b) {
    return a - b;
}

/**
 * mul - Multiplies two integers
 * @a: The first integer to multiply
 * @b: The second integer to multiply
 *
 * Return: The product of the two integers (a * b).
 */
int mul(int a, int b) {
    return a * b;
}

/**
 * div - Divides two integers
 * @a: The dividend
 * @b: The divisor (must not be zero)
 *
 * Return: The result of dividing the first integer (a) by the second integer (b).
 */
int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        return -1; // Handle division by zero error.
    }
}

/**
 * mod - Finds the modulus of two integers
 * @a: The dividend
 * @b: The divisor (must not be zero)
 *
 * Return: The remainder when the first integer (a) is divided by the second integer (b).
 */
int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        return -1; // Handle division by zero error.
    }
}
