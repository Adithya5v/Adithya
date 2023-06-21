#include <stdio.h>

// Define the structure for a complex number
struct Complex {
    double real;
    double imaginary;
};

// Function to read a complex number
void readComplex(struct Complex *c) {
    printf("Enter the real part: ");
    scanf("%lf", &(c->real));
    printf("Enter the imaginary part: ");
    scanf("%lf", &(c->imaginary));
}

// Function to write a complex number
void writeComplex(struct Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imaginary);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return result;
}

int main() {
    struct Complex complex1, complex2, sum, product;

    printf("Reading the first complex number:\n");
    readComplex(&complex1);

    printf("\nReading the second complex number:\n");
    readComplex(&complex2);

    printf("\nFirst complex number:\n");
    writeComplex(complex1);

    printf("\nSecond complex number:\n");
    writeComplex(complex2);

    sum = addComplex(complex1, complex2);
    printf("\nSum of the complex numbers:\n");
    writeComplex(sum);

    product = multiplyComplex(complex1, complex2);
    printf("\nProduct of the complex numbers:\n");
    writeComplex(product);

    return 0;
}