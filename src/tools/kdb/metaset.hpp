#ifndef METASET_HPP
#define METASET_HPP

#include <command.hpp>

#include <kdb.hpp>

class MetaSetCommand : public Command
{
	kdb::KDB kdb;

public:
	MetaSetCommand();
	~MetaSetCommand();

	virtual std::string getShortOptions()
	{
		return "v";
	}

	virtual std::string getSynopsis()
	{
		return "<key-name> <meta-name> <meta-value>";
	}

	virtual std::string getShortHelpText()
	{
		return "Set a meta value.";
	}

	virtual std::string getLongHelpText()
	{
		return
			"Meta key are information about keys.\n"
			"\n"
			"Typically there should be a more specific get/set\n"
			"interface because it is error-prone to directly\n"
			"edit metadata.\n"
			"\n"
			"When a key does not exist, it will automatically created\n"
			"with an initial empty value\n"
			"\n"
			"There is some special handling for the metadata\n"
			"atime, mtime and ctime. They will be converted to\n"
			"time_t.\n";
	}

	virtual int execute (Cmdline const& cmdline);
};

#endif
