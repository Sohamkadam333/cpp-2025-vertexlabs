# Inheritance 

The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object-Oriented Programming in C++. 


## Types Of Inheritance in C++
The inheritance can be classified on the basis of the relationship between the derived class and the base class. In C++, we have 5 types of inheritances:

- Single Inheritance: Subclass inherited from a single superclass.
- Multiple Inheritance: Subclass inherited from more than one superclass.
- Multilevel Inheritance: A class inherited from another class, which in turn inherited from another class, creating a chain of inheritance.
- Hierarchical Inheritance: Multiple subclasses inherited from a single superclass.
- Hybrid Inheritance: Combination of any of the above types of inheritance.


### Syntax
```
class DerivedClass : mode_of_inheritance BaseClass {
    // Body of the Derived Class
};
```

<table><thead><tr><th><p dir="ltr"><span>Mode</span></p>
</th><th><p dir="ltr"><span>Description</span></p>
</th></tr></thead><tbody><tr><td><p dir="ltr"><b><strong>Public Inheritance Mode</strong></b></p>
</td><td><p dir="ltr"><span>Public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class.</span></p>
</td></tr><tr><td><p dir="ltr"><b><strong>Protected Inheritance Mode</strong></b></p>
</td><td><p dir="ltr"><span>Both public and protected members of the base class will become protected in the derived class.</span></p>
</td></tr><tr><td><p dir="ltr"><b><strong>Private Inheritance Mode</strong></b></p>
</td><td><p dir="ltr"><span>Both public members and protected members of the base class will become private in the derived class. Private mode is the </span><b><strong>default mode</strong></b><span> that is applied when we don’t specify any mode.</span></p>
</td></tr></tbody></table>