#include <SFML/Graphics.hpp>
//#include "Pllo.h"

int main() {
	//Pllo pp(20);
	sf::RenderWindow window(sf::VideoMode(400, 400), "CC");//Creacion de la ventana y nombre de la misma
	sf::CircleShape boca(60.f); //Creacion y tamaño de la cabeza
	boca.setFillColor(sf::Color::Yellow);//color de la cabeza
	boca.setPosition(sf::Vector2f{ 200,60 });//posicion de la cabeza

	sf::CircleShape cuerpito(130.f); //Creacion y tamaño de la cabeza
	cuerpito.setFillColor(sf::Color::Yellow);//color de la cabeza
	cuerpito.setPosition(sf::Vector2f{ 100,120 });//posicion de la cabeza

	sf::CircleShape vedor(10.f); //Creacion y tamaño del ojo
	vedor.setFillColor(sf::Color::Black);//color del ojo
	vedor.setPosition(sf::Vector2f{ 230,70 });//posicion del ojo

	sf::CircleShape brillo(4.f);//Creacion y tamaño del brillo en el ojo
	brillo.setFillColor(sf::Color::White);//color del brillo en el ojo
	brillo.setPosition(sf::Vector2f{ 230,70 });//posicion del brillo en el ojo

	sf::RectangleShape Pico({ 20.f,20.f });//Creacion y tamaño del pico
	Pico.setFillColor(sf::Color::Red);//color del pico
	Pico.setPosition(sf::Vector2f{ 300,85 });//posicion del pico
	Pico.setRotation(45.f);//rotacion del pico

	sf::RectangleShape patitas({ 16.f,35.f });//Creacion y tamaño del pico
	patitas.setFillColor(sf::Color::Red);//color del pico
	patitas.setPosition(sf::Vector2f{ 225,350 });//posicion del pico
	patitas.setRotation(90.f);//rotacion del pico

	sf::RectangleShape pie({ 16.f,35.f });//Creacion y tamaño del pico
	pie.setFillColor(sf::Color::Red);//color del pico
	pie.setPosition(sf::Vector2f{ 190,318 });//posicion del pico

	sf::RectangleShape patitas2({ 16.f,35.f });//Creacion y tamaño del pico
	patitas2.setFillColor(sf::Color::Red);//color del pico
	patitas2.setPosition(sf::Vector2f{ 325,350 });//posicion del pico
	patitas2.setRotation(90.f);//rotacion del pico

	sf::RectangleShape pie2({ 16.f,35.f });//Creacion y tamaño del pico
	pie2.setFillColor(sf::Color::Red);//color del pico
	pie2.setPosition(sf::Vector2f{ 290,318 });//posicion del pico

	sf::RectangleShape tapapico({ 16.f,30.f });//Creacion y tamaño del pico
	tapapico.setFillColor(sf::Color::Yellow);//color del pico
	tapapico.setPosition(sf::Vector2f{ 280,84 });//posicion del pico

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		//se limpia pantalla y empieza a dibujar las figuras
		window.clear();
		window.draw(boca);
		window.draw(cuerpito);
		window.draw(vedor);
		window.draw(brillo);
		window.draw(Pico);
		window.draw(patitas);
		window.draw(pie);
		window.draw(patitas2);
		window.draw(pie2);
		window.draw(tapapico);
		window.display();
	}

	return 0;
}