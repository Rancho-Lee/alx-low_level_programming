#ifndef MAIN_H
#define MAIN_H

int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
#include <stdlib.h>                                                                                                                                             

#include <stdio.h>                                                                                                                                              

#include <sys/types.h>                                                                                                                                          

#include <sys/stat.h>                                                                                                                                           

#include <fontl.h> 

#include <unistd.h>


#endif
