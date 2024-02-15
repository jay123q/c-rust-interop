#ifndef TESTLIB
#define TESTLIB


// struct from C
struct exampleStruct{
    char a;
};
struct exampleStruct struct_c_function();

// From C
const char* c_func(int);
void times2(int*);

// From Rust
void rs_func(int*);

// from c

int access_array(int);


#endif