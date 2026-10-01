# Music Library
I want to make a program that acts sort of like a playlist. It will play a song, display the details of the artist/band that made it, and you can cycle through the playlist to see each song.
# Additional Classes
- GroupArtist
- SoloArtist
- Band
## Requirements
- Identify at least one new class that will be a derived class, inheriting from another base class. Use public inheritance to extend functionality.
    - Both GroupArtist and SoloArtist inherit from the Artist class. This made it simple to have all the default variables (name, genre, etc.) in the base class and just build off of that.
- Ensure each class has a constructor and destructor. For classes involved in inheritance, ensure the constructor calls the base class constructor properly using an initializer list.
- Each new class should have a copy constructor. 
- Implement at least one virtual function in a base class that can be overridden by a derived class, enabling runtime polymorphism.
    - The display function in both SoloArtist and GroupArtist overrides the base Display function in the Artist class. Since a GroupArtist will have different variables than a SoloArtist, it needs to display different things.
- Include private member variables and protected members if inheritance will be used, ensuring derived classes can access needed data.
- Add at least one friend function to a class, allowing external functions or other classes to access private members when necessary.
- Making one of the new classes abstract by including at least one pure virtual function, which must be overridden by any derived class.
    - The Artist class Display function is virtual since the Display function will never be called unless it's being overriden in a child class.


![UML Diagram](umlDiagram.png)
