#include <map> 
#include <sstream> 


const int MAX_JUGADORES = 4;
struct tJugador {
    int casilla;
    int turnos;
};

struct listaJugadores {
    tJugador aJugadores[MAX_JUGADORES];
    int cont;
};

listaJugadores jugarPartida(std::stringstream &);

