#include <cleantype/cleantype_compile_time.hpp>
#include <map>
#include <vector>
#include <string>

int main()
{
    //cleantype::ERROR_full<std::map<int, std::vector<std::string>>>();
    using T = std::map<int, std::vector<std::string>>;
    //TN_ERROR_full(T);
}
