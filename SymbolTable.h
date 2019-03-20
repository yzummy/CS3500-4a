#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <map>
#include <string>
#include "SymbolTableEntry.h"
using namespace std;


class SYMBOL_TABLE
{
private:
  std::map<string, TYPE_INFO> hashTable;

public:
  //Constructor
  SYMBOL_TABLE( ) { }

  // Add SYMBOL_TABLE_ENTRY x to this symbol table.
  // If successful, return true; otherwise, return false.
  bool addEntry(SYMBOL_TABLE_ENTRY x)
  {
    // Make sure there isn't already an entry with the same name
    map<string, TYPE_INFO>::iterator itr;
    if ((itr = hashTable.find(x.getName())) == hashTable.end())
    {
      hashTable.insert(make_pair(x.getName(), x.getTypeInfo()));
      return(true);
    }
    else return(false);
  }

  // If a SYMBOL_TABLE_ENTRY with name theName is
  // found in this symbol table, then return true;
  // otherwise, return false.
  TYPE_INFO findEntry(string theName)
  {
    map<string, TYPE_INFO>::iterator itr;
    TYPE_INFO defaultType = {NOT_APPLICABLE, NOT_APPLICABLE, NOT_APPLICABLE};
    if ((itr = hashTable.find(theName)) == hashTable.end())
      return(defaultType);
    else return(itr->second);
  }

};

#endif  // SYMBOL_TABLE_H
