/// @file example.h
/// @version 1.0
/// @date 2025-02-25
/// @brief This is an example header file. // vai aparecer no files list
/// @authors Person1, Person2 
/// @details This is an example header file that demonstrates how to use Doxygen to document C++ code.
/// @note This is a note.
/// @warning This is a warning.


/// @brief Does something 
/// @param s this is a char
/// @param a This is a integer
/// @return description of the return value


int foo(char *s, int a);

///
/// @brief  Some struct
///
typedef struct{
    int a;  //!< Number of X
    int b;  //!< Number of Y

}struct_t;