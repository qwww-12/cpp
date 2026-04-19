### Template syntax with `<T>`

When working with a class template (usually implemented in a `.tpp` file), you must use `<T>` in specific places to tell the compiler which template instance you are referring to.

#### 🔹 When to use `<T>`
- When defining methods **outside the class**
- When using **scope resolution (`::`)**
- When creating objects of the template

#### 🔹 When NOT to use `<T>`
- Inside the class body
- In parameters (the compiler already knows it refers to `ste<T>`)

---

### Example

```cpp
template <typename T>
ste<T>::ste() {}

template <typename T>
ste<T>::ste(const ste &copy) : var(copy.var) {}

template <typename T>
ste<T>& ste<T>::operator=(const ste &op)
{
    if (this != &op)
        var = op.var;
    return *this;
}

template <typename T>
void ste<T>::set_var(T val)
{
    var = val;
}

template <typename T>
T ste<T>::get_var(void)
{
    return var;
}

template <typename T>
ste<T>::~ste() {}