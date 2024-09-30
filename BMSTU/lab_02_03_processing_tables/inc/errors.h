#ifndef ERRORS_H
#define ERRORS_H

#define END_OF_FILE -1
#define ERR_OK 0
#define ERR_INPUT 1
#define ERR_FILENAME 2
#define ERR_OPERATION_INPUT 3
#define ERR_OPERATION_COUNT 4
#define ERR_STRING_OVERFLOW 5
#define ERR_EMPTY_DATABASE 6
#define ERR_MEMORY_ALLOCATION 7
#define ERR_FILE_ORDER_INPUT 8
#define ERR_FILE_ORDER_OVERFLOW 9
#define ERR_TOO_LONG_FIELD 10
#define ERR_CONVERTATION_DOUBLE 11
#define ERR_UNKNOWN_TYPE 12
#define ERR_UNKNOWN_GENDER 13
#define ERR_UNKNOWN 100

void print_error_message(short int arg);
void help(void);
#endif
