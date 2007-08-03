/*
 * File automatically generated by
 * gengen 1.1 by Lorenzo Bettini 
 * http://www.gnu.org/software/gengen
 */

#include "dependant_option.h"

void
dependant_option_gen_class::generate_dependant_option(ostream &stream, unsigned int indent)
{
  string indent_str (indent, ' ');
  indent = 0;

  stream << "if (args_info->";
  generate_string (option_var_name, stream, indent + indent_str.length ());
  stream << "_given && ! args_info->";
  generate_string (dep_option, stream, indent + indent_str.length ());
  stream << "_given)";
  stream << "\n";
  stream << indent_str;
  stream << "  {";
  stream << "\n";
  stream << indent_str;
  stream << "    fprintf (stderr, \"%s: ";
  generate_string (option_descr, stream, indent + indent_str.length ());
  stream << " option depends on option '";
  generate_string (dep_option_descr, stream, indent + indent_str.length ());
  stream << "'%s\\n\", ";
  generate_string (package_var_name, stream, indent + indent_str.length ());
  stream << ", (additional_error ? additional_error : \"\"));";
  stream << "\n";
  stream << indent_str;
  stream << "    error = 1;";
  stream << "\n";
  stream << indent_str;
  stream << "  }";
}
