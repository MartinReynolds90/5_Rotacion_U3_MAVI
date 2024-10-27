#include "SFML/Graphics.hpp"
#include "iostream"

using namespace sf;
using namespace std;

//Rotacion - Rotacion - Rotacion - Rotacion - Rotacion - Rotacion - Rotacion - Rotacion - Rotacion - Rotacion - ///////////////////////////////
int main(){
    RenderWindow ventana(VideoMode(800, 600),"Rotación");
	Event evento;
	
	cout<<"PRESIONE [A] o [D] PARA ROTAR EL CUADRO."<<endl;
		
	Texture tx_rotacion;
	tx_rotacion.loadFromFile("cuad_blue.png");
	Sprite sprite_rotacion;  
	sprite_rotacion.setTexture(tx_rotacion);
	sprite_rotacion.setPosition(Vector2f(450,250));	
	sprite_rotacion.setScale(0.5,0.5);
	
		
	while(ventana.isOpen()){
		while(ventana.pollEvent(evento)){
			if(evento.type == Event::KeyPressed){
				if(evento.key.code == Keyboard::A){
					sprite_rotacion.rotate(15);
					
				}
				if(evento.key.code == Keyboard::D){
					sprite_rotacion.rotate(-15);
					
				}
				
			}
			
		}
		ventana.clear(Color::White);
		ventana.draw(sprite_rotacion);
		ventana.display();
		
	}
	
	return 0;
	
}