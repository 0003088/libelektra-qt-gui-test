#include "parser.hpp"

#include <fstream>
#include <iostream>

using namespace std;

ostream& operator << (ostream& os, parse_t& p)
{
	os << "/*This is an auto-generated file generated by exporterrors. Do not modify it.*/" << endl
	   << endl
	   << "#ifndef KDBERRORS_H" << endl
	   << "#define KDBERRORS_H" << endl
	   << endl
	   << "#include <kdb.h>" << endl
	   << "#include <string.h>" << endl
	   << endl
	   << "#define ELEKTRA_SET_ERROR(number, key, text) ELEKTRA_SET_ERROR_HELPER\\" << endl
	   << "	(number, key, text, __FILE__, __LINE__)" << endl
	   << endl
	   << "#define ELEKTRA_SET_ERROR_HELPER(number, key, text, file, line) ELEKTRA_SET_ERROR_HELPER_HELPER\\" << endl
	   << "	(number, key, text, file, line)" << endl
	   << endl
	   << "#define ELEKTRA_SET_ERROR_HELPER_HELPER(number, key, text, file, line) elektraSetError ## number\\" << endl
	   << "	(key, text, file, #line)" << endl
	   << endl
	   << endl
	   << "#define ELEKTRA_ADD_WARNING(number, key, text) ELEKTRA_ADD_WARNING_HELPER\\" << endl
	   << "	(number, key, text, __FILE__, __LINE__)" << endl
	   << "" << endl
	   << "#define ELEKTRA_ADD_WARNING_HELPER(number, key, text, file, line) ELEKTRA_ADD_WARNING_HELPER_HELPER\\" << endl
	   << "	(number, key, text, file, line)" << endl
	   << "" << endl
	   << "#define ELEKTRA_ADD_WARNING_HELPER_HELPER(number, key, text, file, line) elektraAddWarning ## number\\" << endl
	   << "	(key, text, file, #line)" << endl
	   << endl
	   << endl;

	for (size_t i = 1; i<p.size(); ++i)
	{
		if (p[i]["severity"] == "warning")
		{
		os << "static inline void elektraAddWarning" << i << "(Key *warningKey, const char *reason," << endl
		   << "	const char *file, const char *line)" << endl
		   << "{" << endl
		   << "	if (!warningKey) return;" << endl
		   << "" << endl
		   << "	char buffer[] = \"warnings/#00\\0description\";" << endl
		   << "	const Key *meta = keyGetMeta(warningKey, \"warnings\");" << endl
		   << "	if (meta)" << endl
		   << "	{" << endl
		   << "		buffer[10] = keyString(meta)[0];" << endl
		   << "		buffer[11] = keyString(meta)[1];" << endl
		   << "		buffer[11]++;" << endl
		   << "		if (buffer[11] > '9')" << endl
		   << "		{" << endl
		   << "			buffer[11] = '0';" << endl
		   << "			buffer[10]++;" << endl
		   << "			if (buffer[10] > '9') buffer[10] = '0';" << endl
		   << "		}" << endl
		   << "		keySetMeta(warningKey, \"warnings\", &buffer[10]);" << endl
		   << "	} else  keySetMeta(warningKey, \"warnings\", \"00\");" << endl
		   << "" << endl
		   << "	keySetMeta(warningKey, buffer, \"number description ingroup module file line function reason\");" << endl
		   << "	strncat(buffer, \"/number\" , sizeof(buffer));" << endl
		   << "	keySetMeta(warningKey, buffer, \"" << i << "\");" << endl
		   << "	buffer[12] = '\\0'; strncat(buffer, \"/description\" , sizeof(buffer));" << endl
		   << "	keySetMeta(warningKey, buffer, \"" << p[i]["description"] << "\");" << endl
		   << "	buffer[12] = '\\0'; strncat(buffer, \"/ingroup\" , sizeof(buffer));" << endl
		   << "	keySetMeta(warningKey, buffer, \"" << p[i]["ingroup"] << "\");" << endl
		   << "	buffer[12] = '\\0'; strncat(buffer, \"/module\" , sizeof(buffer));" << endl
		   << "	keySetMeta(warningKey, buffer, \"" << p[i]["module"] << "\");" << endl
		   << "	buffer[12] = '\\0'; strncat(buffer, \"/file\" , sizeof(buffer));" << endl
		   << "	keySetMeta(warningKey, buffer, file);" << endl
		   << "	buffer[12] = '\\0'; strncat(buffer, \"/line\" , sizeof(buffer));" << endl
		   << "	keySetMeta(warningKey, buffer, line);" << endl
		   << "	buffer[12] = '\\0'; strncat(buffer, \"/reason\" , sizeof(buffer));" << endl
		   << "	keySetMeta(warningKey, buffer, reason);" << endl
		   << "}" << endl
		   << endl;
		} else {
		os << "static inline void elektraSetError" << i << "(Key *errorKey, const char *reason," << endl
		   << "	const char *file, const char *line)" << endl
		   << "{" << endl
		   << "	if (!errorKey) return;" << endl
		   << "	keySetMeta(errorKey, \"error\", \"" << "number description ingroup module file line function reason" << "\");" << endl
		   << "	keySetMeta(errorKey, \"error/number\", \"" << i << "\");" << endl
		   << "	keySetMeta(errorKey, \"error/description\", \"" << p[i]["description"] << "\");" << endl
		   << "	keySetMeta(errorKey, \"error/ingroup\", \"" << p[i]["ingroup"] << "\");" << endl
		   << "	keySetMeta(errorKey, \"error/module\", \"" << p[i]["module"] << "\");" << endl
		   << "	keySetMeta(errorKey, \"error/file\", " << "file" << ");" << endl
		   << "	keySetMeta(errorKey, \"error/line\", " << "line" << ");" << endl
		   << "	keySetMeta(errorKey, \"error/reason\", " << "reason" << ");" << endl
		   << "}" << endl
		   << endl;
		}
	}

	os << "#endif" << endl;
	return os;
}

int main(int argc, char** argv) try
{
	if (argc == 1 || argc > 3)
	{
		cerr << "Usage " << argv[0] << " infile [outfile]" << endl;
		return 1;
	}

	string infile = argv[1];

	parse_t result = parse (infile);

	if (argc == 3)
	{
		ofstream fout(argv[2]);
		if (!fout.is_open())
		{
			cerr << "Could not open output file" << endl;
			return 1;
		}
		fout << result;
	} else {
		cout << result;
	}

}
catch (parse_error const& e)
{
	cerr << "The line " << e.linenr << " caused following parse error: " << e.info << endl;
	return 2;
}
