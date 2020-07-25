#Arrays
An array is a variable that can store multiple values.  Each value is called an element of the array. For example, if you want to store 100 integers, you can create an array for it.

	float data[100];

#Classification of Arrays 
##One-dimensional arrays
You can think of a one dimensional array conceptually as a row, where elemst are stored one after another.
	int array[5] = {1, 3, 8, 11, 23};

###Sample Program using 1-D arrays	
	/* Program to calculate the first 20 Fibonacci numbers. */
        
	#include <stdlib.h>
        #include <stdio.h> 

        int main( void ) {
            
            int i, fibonacci[ 20 ];
            
            fibonacci[ 0 ] = 0;
            fibonacci[ 1 ] = 1;
            
            for( i = 2; i < 20; i++ )
                fibonacci[ i ] = fibonacci[ i - 2 ] + fibonacci[ i - 1 ];
                
            for( i = 0; i < 20; i++ )
                printf( "Fibonacci[ %d ] = %f\n", i, fibonacci[ i ] );
            
        } /* End of sample program to calculate Fibonacci numbers */ 

##Multidimensional
We can define multidimensional arrays in simple words as array of arrays.

Multidimensional arrays are declared by providing more than one set of square brackets *[ ]* after the variable name in the declaration statement. Multidimensional arrays may be completely initialized by listing all data elements within a single pair of curly {} braces, as with single dimensional arrays
Two dimensional array:
	int two_d[10][20];

Initializing a two dimensional array:
	int c[2][3] = {{1, 3, 0}, {-1, 5, 9}};

Three dimensional array:
	int three_d[10][20][30];

###Sample Program using a Multidemnsional array
	/* Sample program Using 2-D Arrays */
        
        #include <stdlib.h>
        #include <stdio.h> 
        
        int main( void ) {
        
            /* Program to add two multidimensional arrays */
            /* Written May 1995 by George P. Burdell */
            
            int a[ 2 ][ 3 ] = { { 5, 6, 7 }, { 10, 20, 30 } };
            int b[ 2 ][ 3 ] = { { 1, 2, 3 }, {  3,  2,  1 } };
            int sum[ 2 ][ 3 ], row, column;
            
            /* First the addition */
            
            for( row = 0; row < 2; row++ )
                for( column = 0; column < 3; column++ )
                    sum[ row ][ column ] =  
                        a[ row ][ column ] + b[ row ][ column ];
            
            /* Then print the results */
            
            printf( "The sum is: \n\n" );
            
            for( row = 0; row < 2; row++ ) {
                for( column = 0; column < 3; column++ )
                    printf( "\t%d",  sum[ row ][ column ] );
                printf( '\n' );   /* at end of each row */
            }
            
            return 0;
        }

#Files
##Text files
Text files are the normal .txt files. You can easily create text files using any simple text editors such as Notepad.
Binary files have no inherent constraints (can be any sequence of bytes), and must be opened in an appropriate program that knows the specific file format (such as Media Player, Photoshop, Office, etc.).

##Binary files
Binary files are mostly the .bin files in your computer.
Instead of storing data in plain text, they store it in the binary form (0's and 1's).
They can hold a higher amount of data, are not readable easily, and provides better security than text files.

Remember that all files, whether binary or text, are composed of bytes. The difference between binary and text files is in how these bytes are interpreted. Every text file is indeed a binary file, but this interpretation gives us no useful operations to work with. The reverse is not true, and treating a binary file as a text file can lead to data corruption.

## Files and Data Streams in C 

The C standard library provides us with a way to work with files in a platform-independent way. It abstracts
files as data streams, from which we can read and to which we can write.
We have seen how the files are handled in Linux on the system calls level: the open system call opens
a file and returns its descriptor, an integer number, the write and read system calls are used to perform
writing and reading, respectively, and the close system call ensures that the file is properly closed. As
the C language was created in par with the Unix operating system, they bear the same approach to file
interactions. The library counterparts of these functions are called fopen, fwrite, fread, and fclose. On
Unix-like systems, they act like an adapter for system calls, providing similar functionality, except that they
also work on other platform in the same way. The main differences are as follows:

1. In place of file descriptors, we use a special type FILE, which stores all information
about a certain stream. Its implementation is hidden and you should never change
its internal state manually. So, instead of working with numeric file descriptors
(which is platform-dependent), we use FILE as a black box.
The FILE instance is allocated in heap internally by the C library itself, so at
anytime we will work with a pointer to it, not with the instance itself directly.

2. While file operations in Unix are more or less uniform, there are two types of data
streams in C.

* Binary streams consist of raw bytes that are handled “as is.”
* Text streams include symbols grouped into lines; each line is ended by an end-of-line character (implementation dependent).

Text streams are limited in a number of ways on some systems.

* The line lenght might be limited
* They might only be able to work with printing characters, newlines, spaces, and tabs.
* Spaces before the newline may disappear.

