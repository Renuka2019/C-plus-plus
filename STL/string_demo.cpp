#include <iostream>
#include<cstdlib>
#include<string>

void itarator_version();
void string_insert_ops();

int main(void)
{
    std::string s1;   //empty
    std::string s2 = "Hello,world"; 
    std::string s3("Hello c++ world");
    std::string s4(s2);

    std::cout<<s1<<std::endl<<s2<<std::endl << s3 << std::endl << s4 <<std::endl;

    for(std ::string::size_type i = 0; i!= s2.length(); ++i)
    {
        std :: cout << "s2[" << i << "]:" <<s2[i]<< std::endl;

    }

    for(std::string::iterator iter = s3.begin();iter != s3.end();++iter)
    {
        std::cout<<"iter "<<*iter<<std::endl;
    }

    std::string::iterator b_iter = s1.begin() +1;
    std::string::iterator e_iter = s1.begin() +6;

    std::string s5(b_iter,e_iter);
    std::cout<<"s5:"<<s5 <<std :: endl;

    //itarator_version();
    string_insert_ops();

} 

void itarator_version()
{
    std::cout<< "Iterator versions:"<<std::endl;
    std::string s("Hello  c++ world ");

    std::cout<<"forword iterator ,rw"<<std::endl;
    std::cout<<"original string:s:"<<s<<std::endl;

    for(std::string::iterator iter = s.begin();iter != s.end();++iter)
        if(islower(*iter))
            *iter = *iter -32;

    for(std::string::iterator iter = s.begin();iter != s.end();++iter)
    {
       std::cout<<"*iter : "<< *iter<<std::endl;
    }        

    std::cout<<"forword read only"<<std::endl;

    for(std::string::const_iterator citer = s.begin();citer != s.end();++citer)
    {
        std::cout<<"citer = "<<*citer <<std::endl;
        //*citer = *citer+5; //not allowed
    }

    std::cout<<"Reverse iterator"<<std::endl;
    for(std::string::reverse_iterator riter = s.rbegin();riter != s.rend();++riter)
    {
        std::cout<<"riter = "<<*riter <<std::endl;
        if(isupper(*riter))
            *riter += 32;
    }
    std::cout<<"String after reverse iterator is "<< s << std::endl;

    std::cout<<"reverse read only iterator"<<std::endl;

    for(std:: string::const_reverse_iterator criter =  s.crbegin();criter != s.crend();++criter)
    {
        std::cout << "*criter : "<< *criter <<std::endl;
    }
}

void string_insert_ops()
{
    puts("file operations");
    std:: string s1("CDE");
    std::cout<<"s1 : "<< s1 <<std::endl;
    s1.push_back('F');
    std::cout<<"s1.push_back(f):"<< s1 <<std::endl; 

    std::string s2("Hello");
    printf("s2 = %s\n",s2.c_str());

    //s2.push_back('!');
    //printf("s1 = %s\n",s1.c_str());

    std::string s3("DEF");
    printf("s3 = %s\n",s3.c_str());
    std::string::iterator iter = s3.begin();
    iter = s3.insert(iter,'c');
    printf("s3 = %s\n",s3.c_str());

    std::string s4("world!");
    std::string::iterator b_iter =  s4.begin();
    std::string::iterator e_iter = s4.end();

    iter = s2.end();
    iter = s2.insert(iter,b_iter,e_iter);

    printf("s2 = %s\n",s2.c_str());






}
