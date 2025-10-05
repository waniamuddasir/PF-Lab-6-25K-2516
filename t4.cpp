#include <stdio.h>

int main() {
    char username[6], password[7];
    char loginUser[6], loginPass[7];
    int i;

    while (1) {
        int len = 0;
        int valid = 1;

        printf("Enter your Username (5 letters only): ");
        scanf("%s", username);

        while (username[len] != '\0') len++;

        if (len != 5) {
            printf("Invalid Username: must be exactly 5 letters long.\n");
            continue;  
        }

        for (i = 0; i < 5; i++) {
            if (!((username[i] >= 'A' && username[i] <= 'Z') ||
                  (username[i] >= 'a' && username[i] <= 'z'))) {
                printf("Invalid Username: letters only allowed.\n");
                valid = 0;
                break;  
            }
        }

        if (!valid) continue; 

        printf("Enter a Password (6 chars, include uppercase, lowercase & digit): ");
        scanf("%s", password);

        len = 0;
        while (password[len] != '\0') len++;

        if (len != 6) {
            printf("Invalid Password: must be exactly 6 characters long.\n");
            continue;
        }

        int hasUpper = 0, hasLower = 0, hasDigit = 0;

        for (i = 0; i < len; i++) {
            if (password[i] >= 'A' && password[i] <= 'Z')
                hasUpper = 1;
            else if (password[i] >= 'a' && password[i] <= 'z')
                hasLower = 1;
            else if (password[i] >= '0' && password[i] <= '9')
                hasDigit = 1;
        }

        if (!hasUpper) {
            printf("Password must contain at least one uppercase letter.\n");
            continue;
        }
        if (!hasLower) {
            printf("Password must contain at least one lowercase letter.\n");
            continue;
        }
        if (!hasDigit) {
            printf("Password must contain at least one digit.\n");
            continue;
        }

        printf("Account Created Successfully.\n");
        break;  
    }
    
    while (1) {
        printf("Login\n");
        printf("Enter Username: ");
        scanf("%s", loginUser);
        printf("Enter Password: ");
        scanf("%s", loginPass);

        int matchUser = 1, matchPass = 1;

        for (i = 0; i < 5; i++) {
            if (username[i] != loginUser[i]) {
                matchUser = 0;
                break;
            }
    }
        for (i = 0; i < 6; i++) {
            if (password[i] != loginPass[i]) {
                matchPass = 0;
                break;
            }
        }

        if (matchUser && matchPass) {
            printf("Welcome %s, you are now logged in.\n", username);
            break; 
        } else {
            printf("Incorrect username or password. Try again.\n");
            continue;  
        }
    }
	return 0;
}


