#include <iostream>
#include <string>

using namespace std;


struct animal
{ 
    string animalName;
    struct animal *next;
}*startExploration;



class jungleExplorer{
    public:
        animal* create_animalfound(string animalName);
        void addAnimal(); //implement this using above struct
        void countAnimal(); // implement this using above struct
        void uniqueAnimalsFound(); //implement this using above struct
        jungleExplorer() 
        {

            startExploration = NULL;

        }

};

main()
{
    addAnimal("ant");
    addAnimal("giraffee");
    addAnimal("cartoon");
    addAnimal("camel");
    countAnimal();
    uniqueAnimalsFound();
}