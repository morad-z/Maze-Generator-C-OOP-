#ifndef SOLVE_MAZE_COMMAND_H
#define SOLVE_MAZE_COMMAND_H

#include "Command.h"
#include "CLIView.h"
#include "MazeStorage.h"
#include "SolutionStorage.h"
#include "BFS.h"
#include "AStar.h"

class SolveMazeCommand : public Command {
private:
    CLIView& view;
    MazeStorage& mazeStorage;
    SolutionStorage& solutionStorage;
    std::string mazeName;
    std::string algorithm;

public:
    SolveMazeCommand(CLIView& v, MazeStorage& ms, SolutionStorage& ss);

    void execute() override;
    std::string getName() const override { return "solve"; }

    void setDetails(const std::string& name, const std::string& algo);
};

#endif // SOLVE_MAZE_COMMAND_H
