#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Command.h"
#include "CLIView.h"
#include "MyMaze2dGenerator.h"
#include "MazeStorage.h"
#include "SolutionStorage.h"
#include "MazeFileManager.h"
#include "MazeCompression.h"
#include "DisplaySolutionCommand.h"
#include <unordered_map>
#include <memory>

class Controller {
private:
    CLIView view;
    MazeStorage mazeStorage;
    MazeFileManager mazeFileManager;
    SolutionStorage solutionStorage;  
    DisplaySolutionCommand displaySolutionCommand;  
    std::unordered_map<std::string, std::unique_ptr<Command>> commands;

public:
    Controller();
    void executeCommand(const std::string& cmdName);
};

#endif // CONTROLLER_H
