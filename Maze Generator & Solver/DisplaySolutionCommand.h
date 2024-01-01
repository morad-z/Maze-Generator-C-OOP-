#ifndef DISPLAY_SOLUTION_COMMAND_H
#define DISPLAY_SOLUTION_COMMAND_H

#include "Command.h"
#include "CLIView.h"
#include "SolutionStorage.h"

class DisplaySolutionCommand : public Command {
private:
    CLIView& view;
    SolutionStorage& solutionStorage;
    std::string mazeName; // Name of the maze whose solution we want to display

public:
    DisplaySolutionCommand(CLIView& v, SolutionStorage& ss);
    void execute() override;
    std::string getName() const override { return "display solution"; }
    void setMazeName(const std::string& name);

};

#endif // DISPLAY_SOLUTION_COMMAND_H
