#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

char input[BUFSIZ];

int comparator(const void *a, const void *b) {
    int aa = *(const int *) a;
    int bb = *(const int *) b;
    return (bb - aa);
}

char *stringSorter(char *input) {
    int n = strlen(input);
    //int ascii[n]; // array for int values of chars
    //int i;
    // filling ascii with ASCII codes of input
    //for (i = 0; i < n; i++) {
    //    ascii[i] = (int) input[i];
    //}

    //qsort(ascii, n, sizeof(int), comparator);
    qsort(input, n, sizeof(int), comparator);


    // char result[n];
    //for (i = 0; i < n; i++) {
    //    sorted[i] = (char) ascii[i];
    //}

    return input;
}

int main(int c, char **v) {
    printf("%s\n", stringSorter(v[1]));
}
