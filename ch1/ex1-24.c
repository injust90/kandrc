#include <stdio.h>
#define MAXLINE 1000

void copy(char array[]);
void unbalance_warning(char array[]);

int main()
{
    char array[MAXLINE];
    copy(array);
    
    unbalance_warning(array);
}

void unbalance_warning(char array[]) {
    int i = 0;
    int pl_count = 0;
    int pr_count = 0;
    int p_diff = 0;
    int p_urcount = 0;
    int p_ulcount = 0;

    // Check to see if ( or ) and count the difference
    while (array[i] != EOF) {
        // If we see a quotation mark, do not count
        if (array[i] == '"') {
            ++i;
            while (array[i] != '"') {
                ++i;
            }
            ++i;
        }
        if (array[i] == '(') {
            ++pl_count;
        }
        if (array[i] == ')') {
            ++pr_count;
        }
        p_diff = pl_count - pr_count;
        if (array[i] == ';' || array[i] == '\n') {
            pl_count = 0;
            pr_count = 0;
            if (p_diff > 0) {
                p_ulcount += p_diff;
            }
            if (p_diff < 0) {
                p_urcount += p_diff;
            }
        }
        ++i;
    }
    // Check differences so that we warn the user
    printf("( is unbalanced by %d\n", p_ulcount);
    printf(") is unbalanced by %d\n", p_urcount * (-1));

    if (array[i] == EOF) {
        printf("%d", EOF);
    }
}

// copy: copy 'from' into 'to'; assume is big enough
void copy (char array[]) 
{
    int i = 0;
    int c;

    while ((c=getchar()) != EOF) {
        array[i] = c;
        ++i;
    }
}
