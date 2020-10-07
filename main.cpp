#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    //Create the window
    RenderWindow window(VideoMode(800, 600), "Window");

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
        window.clear(Color::Black);

        //Create circle shape 
        CircleShape shape(50.0f);
        shape.setFillColor(Color(100,150,250));     //Set color to the circle
        
        //Draw object 'shape'
        window.draw(shape);


        //end the current frame
        window.display();
    }

    return 0;
}