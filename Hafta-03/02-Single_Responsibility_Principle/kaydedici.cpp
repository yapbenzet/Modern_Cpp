
#include "kaydedici.h"

kaydedici::kaydedici() {}

void kaydedici::save(const gunluk &g, const std::string &filename)
{
    std::ofstream ofs(filename);
    for (auto& s : g.entries){
        ofs << s << std::endl;
        std::cout << s << std::endl;
    }
}