On some operating systems, text and binary streams use different file formats, and
thus to work with a text file in a way compatible between all its programs, the use of
text streams is mandatory.
While GNU C library, usually associated with GCC, makes no difference between
binary and text streams, on other platforms this is not the case, so distinguishing
these is crucial.

For example, I have seen a situation in which reading a large block from a picture file
on Windows (the compiler was MSVC) ended prematurely because the picture was
obviously binary, while the associated stream was created in text mode.

The standard library provides machinery to create and work with streams. Some functions it defines
should only be used on text streams (like fscanf). The relevant header file is called stdio.h

	file_example.c
	
	int smth[]={1,2,3,4,5};
	FILE* f = fopen( "hello.img", "rwb" );
	fread( smth, sizeof(int), 1, f);
	/* This line is optional. By means of `fseek` function we can navigate the file */
	fseek( f, 0, SEEK_SET );
	fwrite(smth, 5 * sizeof( int ), 1, f);
	fclose( f );
	
* The instance of FILE is created via a call to fopen function. The latter accepts the path to file and a set of flags, squashed into a string.

The important flags of fopen are listed here.

 * -b - open file in a binary mode. That is what makes a real distinction between text and binary streams. By default, files are opened in text mode.
 * – w - open a stream with a possibility to write into it.
 * – r - open a stream with a possibility to read from it.
 * – + - if you write simply w, the file will be overwritten. When + is present, the writes will append data to the end of file.
 
 If the file does not exist, it will be created.

The file hello.img is opened in binary mode for both reading and writing.
The file contents will be overwritten.

* After being created, the FILE holds a kind of a pointer to a position inside the file, a cursor of sorts. Reads and writes move this cursor further.
* The fseek function is used to move cursor without performing reads or writes. It allows moving cursor relatively to either its current position or the file start.
* fwrite and fread functions are used to write and read data from the opened FILE instance.

Taking fread, for example, it accepts the memory buffer to read from. The two integer parameters are the size of an individual block and the amount of blocks read. The returning value is the amount of blocks successfully read from the file. Every block’s read is atomic: either it is completely read, or not read at all.
In this example, the block size equals sizeof(int), and the amount of blocks is one.
The fwrite usage is symmetrical.

* fclose should be called when the work with file is complete

There exist a special constant EOF. When it is returned by a function that works with a file, it means that
the end of file is reached.
Another constant BUFSIZ stores the buffer size that works best in the current environment for input and
output operations.
Streams can use buffering. It means that they have an internal buffer that proxies all reads and writes. It
allows for rarer system calls (which are expensive performance-wise due to context switching). Sometimes
when the buffer is full the writing will actually trigger a write system call. A buffer can be manually flushed
using fflush command. Any delayed writes will be executed and the buffer will be reset.

When the program starts, three FILE* instances are created and attached to the streams with descriptors 0,
1, and 2. They can be referred to as stdin, stdout, and stderr. All three are usually using a buffer, but the stderr
is automatically flushing the buffer after every writing. It is necessary to not delay or lose error messages.

NOTE: Again, descriptors are integers, FILE instances are not. The int fileno( FILE* stream ) functionis used to get the underlying descriptor for the file stream.
	
### Declaration and Description 

Declaration: FILE *Fopen(const char *filename, const char * mode)
fopen()- is a function when used to open a dile to perform 
 operations such as reading, writing etc. 
*We declare a dile pointer and use fopen() as below, creates 
 a new file if the mentioned file nada does not exit.*
	
  *Operations of files*
 * “r” – Searches file. If the file is opened successfully fopen( ) loads 
  it into memory and sets up a pointer which points to the first character in it. 
  If the file cannot be opened fopen( ) returns NULL.
 * “w” – Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist, 
 a new file is created. Returns NULL, if unable to open file.
 * “a” – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up 
  a pointer that points to the last character in it. 
  If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.
 * “r+” – Searches file. If is opened successfully fopen( ) loads it into memory and sets up a pointer 
  which points to the first character in it. 
  Returns NULL, if unable to open the file.
 * “w+” – Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist a 
  new file is created. Returns NULL, if unable to open file.
 * “a+” – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a 
  pointer which points to the last character in it. 
  If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.
	FILE *fp;
	fp=fopen("filename","mode");
 mode: refers to the operatin that will be performed on the file
 such: r - read, w - write, r+ - read and add,w+ - write and add.

 *Fuctions*
 * fopen() create a new file or open a existing file
 * fclose() function closes the file that is being pointed by file 
 * pointer fp. *Finally you need closed the file.*
 * getc() reads a character from a file
 * putc() writes a character to a file
 * fscanf() reads a set of data from a file
 * fprintf() writes a set of data to a file
 * getw() reads a integer from a file
 * putw() writes a integer to a file
 * fseek() set the position to desire point
 * ftell() gives current position in the file
 * rewind() set the position to the begining point

 ## REFERENCES
* https://en.wikiversity.org/wiki/C_Programming/Arrays
* "Low Level Programming" https://www.apress.com/gp/book/9781484224021
* "Principles of Programming Languages" https://www.springer.com/gp/book/9781848820319
