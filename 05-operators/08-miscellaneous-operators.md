# Miscellaneous Operators

## 1. sizeof Operator

#### sizeof operator is a unary operator used to compute the size of its operand or variable in bytes. 

```cpp
sizeof (char);
sizeof (var_name);
```

## 2. Comma Operator (,)
#### Comma operator is a binary operator that is used for multiple purposes. It is used as a separator or used to evaluate its first operand and discards the result; it then evaluates the second operand and returns this value (and type).

```cpp
int n = (m+1, m-2, m+5);
int a, b, c;
```

## 3. Addressof Operator (&)
#### Addressof operator is used to find the memory address in which a particular variable is stored. In C++, it is also used to create a reference.

```cpp
&var_name;
```

## 4. Dot Operator(.)
#### Dot operator is used to access members of structure variables or class objects using their object names.

```cpp
obj . member;
```

## 5. Arrow Operator
#### Arrow operator is used to access the variables of classes or structures through its pointer.

```cpp
sptr -> member;
```

## 6. Casting Operators
#### Casting operators are used to convert the value of one data type to another data type. For example, for an integer value x:

```cpp
(float)x
static_cast<float>(x)
```