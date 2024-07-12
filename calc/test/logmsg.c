#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get the current time as a string
char* get_time_str() {
	
	time_t now;
	time(&now);

	
    char *time_buf=(char *) malloc(64*sizeof(char));
    strftime(time_buf, 64, "%Y-%m-%d %H:%M:%S",localtime(&now) );


    return time_buf;
}

// Function to log messages
void log_message(const char *level, const char *message) {
    FILE *log_file = fopen("logfile.txt", "a");
    if (log_file == NULL) {
        fprintf(stderr, "Error opening log file\n");
        exit(EXIT_FAILURE);
    }

    char *time_str = get_time_str();
    fprintf(log_file, "[%s] %s: %s\n", time_str, level, message);

    free(time_str);
    fclose(log_file);
}

int main() {
    // Log some messages
    log_message("INFO", "This is an info message.");
    log_message("WARNING", "This is a warning message.");
    log_message("ERROR", "This is an error message.");

    printf("Log messages have been written to logfile.txt\n");

    return 0;
}


