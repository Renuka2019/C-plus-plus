#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

unsigned int  count_words(string &s);

int main(void)
{
    string str;

    puts("Enter a string");
    getline(cin,str);

    unsigned int num_words = count_words(str);
    cout<<"word count is:"<<num_words<<endl;


    return 0;
}

unsigned int  count_words(string &s)
{
    typedef enum{IN = 0,OUT} state_t;
    state_t state = OUT;
    unsigned int word_count = 0;

    for(string::iterator iter = s.begin();iter != s.end();++iter)
    {
        if(state == OUT && !isspace(*iter))
        {
            state = IN;
            ++word_count;
        }
        else if(state == IN && isspace(*iter))
        {
            state = OUT;

        }
    }
    return word_count;
}