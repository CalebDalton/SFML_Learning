#include <SFML/Graphics.hpp>

using namespace sf;

/*class MakeSquare {
    public:

};*/

int main()
{
    //Create the window
    RenderWindow window(VideoMode(1270, 720), "Window");
    
    //Create circle shape 
    CircleShape shape(50.0f);
    shape.setFillColor(Color(100,150,250));     //Set color to the circle
    shape.setOutlineThickness(-10.f);
    shape.setOutlineColor(Color(100,150,250));
    shape.setPointCount(100);
    shape.setOutlineColor(Color::Transparent);
    shape.setOrigin(shape.getRadius(), shape.getRadius());
    
    //Run the program while the window is open
    while (window.isOpen()) {
        //Check window's events that were triggered since last iteration of the loop
        Event event;
        while (window.pollEvent(event)) {
            //Close the window on close request event
            if (event.type == Event::Closed) 
                window.close();           
        }

        //clear the window with a black color
        //window.clear(Color::Black);

        if (Mouse::isButtonPressed(Mouse::Left)) {
            Vector2i mousePos = Mouse::getPosition(window);
            shape.setPosition(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
            //Draw object 'shape'
            window.draw(shape);
        }


        


        //end the current frame
        window.display();
    }

    return 0;
}