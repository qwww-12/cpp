- [x] [CPP06](https://github.com/qwww-12/cpp/tree/master/cpp06)

in subject of casting:
---
**static_cast**: is can change value so have a operation in runtime like:
```cpp
            float f = 9.9f;
            int x = static_cast<int>(f);
```
and can too cast but without any new operation like:
```cpp           
            int a = 65;
            char c = static_cast<char>(a);   
```
here c is char type can save value 65 but in this example:
            ```int a = 128``` or any value greater than **127** is overflow so in this process a  new operation for do cast
>
**reinterpret_cast**: is cant change value is unlike static_cast just change syntax how read this var:
```cpp
            int *ptr = &any_var;
            long long j = reinterpret_cast<long long>(ptr);
```
if print j your output like this: `983958935058`, this not random number, the value of ptr stored is address of any_var
        so we say **"address"** but in progream show this address by another way show this address by long long way
>
**dynamic cast**: this cast in very various from another casts, this not change value, or even change how read value
        this cast have a operations in run-time, check real object type if same your type want changed return address of object "so need pointer important", can know type for object from **`RTTI` run time type info**,
        in vtable have a pointer point to RTTI, example to dynamic cast:
```cpp
            B *b = new D;
            D *d = dynamic_cast<D *>(b);
```
>
#### documentation:
> can you read this for more understand:<br>
&emsp;[static_cast](https://en.cppreference.com/cpp/language/static_cast)<br>
&emsp;[reinterpret_cast](https://en.cppreference.com/cpp/language/reinterpret_cast)<br>
&emsp;[dynamic_cast](https://en.cppreference.com/cpp/language/dynamic_cast)<br>


---

- [x] [CPP07](https://github.com/qwww-12/cpp/tree/master/cpp07)

in subject of template
--
**template**: is a way for create function can acceppt more type of variable in one function:
```CPP
        template <typename T>
        T    add(T a, T b){
                return a+b;
        }
```
so in this example we can use this function `add` for addittion 2 type var for any type: **char**, **int**, **double** and more ...

- now let explain how template can work look in this structure of file:


```
cpp  
├─ add.cpp
├─ add.hpp
└─ main.cpp
```
this like a normal way for write body of function in syntax file `.cpp` if just define function in header, but with templates it's different let's understand this:

&emsp;now compiler first thing go to main function and see a new function in main: `add(12.1, 34.1)`, the compiler go in `#include "add.hpp"` for to go in this file and compiler found the defination of function add:
```CPP
        template <typename T>
        T       add(T a, T b);
```
so compiler continue translte code because is found declaration in header, now compiler in file `add.cpp` found defination of add function but the problem compiler is can't know type of T so don't create object file for add.cpp, and in step linker call add function but there is no code of add.
withou templates, function of add has one specific type,so compiler create object file of add function and can link in linker step without any probleme

#### note:
> if want don't change this way for write code you can use **.tpp** file for help can include files of .tpp in header, example: `#include add.tpp`, this help in add.cpp get information about types for create object file