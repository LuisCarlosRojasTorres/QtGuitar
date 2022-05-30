#include "ChromaticScale.h"

ChromaticScale::ChromaticScale(std::string keyNote)
    : keyNote(keyNote)
{
    int index = baseOrderMap[keyNote];
    setChromaticScale(index);
}

std::map<std::string, int> ChromaticScale::getNoteOrderMap()
{
    return noteOrderMap;
}

void ChromaticScale::setChromaticScale(int index)
{
    for(int i =0; i<12;i++){
        chromaticScale[i] = baseScale[(index + i)%12];
    }
}

std::array<std::string, 12> ChromaticScale::getChromaticScale()
{
    return chromaticScale;
}
