// // here we see the what is the diff b.w struct and class 
// // struct -> user defined class 
// // bydefalut all the data of struct is public 
// // but in the class all are the private in  nature 

// In C++, struct and class are both user-defined data types that can be used to group together data and methods. However, there are some key differences between the two:

// * **Struct** is a value type, while **class** is a reference type. This means that when you create a struct, you are creating a copy of the data, while when you create a class, you are creating a reference to the data.
// * **Struct** members are public by default, while **class** members are private by default. This means that struct members can be accessed directly from outside the struct, while class members must be accessed through getter and setter methods.
// * **Struct** can be used as a data type in C++ templates, while **class** cannot.

// // In general, structs are used to group together data that does not need to be hidden from the outside world, while classes are used to group together data that needs to be protected from the outside world.