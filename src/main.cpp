
#include <iostream>

int main(int argc, char const *argv[])
{

    std::cout<<"Juego de mascotas"<<std::endl;
    Mascota m1("Ketzel bb");
    m1.jugar();
    m1.jugar();
    m1.jugar();

    std:: cout<<m1.DecirNombre()<<"tiene"
    <<m1.DecirHambre()<<"de hambre.";

    m1.jugar(5);

    return 0;
}

// ls -> listar
// cd src ->
