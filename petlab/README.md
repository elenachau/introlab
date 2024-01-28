# petlab  

Step 3  

In pet.h, define the Pet class (with the class keyword), and its properties:  

string species    
string name  

Add your file guards. The format is:  

#ifndef FILENAMEH    
#define FILENAMEH    
//class declaration, and method declarations within    
#endif    

Where FILENAME in FILENAME_H is the name of the class you're defining; in this case, Pet. The purpose of a fileguard is to prevent a file from being included in a program more than once.

Remember that classes are just meant to represent something that we want to store information about. In this case, we have decided that we want every pet in our program to have a name and a species. We could add additional properties if we wanted to as long as they described the attributes of a pet. Finally, don't forget that classes are default private, meaning main can't see the declared  methods listed in the next step without the public: access specifier.  

The class delcaration is inserted between the #define and #endif statements, and its syntax is as follows: 

class CLASSNAME{
    DATATYPE PROPERTYA;
    DATATYPE PROPERTYB;
    DATATYPE PROPERTYC;

    public:
        RETURNTYPE METHOD1(DATATYPE PARAMETER DATATYPE PARAMETER);
};

Where anything in all capital letters is replaced with the information.  


Step 4  

In pet.h, define the Pet class methods:  

Pet()  
Pet(string, string)  
Pet(const Pet&)  

string getSpecies()    
void setSpecies(string) 

string getName()  
void setName(string)

void printPetData()  

Don't forget that getters, setters, and constructors, and any other method we want main to access should be public, but properties should not! This is to prevent others who might be coding with our Pet class from accidentally modifying the property of an object. Try compiling here and see what happens.    








Step 5  

In your cpp file, #include pet.h. Include your iostream libraries and the std namespace. For the rest of the steps don't forget your namespace (Pet::) on each method implemented in the cpp file, and don't forget to add spaces and a new line to your print statement. I usually copy and paste my declarations from the .h file into the .cpp file, add the namespace and variable names, and then implement the function body. It saves a lot of time, and stops you from making capitalization or naming typos.    

Step 6   

In pet.cpp, implement the class constructor methods from step 2. In other words, write your code for the functions declared in the .h file.    

There are 3 types of class constructors:  

Pet()  
This is the default constructor. It should set each of the class' properties to a default value. I typically set the defaults to be values that are noticable when debugging. For example, whenever I have an integer property, I typically set it to -1, so that if I create an object and display it and see -1, I notice that the properties have not updated correctly. However, in cases where you know a property will be the same value more often than not, you should use that value as your default.      

Pet(string, string)  
This is the parameterized constructor. It is used when you want to instantiate an object directly with the supplied parameters. You are allowed to have multiple parameterized constructors, if necessary. In your main, you have 2 pet objects (Gaston, and Fluffernutter) that were created with the values passed into them. The main is using a parameterized constructor.  You should use the parameterized constructor or the default constructor to create the Puff pet object described in later steps.  If you use the default constructor, you will need to call the setters for each property using the dot (.) operator, like so: puff.setSpecies("Dragon");

Pet(const Pet&)  
This is the copy constructor, it is used when you want to transfer the information from one object into another object at instantiation while using different memory addresses for the two objects.  

The compiler will implicitly define the default and copy constructors if we do not define them explicitly in our .h and .cpp files; however, it will not define the parameterized constructor which is usually very useful. If one constructor is explicitly defined, all three should be explicitly defined.  




Step 7

In pet.cpp, implement the getters and setters that were declared in the .h file. The convention is getPropertyName() and setPropertyName() when declaring and implementing getters and setters- as seen in the instructions provided to you here. Getters should always return the property named by the method, and setters should always fill a class property with the value passed to the method using the assignment operator. Not every program will explicitly use the getters and setters, but the getters and setters need to be available for every property, unless certain other conditions that we'll talk about later are met  .    

Step 8

In pet.cpp, implement printPetData(). It should display the pet name and species, with each pet on its own line (endl) and spaces between each property; see example output below.  

Gaston Dog  
Puff Dragon  
Fluffernutter Cat  

Since this method is in the pet class, you should be able to cout the name and species properties directly when this method is called.  

Step 9  

Alter main.cpp using the comments in the file. They are also provided here:  


1) Create a third Pet object, Puff. Puff is a Dragon.  
2) Create an array of pets that is MAX_SIZE (which I've already added to the main.)  
3) Loop through the array, and add pets to the array in the order Gaston, Puff, Fluffernutter until the array is full. You will need to implement some if/else if logic here. I recommend the modulo operator.    
4) In another loop, call the printPetData() method from the pet class on each pet in the array. The syntax is something like array[i].printPetData()  

Note: printPetData() directly outputs values, and returns void, so don't try to call cout on it directly. 

Run the make command to make sure your makefile works. Then, run tests to make sure you pass all tests. If you do not, use the output to fix your code.  



 Step 10 

Once you run the test executable and all tests are passed, remove all files from the folder that you want to submit other than the.cpp files, .h files, makefile, and tests. Then, zip the file by right clicking and selecting compress to create a .zip file. Submit the zip file on webcampus. Raise your hand for your instructor, who will come around and ask each of you to explain what the code is doing and what changes you made for your attendance grade.   


Remember: the labs are step by step instructions meant to prepare you for your programming assignments. While you are allowed to resubmit labs, it's better to finish them as they are assigned so that you don't struggle with the programming assignments and tests.  
