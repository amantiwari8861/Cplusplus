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
    AquaticAnimal()
    {
        habitat="water";
    }
    void showAquaticAnimProperty()
    {
        cout<<" our habitat "<<habitat<<endl;
    }
};
class Amphibians:public TerrestialAnimal,public AquaticAnimal
{
    public:
    string respiratoryOrgan;
    Amphibians()
    {
        respiratoryOrgan="lungs or Skin or gills";
    }
    void showAmphibiansProp()
    {
        cout<<" Respiratory organ is "<<respiratoryOrgan;
    }
};
int main()
{
    Amphibians croc;
    croc.showTerrestialRespiratoryOrgan();
    croc.showAquaticAnimProperty();
    croc.showAmphibiansProp();
    return 0;
}