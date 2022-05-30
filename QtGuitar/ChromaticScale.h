#ifndef CHROMATICSCALE_H
#define CHROMATICSCALE_H

#include<array>
#include<iostream>
#include<map>

class ChromaticScale
{
public:
    ChromaticScale(std::string keyNote = "C");

    void setChromaticScale(int index);
    std::array<std::string,12> getChromaticScale();

    //use pending maybe for chords
    std::map<std::string,int> getNoteOrderMap();

private:
    std::string keyNote;
    std::array<std::string,12> baseScale = {"C","C#","D","D#","E","F","F#","G","G#","A","A#","B"};
    std::map<std::string,int> baseOrderMap = { {"C", 0}, {"C#", 1},{"D", 2},{"D#", 3},{"E", 4},{"F", 5},
                                            {"F#", 6},{"G", 7},{"G#", 8},{"A", 9},{"A#", 10},{"B", 11}};

    std::array<std::string,12> chromaticScale;


    //use pending maybe for chords
    std::map<std::string,int> noteOrderMap = { {"KEYNOTE", 0}, {"SECOND", 2},{"MINOR_THIRD", 3},{"MAJOR_THIRD", 4},{"FOURTH", 5},{"DIMINISHED_FIFTH", 6},
                                               {"FIFTH", 7}, {"AUGMENTED_FIFTH", 8}, {"SIXTH", 9}, {"MINOR_SEVENTH", 10}, {"MAJOR_SEVENTH", 11},
                                               {"NINTH", 2}, {"ELEVENTH",4}, {"THIRTEENTH",9}};

};

#endif // CHROMATICSCALE_H
