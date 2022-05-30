#include "Scale.h"

Scale::Scale(std::string keyNote, std::vector<int> scalePattern)
    :
    ChromaticScale(keyNote), scalePattern(scalePattern)
{
    for(auto step : this->scalePattern){
        scale.push_back(getChromaticScale()[step]);
    }
}

void Scale::printScale()
{
    std::cout << "Scale:" << std::endl;
    for(auto note : scale){
        std::cout << note << "  ";
    }
    std::cout << "\n";
}
