#if __cplusplus < 201703L // If the version of C++ is less than 17
#include <experimental/filesystem>
    // It was still in the experimental:: namespace
    namespace fs = std::experimental::filesystem;
#else
#include <filesystem>
    namespace fs = std::filesystem;
#endif

#include<stdio.h>

void help()
{
	printf("	  -p, --parents     no error if existing, make parent directories as needed,\n\ with their file modes unaffected by any -m option.\n\"" );
}

int main(int argc, const char** argv)
{
	if (argc < 2)
	{
		help();
		return -1;
	}
	fs::path strPath = argv[1];
    // create multiple directories/sub-directories.
    auto ok = fs::create_directories(strPath);
	if (!ok)
	{
		help();
		return -2;
	}
	return 0;
}
