/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 00:44:26 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/18 22:23:17 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137)
{
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy)
{
    *this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &op)
{
    if (this != &op)
    {
        this->_target = op._target;
    }
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!Form::getSigned())
        throw Form::FormNotSignedException();
    if (executor.getGrade() > Form::getGradeExec())
        throw Form::GradeTooLowException();
    std::ofstream file;
    std::string filename = this->_target + "_shrubbery";
    file.open(filename.c_str());
    if (file.is_open())
    {
        file << "              _{\\ _{\\{\\/}/}/}__                           _{\\ _{\\{\\/}/}/}__" << std::endl;
        file << "             {/{/\\}{/{/\\}(\\}{/\\} _                       {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
        file << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _                  {/{/\\}{/{/\\}(_)\\}{/{/\\}  _" << std::endl;
        file << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}              {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
        file << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}              {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}" << std::endl;
        file << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}             _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
        file << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}           {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
        file << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}           _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}" << std::endl;
        file << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}         {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
        file << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}         {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl;
        file << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)           {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
        file << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}          {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
        file << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}           {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
        file << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}             {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
        file << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)               (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
        file << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}                     {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
        file << "             {/{\\{\\{\\/}/}{\\{\\\\}/}                        {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
        file << "              {){/ {\\/}{\\/} \\}\\}                          {){/ {\\/}{\\/} \\}\\}" << std::endl;
        file << "              (_)  \\.-'.-/                                 (_)  \\.-'.-/" << std::endl;
        file << "          __...--- |'-.-'| --...__     Shrubberies     __...--- |'-.-'| --...__" << std::endl;
        file << "   _...--'   .-'   |'-.-'|  ' -.  ''--.._________...--'   .-'   |'-.-'|  ' -.  ''--..__" << std::endl;
        file << " -'    ' .  . '    |.'-._| '  . .  '   ''._- _-'    ' .  . '    |.'-._| '  . .  '   ''._" << std::endl;
        file << " .  '-  '    .--'  | '-.'|    .  '  . ' . . ' -' '-  '    .--'  | '-.'|    .  '     . '" << std::endl;
        file << "          ' ..     |'-_.-|                             ' ..     |'-_.-|               -" << std::endl;
        file << "  .  '  .       _.-|-._ -|-._  .  '  .    '  . .  '  .       _.-|-._ -|-._  .  '  .   '" << std::endl;
        file << "              .'   |'- .-|   '.                            .'   |'- .-|   '." << std::endl;
        file << "  ..-'   ' .  '.   `-._.--   .'  '  - .        ..-'   ' .  '.   `-._.--   .'  '  - ." << std::endl;
        file << "   .-' '        '-._______.-'     '  .   . .    .-' '        '-._______.-'     '  ." << std::endl;
        file << "    .       .    .   .    ' '-.                     .       .    .   .    ' '-. '" << std::endl;
        file.close();
        std::cout << BLUE << filename << " created successfully!" RESET << std::endl;
    }
    else
    {
        std::cout << RED "Error creating file '" <<  filename << "'" RESET << std::endl;
    }
}
