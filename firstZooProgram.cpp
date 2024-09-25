#include <iostream>
#include <list>

using namespace std;

class Animal {

// Create constructors for our class.
public:
    Animal(string aName) {
        name = aName;
        origin = "someplace far away";
    }

    Animal() {
        age = 0;
        sex = "unknown";
        weight = 0;
        birthDate = "unknown";
        color = "unknown";
        name = "toBeNamed";
        origin = "someWhere";
    }



    int age;
    string sex;
    int weight;
    string birthDate;
    string color;
    string name;
    string origin;
};

class Hyena : public Animal {
    // Create a constructor that uses the super class's constructor
    public:
    Hyena(string someName) : Animal(someName) {

    }
    Hyena() : Animal()   {}

};


int main() {
    cout << "\n Welcome to my Zoo program!\n";

    // Create a NEW animal
    // the new keyword allocates memory on the heap and returns the address of the object.
    Animal* myAnimal = new Animal();


    myAnimal->age = 10;
    myAnimal->color = "red";
    myAnimal->name = "Bob";
    myAnimal->sex = "male";
    myAnimal->weight = 20;
    myAnimal->birthDate = "2021";

    cout << "\n This is my animal  (created with 'new'):\n";

    cout << "age: " << myAnimal->age << " color: " << myAnimal->color << " birthdate: " << myAnimal->birthDate << "\n";

    // Create another animal without using a pointer and new
    Animal anotherAnimal;

    anotherAnimal.age = 10;
    anotherAnimal.color = "red";
    anotherAnimal.birthDate = "2021";

    cout << "\n This is anotherAnimal:\n";
    cout << "age: " << anotherAnimal.age << " color: " << anotherAnimal.color << " birthdate: " << anotherAnimal.birthDate << "\n";

    // Create an animal with a name.
    Animal* animalWithAName = new Animal("Leo");
    cout << "\n This is an animal with a name:\n";
    cout << "name: " << animalWithAName->name << "\n";

    // Create an animal with the default constructor
    Animal* animalWithDefaultConstructor = new Animal();

    cout << "\n This is an animal with a defaultConstructor:\n";
    cout << "age: " << animalWithDefaultConstructor->age << " name: " << animalWithDefaultConstructor->name;

    // Create a hyena
    Hyena* myNewHyena = new Hyena("Zig");
    cout << "\n This is a Hyena:\n";
    cout << "origin: " << myNewHyena->origin << " name: " << myNewHyena->name << "\n";

    Hyena* myNewHyena2 = new Hyena();
    cout << "\n This is myNewHyena2:\n";
    cout << "name: " << myNewHyena2->name << "\n";




    return 0;
}
