//
//
#ifndef BrachyUserScoreWriter_h
#define BrachyUserScoreWriter_h 1

#include "globals.hh"
#include "G4VScoreWriter.hh"

// class description:
//
//This class represents storing the scored quantity into a file.
//
class UserScoreWriter:public G4VScoreWriter
{
public:
  UserScoreWriter();
  virtual ~UserScoreWriter();

public:
  // store a quantity into a file
  void DumpQuantityToFile(const G4String & psName, 
                          const G4String & fileName, 
                          const G4String & option);


};
#endif
