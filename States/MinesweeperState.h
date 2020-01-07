#pragma once

#include "State.h"

namespace GameEngine {
    class MinesweeperState : public State {
    public:
        int Run(RenderWindow&) override;

    private:
        RenderWindow* _window;

        void draw() override;
        void init() override;
    };
}