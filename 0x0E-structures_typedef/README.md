# 0x0E. C - Structures, typedef

## Resources:books:
* [Structures](https://holbertonintranet.s3.amazonaws.com/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210805%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210805T202244Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=c012d63918b1142c78d42df9b9f52fdfc24faa20fa28624be39e8ac460c7377e)
* [Struct](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
* [Documentation- data structures](https://github.com/holbertonschool/Betty/wiki/Documentation:-Data-structures)
* [Typedef](https://holbertonintranet.s3.amazonaws.com/uploads/misc/2021/1/c8ff3e6f7202be7fa489a584e41d005504a07c23.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210805%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210805T202435Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=efc27565172acea46ddf39ce0e4ad5e9c9e233d35227afae490008d9a394cc1c)
* [Typedef 2](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
* Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189
* [The Lost Art of Structure Packing](http://www.catb.org/esr/structure-packing/)

## Tasks:
```
0. Define a new type struct dog with the following elements:
name, type = char *
age, type = float
owner, type = char *
1. Write a function that initialize a variable of type struct dog
Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
2. Write a function that prints a struct dog
Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element.
(if name is NULL, print Name: (nil))
If d is NULL print nothing.
3. Define a new type dog_t as a new name for the type struct dog.
4. Write a function that creates a new dog.
Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails
5. Write a function that frees dogs.
Prototype: void free_dog(dog_t *d);
```
