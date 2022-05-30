#ifndef SCALE_H
#define SCALE_H

#include <vector>
#include "ChromaticScale.h"

class Scale : public ChromaticScale
{
public:    
    Scale(std::string keyNote, std::vector<int> scalePattern);
    void printScale();
private:
    std::vector<std::string> scale;
    std::vector<int> scalePattern;
};

#endif // SCALE_H
