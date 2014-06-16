#pragma once
#include <iostream>
using namespace std;
//---------------------------------------------------------
struct Token
{
	unsigned int line_number;
	string lexeme;
	TokenType type;
};
//---------------------------------------------------------
enum TokenType{ TAG_OPEN, TAG_CLOSE, VALUE };
//-----------------------------------------------------------
class XML
{
private:
	istream* p_is;
	unsigned int line_number;
	string current_line;
	Token current_token;
public:
	// Name: XML
	// Description: XML constructor
	// Arguments: None
	// Returns: This pointer to object
	// Pre-conditions: None
	// Post-conditions: None
	// Throws:
	XML(istream&);
	
	// Name: ~XML 
	// Description:	XML destructor
	// Arguments: None
	// Returns: None
	// Pre-conditions: None
	// Post-conditions: None
	// Throws:
	~XML();
	
	// Name: writeValue
	// Description: writes value to XML file
	// Arguments: ostream& os, unsigned int level, string value
	// Returns: None
	// Pre-conditions: None
	// Post-conditions: None
	// Throws:
	static void writeValue(ostream&, unsigned int, string);
	
	// Name: writeTagOpen
	// Description: 
	// Arguments:ostream& os, usigned int level, string tag_name
	// Returns: None
	// Pre-conditions:
	// Post-conditions:
	// Throws:
	static void writeTagOpen(ostream&, unsigned int, string);
	
	// Name: writeTagOpen
	// Description:
	// Arguments: ostream& os, unsigned int level, string tag_name
	// Returns: None
	// Pre-conditions:
	// Post-conditions:
	// Throws:
	static void writeTagClose(ostream&, unsigned int, string);
	
	// Name: getToken
	// Description: Gets the token
	// Arguments: None
	// Returns: A token
	// Pre-conditions:
	// Post-conditions:
	// Throws:
	Token getToken();
	
	// Name: nextToken 
	// Description: gets next token
	// Arguments: None
	// Returns: None
	// Pre-conditions:
	// Post-conditions:
	// Throws:
	void nextToken();
	
	// Name: putBack
	// Description:
	// Arguments: string value
	// Returns:
	// Pre-conditions: 
	// Post-conditions:
	// Throws:
	void putBack(string);
};

