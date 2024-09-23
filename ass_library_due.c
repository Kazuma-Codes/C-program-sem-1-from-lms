/*A library charges a fine for every book returned late. 
For first 5 days the fine is 50 paise, for 6-10 days fine is
 one rupee and above 10 days fine is 5 rupees. If you return the book 
 after 30 days your membership will be cancelled. Write a program
  to accept the number of days the member is late to return the book
   and display the fine or the appropriate message.*/
   #include <stdio.h>

int main() {
    int daysLate;
    float fine;

    // Input the number of days the book is late
    printf("Enter the number of days the book is late: ");
    scanf("%d", &daysLate);

    // Calculate the fine based on the number of late days
    if (daysLate > 30) {
        printf("Membership canceled.\n");
    } else if (daysLate > 10) {
        fine = 5.0; // 5 rupees for more than 10 days
        printf("The fine is: %.2f rupees\n", fine);
    } else if (daysLate >= 6) {
        fine = 1.0; // 1 rupee for 6 to 10 days
        printf("The fine is: %.2f rupees\n", fine);
    } else if (daysLate > 0) {
        fine = 0.50; // 50 paise for 1 to 5 days
        printf("The fine is: %.2f rupees\n", fine);
    } else {
        printf("No fine, book returned on time.\n");
    }

    return 0;
}
