# Identifiers

#### In C++ programming language, identifiers are the unique names assigned to variables, functions, classes, structs, or other entities within the program. Let’s take a look at an example:

## Rules to Name of an Identifier in C++
We can use any word as an identifier as long as it follows the following rules:

- An identifier can consist of letters (A-Z or a-z), digits (0-9), and underscores (_). Special characters and spaces are not allowed.
- An identifier can only begin with a letter or an underscore only.
- C++ has reserved keywords that cannot be used as identifiers since they have predefined meanings in the language. For example, int cannot be used as an identifier as it already has some predefined meaning in C++. Attempting to use these as identifiers will result in a compilation error.
- Identifier must be unique in its namespace.


## Naming Conventions in C++
Naming conventions are not the rules enforced by C++ language but are suggestions for naming variables by the programming community for easier understanding. Some of the naming conventions are as follows:

### For Variables:

- Use camelCase (for constants, you can use UPPER_SNAKE_CASE)
- Start with lowercase alphabet.
- Use descriptive, meaningful names.
- For example, frequencyCount, personName


### For Functions:

- Use camelCase.
- Use Verb or verb phrases for naming.
- For example, getName(), countFrequency(), etc.


### For Classes:

- Use PascalCase
- Use Nouns or noun phrases for naming.
- For example, Car, Person, etc