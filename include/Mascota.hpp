#include <string>
#include <Mascota.hpp>

Class Mascota
{
private:
    int hambre;
    std::string nombre;

public:
    Mascota(std::string nombre)
    {
        this->hambre = 0;
        this->nombre = nombre;
    }

    ~Mascota() {}
    void Jugar()
    {
        this->hambre += 5;
    }
    void Comer(int comida)
    {
        this->hambre -= comida;
    }

    std::string DecirNombre(){
        return this->nombre;

    }

    int DecirNombre(){
        return this->hambre;
    }

};

int main(int argc, char const *argv[])
{
    std::cout<<"Juego de mascota"<<std::endl;


    return 0;
}
