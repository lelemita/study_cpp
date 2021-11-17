#include <iostream>
#include <thread>
#include <fmt/core.h>
#include "shape.h"

Rectangle::Rectangle(int width, int height)
    : width_(width)
    , height_(height) {}

int Rectangle::GetSize() const
{
    std::thread t([this]() {
        std::cout << "Calculate .." << std::endl;
    });
    t.join();

    fmt::print("width: {} \n", width_ * height_);

    return width_ * height_;
}
