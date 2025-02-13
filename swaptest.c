#include <stdio.h>
#include <stdlib.h>
#include "swap.h"

Node * build_list(int data[]) {
    size_t size = sizeof(data) / sizeof(data[0]);
    Node * head = (Node *)malloc(sizeof(Node));

    for (int i = 0; i < size; i++) {

    }


    return head;
}

void print_list(Node * head) {
    char * output = "Im not finished yet.";


    fprintf(stdout, output);
}

//  if the lists are not the same, return false.
bool compare_list(Node* A_list, Node* B_list) {
    // should we print the list when we compare them? (print_list) Probably not.

    return false;
}

bool swap_test() {
// test 1

// test 2

// test 3

// test 4......

}




bool delete_test() {

}


int main(void) {



    printf("Hello, World!\n");
    return EXIT_SUCCESS;
}