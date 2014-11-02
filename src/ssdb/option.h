#ifndef SSDB_OPTION_H_
#define SSDB_OPTION_H_

#include "../util/config.h"

class Option
{
public:
	Option();
	~Option(){}
	
	void load(const Config &conf);

	size_t cache_size;
	size_t max_open_files;
	size_t write_buffer_size;
	size_t block_size;
	int compaction_speed;
	std::string compression;
	bool binlog;
};

#endif
