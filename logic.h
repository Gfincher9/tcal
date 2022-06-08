double int1;
double int2;
double ans;
    void addInt(void) {
        printf("What is the first integer?\n");
    scanf("%lf", &int1);
        printf("What is the second integer?\n");
    scanf("%lf", &int2);
ans = (int1 + int2);
        printf("%.2lf + %.2lf = %.2lf\n", int1, int2, ans);        
    }


void subInt(void) {
        printf("What is the first integer?\n");
    scanf("%lf", &int1);
        printf("What is the second integer?\n");
    scanf("%lf", &int2);
ans = (int1 - int2);
        printf("%.2lf - %.2lf = %.2lf\n", int1, int2, ans);        
    }


    void multInt(void) {
        printf("What is the first integer?\n");
    scanf("%lf", &int1);
        printf("What is the second integer?\n");
    scanf("%lf", &int2);
ans = (int1 * int2);
        printf("%.2lf x %.2lf = %.2lf\n", int1, int2, ans);        
    }


    void divInt(void) {
        printf("What is the first integer?\n");
    scanf("%lf", &int1);
        printf("What is the second integer?\n");
    scanf("%lf", &int2);
ans = (int1 / int2);
        printf("%.2lf divided by %.2lf = %.2lf\n", int1, int2, ans);        
    }