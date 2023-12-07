#include <stdio.h>

double calculateTotalSalary(int totalHours, double wageRate) {
    double totalSalary;

    if (totalHours <= 60) {
        totalSalary = totalHours * wageRate;
    } else if (totalHours <= 120) {
        totalSalary = (60 * wageRate) + ((totalHours - 60) * wageRate * 1.33); // 33% increase after 60 hours
    } else {
        totalSalary = (60 * wageRate) + (60 * wageRate * 1.33) + ((totalHours - 120) * wageRate * 1.66); // 33% increase after 60 hours, 66% increase after 120 hours
    }

    return totalSalary;
}

int main() {
    int totalHours;
    double wageRate;

    // Prompt the user for input
    // printf("Enter total hours worked: ");
    scanf("%d", &totalHours);
    // printf("Enter wage rate: ");
    scanf("%lf", &wageRate); // Use %lf to read a double value

    double totalSalary = calculateTotalSalary(totalHours, wageRate);

    // Display the result with one decimal place
    printf("%.1lf\n", totalSalary);

    return 0;
}
