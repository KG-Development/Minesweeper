#include "Settings.h"
#include <cstdlib>
#include <time.h>

Settings::Settings(Difficulty diff) : difficulty(diff) {
    switch (diff) {
        case Beginner:
            this->sizeLength = 8;
            this->sizeWidth = 8;
            this->percentageMines = 16;

        case Medium:
            this->sizeLength = 16;
            this->sizeWidth = 16;
            this->percentageMines = 16;

        case Professional:
            this->sizeLength = 30;
            this->sizeWidth = 16;
            this->percentageMines = 21;

    }
    this->fullGridSize = this->sizeLength * this->sizeWidth;
    srand(time(NULL));
    this->numberOfMines = ((this->sizeLength * this->sizeWidth) * (rand() % this->percentageMines)) / 100;
}

int Settings::getLength() const {
    return this->sizeLength;
}

int Settings::getWidth() const {
    return this->sizeWidth;
}

Difficulty Settings::getDifficulty() const {
    return this->difficulty;
}

int Settings::getNumberOfMines() const {
    return this->numberOfMines;
}

int Settings::getPercentageMines() const {
    return this->percentageMines;
}
