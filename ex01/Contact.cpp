#include "Contact.hpp"

void Contact::SetFirstName(std::string First)
{
    FirstName = First;
}
std::string Contact::GetFirstName() const
{
    return FirstName;
}
void Contact::SetLastName(std::string Last)
{
    LastName = Last;
}
std::string Contact::GetLastName() const
{
    return LastName;
}
void Contact::SetNickName(std::string Name)
{
    NickName = Name;
}
std::string Contact::GetNickName() const
{
    return NickName;
}
void Contact::SetPhoneNumber(std::string Phone)
{
    PhoneNumber = Phone;
}
std::string Contact::GetPhoneNumber() const
{
    return PhoneNumber;
}
void Contact::SetSecret(std::string Pass)
{
     Secret = Pass;
}
std::string Contact::GetSecret() const
{
    return Secret;
}