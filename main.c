//
// Created by charl on 9/18/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Used in File System
#include<fcntl.h>
#include<unistd.h>
#include <sys/stat.h>

void CallByValue(int a) {
    a = 100;
}

int CallByValue2(int a) {
    a = 100;
    return a;
}

void CallByReference(int* a) {
    *a = 100;
}

int main() {
//    int var;
//    scanf("%d", &var);  // & operator gives address in the memory
//    printf("address=%p", &var); // outputs address of var

    // Size of pointer is 4.
//    char* a;
//    int* b;
//    double* c;
//    printf("%d, %d, %d", sizeof(a), sizeof(b), sizeof(c));

//    int a = 5;
//    int *pa = NULL;   // This pointer refers to no memory address. Always a good practice to do this.
//    pa = &a;    // pa is a pointer pointing to a
//    // int *pa = &a;
//
//    // ATTENTION!!! DON'T DO THIS: *pa = &a;    pa is the pointer, not *pa
//
//    printf("address=%p, value=%d\n", pa, *pa);  // * dereferences the pointer. That is, it gets the value

    //Usages of pointer
//    int a = 5;
//    int *pa = &a;
//    printf("*pa=%d, a=%d\n", *pa, a);   // outputs 5 and 5
//    *pa = 10;
//    (*pa)++;  // It's a good practice to put brackets to avoid potential arithmetic errors
//    printf("*pa=%d, a=%d\n", *pa, a);

    // Call by reference vs Call by value
//    int a = 5;
//    printf("before=%d\n", a);
//    CallByValue(a);
//    printf("after=%d\n", a);
//
//    printf("before=%d\n", a);
//    a = CallByValue2(a);
//    printf("after=%d\n", a);

//    int a = 5;
//    int *pa = &a;
//    printf("before=%d\n", a);
//    CallByReference(pa);
//    printf("after=%d\n", a);

    // Double pointer
//    int a = 5;
//    int *pa = &a;
//    int **ppa = &pa;
//    printf("%d, %d\n", *pa, **ppa);

    // Void pointer
//    int a;
//    void* p;
//    p = &a;
//    *(int*)p = 5;   // don't write *p = 5, (int*)p = 5, etc
//    printf("%d\n", *(int*)p);

    // Array
//    int a[10] = {0}; //An array of 10 integers, remember to initialize!
//    int b[3] = {1, 2, 4}; //Creating an array of 3 integers
//
//    //Accessing array elements
//    a[0] = 5; //First element assinged to value 5
//    a[4] = 6; //5th element.
//    a[9] = 12; //Last element of array (note that indexing of array elements starts from 0)
//
//    int twoD_array[10][10]; //10 * 10 matrix
//    twoD_array[5][5] = 100; // assign specific element
//
//    // Pointer vs Array
//    int* pa = a;
//    printf("pa[4]=%d, *(pa+4)=%d\n", pa[4], *(pa+4));
//    // Variable a is also a pointer
//    printf("a[0]=%d, *a=%d\n", a[0], *a);   // *a refers to the first element in the array
//
//    printf("%d\n", *(*(twoD_array+5)+5));   // or you can just do twoD_array[5][5]

    // Dynamic Memory
//    int *p = NULL; // No memory allocated.
//
//    //use malloc
//    //Template
//    // return_type malloc(size_in_bytes)   return NULL if failed
//    p = (int *)malloc(sizeof(int)); //allocated memory for one integer and passed the memory address to the pointer p
//    *p = 5; //Initializing the memory with some integer value
//    printf("Value of integer in freshly allocated memory is %d\n", *p);
//
//    //To deallocate memory
//    free(p);
//
//    // ATTENTION: NEVER USE DEALLOCATED MEMORY
//    //Garbage value will be stored in 'p'
//    //Main causes of segmentation faults in C
//    printf("Value of integer in deallocated memory is %d \n", *p);
//    // Linked list problem: element is removed but the pointer is still pointing to that element

    //Allocate memory for an array of elements.
//    int *q;
//
//    //Use calloc to allocate memory for an array of elements
//    //Template
//    // return_type calloc(size_in_bytes, array_size)
//    q = (int *)calloc(sizeof(int), 5);
//
//    // Difference: malloc doesn't initialize; calloc initializes memory to 0
//    // malloc is faster than calloc
//    // It would be better to use malloc over calloc, unless we want the zero-initialization
//
//    for(int i = 0; i < 5; i++) {
//        q[i] = i+1;
//    }
//
//    //Printing the elements of array whose memory is dynamically allocated.
//    for(int i = 0; i < 5; i++) {
//        printf("Element %d is %d\n", i+1, q[i]);
//    }
//
//    //Dellocate memory for array
//    free(q);
//    //Again, do not use any of the array elements after freeing the memory.
//    for(int i = 0; i < 5; i++) {
//        printf("Element %d is %d\n", i+1, q[i]);
//    }

//    //Example
//    //Show the use of double pointers
//
//    int a[10];
//    int u[10][10];
//
//    int **r;
//
//    r = (int **)malloc(sizeof(int *) * 10); //10 pointers
//
//    for(int i =0; i < 10; i++) {
//        r[i] = (int *)malloc(sizeof(int) * 10);
//    }
//
//    for(int i = 0; i < 10; i++) {
//        for(int j = 0; j < 10; j++)
//            r[i][j] = i*10 + j;
//    }
//
//    for(int i = 0; i < 10; i++) {
//        for(int j = 0; j < 10; j++)
//            printf("%d ", r[i][j]);
//        printf("\n");
//    }
//
//    // free memories
//    for(int i =0; i < 10; i++) {
//        free(r[i]);
//    }
//    free(r);







    // File I/O
    //file descriptor. The id used to represent a file
    //FILE *fd;

    //Std Library function to open a file template

    // fopen("file_name", mode)
    // mode - Whether you want to:
    /*  1. Read - "r"
        2. Write - "w"
        3. Both - "r+" or "w+"
        4. Append - "a"
        5. Create - "r+" or "w+" or "a+"
        r+: file must exist; can read and write at any location
        w+: file can exist; erase the file; read anywhere; write at the end (create a new file if not exist)
        a+: file can exist; read anywhere; write at the end (create a new file if not exist)
    */

    //Create a file named "sample_std.txt" giving read/write/execute permissions to user.
//    fd = fopen("sample_std.txt", "w+");
//    fclose(fd);

    //Writing to file
    //Std library function to write to file

    // fwrite(content, size of each content element, number of elements, file descripter(file stream variable))

    //Example writing "COMP310 Operating Systems" to "sample.txt"
//    fd = fopen("sample_std.txt", "w");
//    char *write_count;
//    write_count = "COMP310 Operating Systems";
//    fwrite(write_count, sizeof(char), strlen(write_count), fd);   // don't use sizeof(write_count)
//    fclose(fd);

//Reading from a file
    //Std library function to read from file

    // fread(memory to place content, size of each content element to be read, number of elements to be read, file descripter(file stream variable))
    // returns the size of the valid content
    //Example to read "COMP310" from "sample.txt"
//    fd = fopen("sample_std.txt", "r");
//    char *read_cont;
//    read_cont = (char *)malloc(sizeof(char) * 7);
//    int sanity_check = fread(read_cont, sizeof(char), 7, fd);
//
//    printf("Read content from file is of size %d \n", sanity_check);
//    for(int i = 0; i < 7; i++) {
//        printf("%c", read_cont[i]);
//    }
//
//    fseek(fd, 0, SEEK_END); // seek to end of file
//    int size = ftell(fd); // get current file pointer
//    fseek(fd, 0, SEEK_SET); // seek back to beginning of file
//    printf("%d", size);
//
//    fclose(fd);



    // File System
    //int fd; //file descriptor. The id used to represent a file

    //System call to open a file template

    // open("file_name", flag, mode)
    // flag - Whether you want to:
    /*  1. Read - O_RDONLY
        2. Write - O_WRONLY
        3. Both - O_RDWR
        4. Append - O_APPEND
        5. Create - O_CREAT
        Other modes not of relevance to course can be found in man page
    */
    // mode - Only required while creating a file (different modes in man page by typing "man 2 open")
    // example: S_IRUSR, S_IWUSR, S_IXUSR, S_IRWXU (S_IRUSR | S_IWUSR | S_IXUSR)

    //Example
    //Create a file named "sample.txt" giving read/write/execute permissions to user.
    //fd = open("sample.txt", O_CREAT, S_IRWXU);

    //--------------------------------------------------------------------------------

    //Writing to file
    //System call to write to file

    // write(file_descriptor, stuff to write, size of the stuff in bytes)

    //Example writing "COMP310 Operating Systems" to "sample.txt"
//    fd = open("sample.txt", O_WRONLY);
//    char *write_cont;
//    write_cont = (char *)malloc(sizeof(char) * 25);
//    write_cont = "COMP310 Operating Systems";
//    write(fd, write_cont, sizeof(char) * 25);
//
//    close(fd);


    //Reading from a file
    //System call to read from file

    // read(file_descriptor, memory to put read content, read content size in bytes)

    //Example to read "COMP310" from "sample.txt"
//    fd = open("sample.txt", O_RDONLY);
//    char *read_cont;
//    read_cont = (char *)malloc(sizeof(char) * 7);
//    int sanity_check = read(fd, read_cont, sizeof(char) * 7);
//
//    printf("Read content from file is of size %d \n", sanity_check);
//    for(int i = 0; i < 7; i++) {
//        printf("%c", read_cont[i]);
//    }
//    printf("\n");
//    close(fd);
    // Note that for the formal description of each of the functions above, check the man page in linux terminal as follows:
    // open - "man 2 open"
    // close - "man 2 close"
    // write - "man 2 write"
    // read - "man 2 read"


    return 0;
}