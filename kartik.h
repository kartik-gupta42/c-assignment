int factorial(int n);
int leapyear(int year);
int prime(int a);


int prime(int a) {
    int b = 1;
    if (a == 0 || a == 1) {
        b = 0;
    }
    for (int i = 2; i <= a / 2; i++) {
        if (a % i == 0) {
            b = 0;
            break;
        }
    }
    return b;
}


int factorial(int n) {
    int prod = 1;
    for (int i = 1; i <= n; i++) {
        prod *= i;
    }
    return prod;
}


int leapyear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1; 
    }
    return 0; 
}

