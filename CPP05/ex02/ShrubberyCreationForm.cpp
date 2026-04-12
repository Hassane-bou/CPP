#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
    AForm("ShrubberyCreationForm",false,145,137),_target(target)
{
    // std::cout << "ShrubberyCreationForm Constructor parameter called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // std::cout << "ShrubberyCreationForm Destructor called\n";
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj):
    AForm(obj),_target(obj._target)
{
    std::cout << "ShrubberyCreationForm Copy Constructor called\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    std::cout << "ShrubberyCreationForm copy assingment called\n";
    this->_target = obj._target;
    return(*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    
    checkExecute(executor);

    std::string filename = _target + "_shrubbery" ;

    std::ofstream file(filename);
    if(!file)
    {
        throw ExceptionFileNoOpen();
    }
    file << "                      ___" << std::endl;
    file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
    file << "             ,-'          __,,-- \\" << std::endl;
    file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
    file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
    file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
    file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
    file << "     (     ,-'                  `." << std::endl;
    file << "      `._,'     _   _             ;" << std::endl;
    file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
    file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
    file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
    file << "                \"Hb HH dF" << std::endl;
    file << "                 \"HbHHdF" << std::endl;
    file << "                  |HHHF" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  dHHHb" << std::endl;
    file << "                .dFd|bHb.               o" << std::endl;
    file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
    file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
    file << "##########################################" << std::endl;

    file.close();
}