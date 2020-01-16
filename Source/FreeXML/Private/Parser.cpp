// Copyright by Free2Play-Entertainment (2020)


#include "Parser.h"
#include "Misc/Paths.h"

/* Creates a UParser object */
UParser* UParser::CreateParser()
{
    return NewObject<UParser>();
}

/* Tries to load an xml file */
bool UParser::LoadFile(const FString Path)
{
    if(!FPaths::FileExists(Path))
    {
        return false;
    }
    CurrentFile = new FXmlFile(Path);
    return CurrentFile->IsValid();
}

/* Unloads a file */
void UParser::UnloadFile()
{
    CurrentFile->~FXmlFile();
}