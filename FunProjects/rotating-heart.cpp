#include <cmath>
#include <chrono>
#include <iostream>
#include <thread>

#ifdef _WIN32
#include <conio.h>
#endif

namespace {
constexpr int WIDTH = 60;
constexpr int HEIGHT = 30;
constexpr double PI = 3.14159265358979323846;

bool isInsideHeart(double x, double y) {
    const double equation = std::pow(x * x + y * y - 1.0, 3.0)
                          - x * x * y * y * y;
    return equation <= 0.0;
}

bool quitRequested() {
#ifdef _WIN32
    if (_kbhit()) {
        const char key = static_cast<char>(_getch());
        return key == 'q' || key == 'Q';
    }
#endif
    return false;
}

void drawHeart(double angle) {
    const double rotation = std::cos(angle);

    std::cout << "\x1b[2J\x1b[H"
              << "Rotating Heart  |  press Q to quit\n\n";

    for (int row = 0; row < HEIGHT; ++row) {
        for (int column = 0; column < WIDTH; ++column) {
            const double screenX = (column - WIDTH / 2.0) / 18.0;
            const double screenY = (HEIGHT / 2.0 - row) / 12.0;
            const double visibleWidth = std::abs(rotation);

            if (visibleWidth < 0.08) {
                std::cout << (std::abs(screenX) < 0.07 && isInsideHeart(0.0, screenY)
                                  ? '|'
                                  : ' ');
                continue;
            }

            const double heartX = screenX / visibleWidth;
            if (!isInsideHeart(heartX, screenY)) {
                std::cout << ' ';
                continue;
            }

            const bool edge = std::abs(heartX * heartX + screenY * screenY - 1.0) < 0.18;
            std::cout << (edge ? '.' : '#');
        }
        std::cout << '\n';
    }
}
}  // namespace

int main() {
    std::cout << "\x1b[31m";

    for (double angle = 0.0; !quitRequested(); angle += PI / 24.0) {
        drawHeart(angle);
        std::this_thread::sleep_for(std::chrono::milliseconds(70));
    }

    std::cout << "\x1b[0m\x1b[2J\x1b[H";
    return 0;
}