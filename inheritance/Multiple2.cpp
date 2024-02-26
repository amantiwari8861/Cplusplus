#include<iostream>
using namespace std;

class TerrestialAnimal
{
    public:
    string breatheOrgan;
    TerrestialAnimal()
    {
        breatheOrgan="Lungs";
    }
    void showTerrestialRespiratoryOrgan()
    {
        cout<<" We have "<<breatheOrgan<<endl;
    }
};
class AquaticAnimal
{
    public:
    string habitat;
    string breatheOrgan;
    AquaticAnimal()
    {
        habitat="water";
        breatheOrgan="skin or gills";
    }
    void showAquaticAnimProperty()
    {
        cout<<" our habitat "<<habitat<<endl;
    }
};
class Amphibians:public TerrestialAnimal,public AquaticAnimal
{
    public:
    // string breatheOrgan;
    string habitat;
    Amphibians()
    {
        // breatheOrgan="lungs or Skin or gills";
        habitat="land and water";
    }
    void showAmphibiansProp()
    {
        // cout<<" Respiratory organ is "<<breatheOrgan<<endl;
        cout<<" Habitat is "<<habitat<<endl;
    }
};
int main()
{
    Amphibians frog;
    // frog.showTerrestialRespiratoryOrgan();
    // frog.showAquaticAnimProperty();
    frog.showAmphibiansProp();
    // cout<<frog.breatheOrgan; //ambiguity


    return 0;
}