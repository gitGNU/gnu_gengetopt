/*
 * File automatically generated by
 * gengen 1.1 by Lorenzo Bettini 
 * http://www.gnu.org/software/gengen
 */

#include "option_arg.h"

void
option_arg_gen_class::generate_option_arg(ostream &stream, unsigned int indent)
{
  string indent_str (indent, ' ');
  indent = 0;

  if (long_long_arg)
    {
      stream << "#ifdef HAVE_LONG_LONG";
      stream << "\n";
      stream << indent_str;
      generate_string (longlongtype, stream, indent + indent_str.length ());
      stream << " ";
      generate_string (name, stream, indent + indent_str.length ());
      stream << "_arg;	/**< ";
      stream << "@";
      stream << "brief ";
      generate_string (desc, stream, indent + indent_str.length ());
      if (has_default)
        {
          stream << " (default=";
          generate_string (default_value, stream, indent + indent_str.length ());
          stream << ")";
        }
      stream << ".  */";
      stream << "\n";
      stream << indent_str;
      stream << "#else";
      stream << "\n";
      stream << indent_str;
      generate_string (longtype, stream, indent + indent_str.length ());
      stream << " ";
      generate_string (name, stream, indent + indent_str.length ());
      stream << "_arg;	/**< ";
      stream << "@";
      stream << "brief ";
      generate_string (desc, stream, indent + indent_str.length ());
      if (has_default)
        {
          stream << " (default=";
          generate_string (default_value, stream, indent + indent_str.length ());
          stream << ")";
        }
      stream << ".  */";
      stream << "\n";
      stream << indent_str;
      stream << "#endif";
      stream << "\n";
      stream << indent_str;
      generate_string (origtype, stream, indent + indent_str.length ());
      stream << " ";
      generate_string (name, stream, indent + indent_str.length ());
      stream << "_orig;	/**< ";
      stream << "@";
      stream << "brief ";
      generate_string (desc, stream, indent + indent_str.length ());
      stream << " original value given at command line.  */";
      stream << "\n";
      stream << indent_str;
    }
  else
    {
      if (flag_arg)
        {
          generate_string (type, stream, indent + indent_str.length ());
          stream << " ";
          generate_string (name, stream, indent + indent_str.length ());
          stream << "_flag;	/**< ";
          stream << "@";
          stream << "brief ";
          generate_string (desc, stream, indent + indent_str.length ());
          stream << " (default=";
          if (default_on)
            {
              stream << "on";
            }
          else
            {
              stream << "off";
            }
          stream << ").  */";
          stream << "\n";
          stream << indent_str;
        }
      else
        {
          if (has_arg)
            {
              generate_string (type, stream, indent + indent_str.length ());
              stream << " ";
              generate_string (name, stream, indent + indent_str.length ());
              stream << "_arg;	/**< ";
              stream << "@";
              stream << "brief ";
              generate_string (desc, stream, indent + indent_str.length ());
              if (has_default)
                {
                  stream << " (default='";
                  generate_string (default_value, stream, indent + indent_str.length ());
                  stream << "')";
                }
              stream << ".  */";
              stream << "\n";
              stream << indent_str;
              generate_string (origtype, stream, indent + indent_str.length ());
              stream << " ";
              generate_string (name, stream, indent + indent_str.length ());
              stream << "_orig;	/**< ";
              stream << "@";
              stream << "brief ";
              generate_string (desc, stream, indent + indent_str.length ());
              stream << " original value given at command line.  */";
              stream << "\n";
              stream << indent_str;
            }
        }
    }
  if (multiple)
    {
      stream << "int ";
      generate_string (name, stream, indent + indent_str.length ());
      stream << "_min; /**< ";
      stream << "@";
      stream << "brief ";
      generate_string (desc, stream, indent + indent_str.length ());
      stream << "'s minimum occurreces */";
      stream << "\n";
      stream << indent_str;
      stream << "int ";
      generate_string (name, stream, indent + indent_str.length ());
      stream << "_max; /**< ";
      stream << "@";
      stream << "brief ";
      generate_string (desc, stream, indent + indent_str.length ());
      stream << "'s maximum occurreces */";
      stream << "\n";
      stream << indent_str;
    }
  stream << "const char *";
  generate_string (name, stream, indent + indent_str.length ());
  stream << "_help; /**< ";
  stream << "@";
  stream << "brief ";
  generate_string (desc, stream, indent + indent_str.length ());
  stream << " help description.  */";
  stream << "\n";
  stream << indent_str;
}
