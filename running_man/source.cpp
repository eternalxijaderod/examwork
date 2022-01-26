#include <SFML/Graphics.hpp>
#include <windows.h>

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(626, 417), "Animation!");

	Texture M1;
	Texture M2;
	Texture M3;
	Texture M4;
	Texture M5;
	Texture M6;
	Texture M7;
	Texture M8;
	Texture M9;
	Texture M10;
	Texture run;

	if ((!run.loadFromFile("img\\run.jpg")) || (!M1.loadFromFile("img\\1.png")) || (!M2.loadFromFile("img\\2.png")) || (!M3.loadFromFile("img\\3.png")) || (!M4.loadFromFile("img\\4.png")) || (!M5.loadFromFile("img\\5.png")) || (!M6.loadFromFile("img\\6.png")) || (!M7.loadFromFile("img\\7.png")) || (!M8.loadFromFile("img\\8.png")) || (!M9.loadFromFile("img\\9.png")) || (!M10.loadFromFile("img\\10.png")))
	{
		return -1;
	}

	Sprite m1(M1);   // Sprite это некоторый обьект обладающий координатами и размерами (мы берем текстуру Sky и помещаем ее внутрь этого обьекта)
	Sprite m2(M2);
	Sprite m3(M3);
	Sprite m4(M4);
	Sprite m5(M5);
	Sprite m6(M6);
	Sprite m7(M7);
	Sprite m8(M8);
	Sprite m9(M9);
	Sprite m10(M10);
	Sprite backgr(run);

	int i = 0;

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		i++;
		window.clear(Color::White);
		window.draw(backgr);
		switch (i)
		{
		case 1:
		{
			m1.setPosition(100, 80);
			window.draw(m1);  
			break;
		}
		case 2:
		{
			m2.setPosition(100, 80);
			window.draw(m2);  
			break;

		}
		case 3:
		{
			m3.setPosition(100, 80);
			window.draw(m3);  
			break;
		}
		case 4:
		{
			m4.setPosition(100, 80);
			window.draw(m4); 
			break;
		}
		case 5:
		{
			m5.setPosition(100, 80);
			window.draw(m5);  
			break;
		}
		case 6:
		{
			m6.setPosition(100, 80);
			window.draw(m6); 
			break;
		}
		case 7:
		{
			m7.setPosition(100, 80);
			window.draw(m7);  
			break;
		}
		case 8:
		{
			m8.setPosition(100, 80);
			window.draw(m8);  
			break;
		}
		case 9:
		{
			m9.setPosition(100, 80);
			window.draw(m9);  
			break;
		}
		case 10:
		{
			m10.setPosition(100, 80);
			window.draw(m10);  
			break;
		}
		default:
			i = 0;
			break;
		}
		Sleep(50);

		//window.draw(man);
		window.display();
	}
	return 0;
}