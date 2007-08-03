/*
 * File automatically generated by
 * gengen 1.1 by Lorenzo Bettini 
 * http://www.gnu.org/software/gengen
 */

#include "clear_arg.h"

void
clear_arg_gen_class::generate_clear_arg(ostream &stream, unsigned int indent)
{
  string indent_str (indent, ' ');
  indent = 0;

  if (has_arg)
    {
      stream << "args_info->";
      generate_string (name, stream, indent + indent_str.length ());
      stream << "_";
      generate_string (suffix, stream, indent + indent_str.length ());
      stream << " = ";
      generate_string (value, stream, indent + indent_str.length ());
      stream << ";";
      stream << "\n";
      stream << indent_str;
    }
  if (has_orig)
    {
      stream << "args_info->";
      generate_string (name, stream, indent + indent_str.length ());
      stream << "_orig = NULL;";
      stream << "\n";
      stream << indent_str;
    }
}
