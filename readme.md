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

---
> can you read this for more understand:<br>
&emsp;[static_cast](https://en.cppreference.com/cpp/language/static_cast)<br>
&emsp;[reinterpret_cast](https://en.cppreference.com/cpp/language/reinterpret_cast)<br>
&emsp;[dynamic_cast](https://en.cppreference.com/cpp/language/dynamic_cast)<br>