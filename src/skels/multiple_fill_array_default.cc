/*
 * File automatically generated by
 * gengen 1.1 by Lorenzo Bettini 
 * http://www.gnu.org/software/gengen
 */

#include "multiple_fill_array_default.h"

void
multiple_fill_array_default_gen_class::generate_multiple_fill_array_default(ostream &stream, unsigned int indent)
{
  string indent_str (indent, ' ');
  indent = 0;

  stream << "else /* set the default value */";
  stream << "\n";
  stream << indent_str;
  stream << "  {";
  stream << "\n";
  stream << indent_str;
  stream << "    if (! args_info->";
  generate_string (option_var_name, stream, indent + indent_str.length ());
  stream << "_arg && ! args_info->";
  generate_string (option_var_name, stream, indent + indent_str.length ());
  stream << "_given)";
  stream << "\n";
  stream << indent_str;
  stream << "      {";
  stream << "\n";
  stream << indent_str;
  stream << "        args_info->";
  generate_string (option_var_name, stream, indent + indent_str.length ());
  stream << "_arg = (";
  generate_string (type, stream, indent + indent_str.length ());
  stream << " *) malloc (sizeof (";
  generate_string (type, stream, indent + indent_str.length ());
  stream << "));";
  stream << "\n";
  stream << indent_str;
  stream << "        args_info->";
  generate_string (option_var_name, stream, indent + indent_str.length ());
  stream << "_arg [0] = ";
  generate_string (default_value, stream, indent + indent_str.length ());
  stream << ";";
  stream << "\n";
  stream << indent_str;
  stream << "        args_info->";
  generate_string (option_var_name, stream, indent + indent_str.length ());
  stream << "_orig = (char **) malloc (sizeof (char *));";
  stream << "\n";
  stream << indent_str;
  stream << "        args_info->";
  generate_string (option_var_name, stream, indent + indent_str.length ());
  stream << "_orig [0] = NULL;";
  stream << "\n";
  stream << indent_str;
  stream << "      }";
  stream << "\n";
  stream << indent_str;
  stream << "  }";
  stream << "\n";
  stream << indent_str;
}
