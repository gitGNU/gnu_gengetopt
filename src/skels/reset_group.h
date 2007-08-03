/*
 * File automatically generated by
 * gengen 1.1 by Lorenzo Bettini 
 * http://www.gnu.org/software/gengen
 */

#ifndef RESET_GROUP_GEN_CLASS_H
#define RESET_GROUP_GEN_CLASS_H

#include <string>
#include <iostream>

using std::string;
using std::ostream;

class reset_group_gen_class
{
 protected:
  string args_info;
  string body;
  bool multiple_arg;
  string name;

 public:
  reset_group_gen_class() :
    multiple_arg (false)
  {
  }
  
  reset_group_gen_class(const string &_args_info, const string &_body, bool _multiple_arg, const string &_name) :
    args_info (_args_info), body (_body), multiple_arg (_multiple_arg), name (_name)
  {
  }

  static void
  generate_string(const string &s, ostream &stream, unsigned int indent)
  {
    if (!indent || s.find('\n') == string::npos)
      {
        stream << s;
        return;
      }

    string::size_type pos;
    string::size_type start = 0;
    string ind (indent, ' ');
    while ( (pos=s.find('\n', start)) != string::npos)
      {
        stream << s.substr (start, (pos+1)-start);
        start = pos+1;
        if (start+1 <= s.size ())
          stream << ind;
      }
    if (start+1 <= s.size ())
      stream << s.substr (start);
  }

  void set_args_info(const string &_args_info)
  {
    args_info = _args_info;
  }

  void set_body(const string &_body)
  {
    body = _body;
  }

  void set_multiple_arg(bool _multiple_arg)
  {
    multiple_arg = _multiple_arg;
  }

  void set_name(const string &_name)
  {
    name = _name;
  }

  void generate_reset_group(ostream &stream, unsigned int indent = 0);
  
};

#endif // RESET_GROUP_GEN_CLASS_H
