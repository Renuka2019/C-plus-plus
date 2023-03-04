#include <iostream>
#include <fstream>
#include <string>

int main(int argc ,char* argv[])
{
    if(argc != 2)
    {
        std::cerr<<argv[0]<<"file_name"<<std::endl;
        return (EXIT_FAILURE);
    }

    std::fstream f_stream(argv[1],std::fstream::in|std::fstream::out);
    if(!f_stream)
    {
        std::cerr<<"could not open"<<argv[1]<<std::endl;
        return(EXIT_FAILURE);
    }

    std::string line;

    while(getline(f_stream,line))
    {
        std::cout<<line<<std::endl;
    }

    f_stream.close();
    return (EXIT_SUCCESS);

}