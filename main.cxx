#include <iostream>
#include <string>

int Sum_Complement(std::string clArgument2asString) {
  auto SumOfArgument2_ASCII{0};

  for (auto i{0}; i <= static_cast<int>(clArgument2asString.size()); i++) {
    SumOfArgument2_ASCII += clArgument2asString[i];
  }
  
  return SumOfArgument2_ASCII;
}

int main(int N_of_Arguments, char *commandLineArguments[]) {
  if (N_of_Arguments == 3) {
    std::string clArgument1{commandLineArguments[0]};
    auto clArgument2{*(commandLineArguments[1])};
    auto size_clArgument1{clArgument1.size()};
    auto clArgument3asInt{std::atoi(commandLineArguments[2])};

    std::string clArgument2asString{commandLineArguments[1]};
    auto SumOfArgument2_ASCII = Sum_Complement(clArgument2asString);

    if ((SumOfArgument2_ASCII ^ clArgument2 * 3) << (size_clArgument1 & 0x1f) == clArgument3asInt) {
      std::cout << "Correct!" << std::endl;
    } else {
      std::cout << "Wrong!" << std::endl;
    }
  }
}