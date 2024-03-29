#include "GenerateMazeCommand.h"
#include "MyMaze2dGenerator.h"  
#include "Maze2d.h"             
#include <string>               

void GenerateMazeCommand::execute() {
    
    MyMaze2dGenerator generator; 
    Maze2d maze = generator.generate(width, height); 

    // Store the generated maze with the specified name
    mazeStorage.addMaze(mazeName, maze); 

   
    std::string message = "Maze " + mazeName + " has been generated successfully!";
    view.displayMessage(message);
}
