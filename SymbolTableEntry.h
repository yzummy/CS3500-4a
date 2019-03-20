#ifndef SYMBOL_TABLE_ENTRY_H
#define SYMBOL_TABLE_ENTRY_H

#include <string>
using namespace std;

#define UNDEFINED       -1
#define FUNCTION        0
#define INT             1
#define STR             2
#define BOOL            3
#define FLOAT           4
#define LIST            5
#define NULL_TYPE       6
#define INT_OR_STR_OR_BOOL_OR_FLOAT 7
#define LOGICAL         8
#define ARITHMETIC      9
#define NOT_APPLICABLE  -1


typedef struct
{
    int type;
    int numParams;
    int returnType;
} TYPE_INFO;



class SYMBOL_TABLE_ENTRY
{
private:
  // Member variables
  string name;
  TYPE_INFO typeInfo;

public:
  // Constructors
  TYPE_INFO defaultType = {NOT_APPLICABLE, NOT_APPLICABLE, NOT_APPLICABLE};
  SYMBOL_TABLE_ENTRY( ) { name = ""; typeInfo = defaultType; }

  SYMBOL_TABLE_ENTRY(const string theName, const TYPE_INFO theTypeInfo)
  {
    name = theName;
    typeInfo = theTypeInfo;
  }

  // Accessors
  string getName() const { return name; }
  TYPE_INFO getTypeInfo() const { return typeInfo; }
};

#endif  // SYMBOL_TABLE_ENTRY_H
