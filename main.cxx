#include <iostream>
#include <string>

int main(int N_of_Arguments, char *commandLineArguments[]) {
  if (N_of_Arguments == 3) {
    std::string clArgument1{commandLineArguments[0]};
    auto clArgument2{*(commandLineArguments[1])};
    auto size_clArgument1{clArgument1.size()};
    auto clArgument3asInt{std::atoi(commandLineArguments[2])};
    auto var6{0};
    auto var7{0};
    std::string clArgument2asString{commandLineArguments[1]};
    while (true) {
      var6 += clArgument2asString[var7++];
      if (var7 >= static_cast<int>(clArgument2asString.size())) {
        break;
      }
    }
    if ((var6 ^ clArgument2 * 3) << (size_clArgument1 & 0x1f) == clArgument3asInt) {
      std::cout << "Correct!" << std::endl;
    } else {
      std::cout << "Wrong!" << std::endl;
    }
  }
}