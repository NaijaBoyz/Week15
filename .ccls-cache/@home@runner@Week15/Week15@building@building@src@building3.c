#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid1, pid2, pid3, pid4, pid5, pid6, pid7, pid8, pid9;
    int status;

    // Create the first child process
    pid1 = fork();
    if (pid1 == -1) {
        printf("Failed to create child process 1.\n");
        exit(1);
    } else if (pid1 == 0) {  // Child process 1
        execl("./program1", "program1", NULL);
        printf("Failed to execute program1.\n");
        exit(1);
    }

    // Wait for child process 1 to finish
    waitpid(pid1, &status, 0);

    // Create the second child process
    pid2 = fork();
    if (pid2 == -1) {
        printf("Failed to create child process 2.\n");
        exit(1);
    } else if (pid2 == 0) {  // Child process 2
        execl("./program2", "program2", NULL);
        printf("Failed to execute program2.\n");
        exit(1);
    }

    // Wait for child process 2 to finish
    waitpid(pid2, &status, 0);

    // Create the third child process
    pid3 = fork();
    if (pid3 == -1) {
        printf("Failed to create child process 3.\n");
        exit(1);
    } else if (pid3 == 0) {  // Child process 3
        execl("./program3", "program3", NULL);
        printf("Failed to execute program3.\n");
        exit(1);
    }

    // Wait for child process 3 to finish
    waitpid(pid3, &status, 0);

    // Create the fourth child process
    pid4 = fork();
    if (pid4 == -1) {
        printf("Failed to create child process 4.\n");
        exit(1);
    } else if (pid4 == 0) {  // Child process 4
        execl("./program2", "program2", NULL);
        printf("Failed to execute program2 in child 4.\n");
        exit(1);
    }

    // Wait for child process 4 to finish
    waitpid(pid4, &status, 0);

    // Create the fifth child process
    pid5 = fork();
    if (pid5 == -1) {
        printf("Failed to create child process 5.\n");
        exit(1);
    } else if (pid5 == 0) {  // Child process 5
        execl("./program3", "program3", NULL);
        printf("Failed to execute program3 in child 5.\n");
        exit(1);
    }

    // Wait for child process 5 to finish
    waitpid(pid5, &status, 0);

    // Create the sixth child process (program2)
    pid6 = fork();
    if (pid6 == -1) {
        printf("Failed to create child process 6.\n");
        exit(1);
    } else if (pid6 == 0) {  // Child process 6
        execl("./program2", "program2", NULL);
        printf("Failed to execute program2 in child 6.\n");
        exit(1);
    }

    // Wait for child process 6 to finish
    waitpid(pid6, &status, 0);

    // Create the seventh child process (program3)
    pid7 = fork();
    if (pid7 == -1) {
        printf("Failed to create child process 7.\n");
        exit(1);
    } else if (pid7 == 0) {  // Child process 7
        execl("./program3", "program3", NULL);
        printf("Failed to execute program3 in child 7.\n");
        exit(1);
    }

    // Wait for child process 7 to finish
    waitpid(pid7, &status, 0);

    // Create the eighth child process (program2)
    pid8 = fork();
    if (pid8 == -1) {
        printf("Failed to create child process 8.\n");
        exit(1);
    } else if (pid8 == 0) {  // Child process 8
        execl("./program2", "program2", NULL);
        printf("Failed to execute program2 in child 8.\n");
        exit(1);
    }

    // Wait for child process 8 to finish
    waitpid(pid8, &status, 0);

    // Create the ninth child process (program3)
    pid9 = fork();
    if (pid9 == -1) {
        printf("Failed to create child process 9.\n");
        exit(1);
    } else if (pid9 == 0) {  // Child process 9
        execl("./program3", "program3", NULL);
        printf("Failed to execute program3 in child 9.\n");
        exit(1);
    }

    // Wait for child process 9 to finish
    waitpid(pid9, &status, 0);

    return 0;
}
