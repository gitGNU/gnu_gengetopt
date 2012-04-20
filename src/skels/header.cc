/*
 * File automatically generated by
 * gengen 1.4.3rc by Lorenzo Bettini 
 * http://www.gnu.org/software/gengen
 */

#include "header.h"

void
header_gen_class::generate_header(ostream &stream, unsigned int indent)
{
  string indent_str (indent, ' ');
  indent = 0;

  stream << "/** ";
  stream << "@";
  stream << "file ";
  generate_string (header_file_name, stream, indent + indent_str.length ());
  stream << ".";
  generate_string (header_file_ext, stream, indent + indent_str.length ());
  stream << "\n";
  stream << indent_str;
  stream << " *  ";
  stream << "@";
  stream << "brief The header file for the command line option parser";
  stream << "\n";
  stream << indent_str;
  stream << " *  generated by GNU Gengetopt ";
  generate_string (generator_version, stream, indent + indent_str.length ());
  stream << "\n";
  stream << indent_str;
  stream << " *  http://www.gnu.org/software/gengetopt.";
  stream << "\n";
  stream << indent_str;
  stream << " *  DO NOT modify this file, since it can be overwritten";
  stream << "\n";
  stream << indent_str;
  stream << " *  ";
  stream << "@";
  stream << "author GNU Gengetopt by Lorenzo Bettini */";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "#ifndef ";
  generate_string (ifndefname, stream, indent + indent_str.length ());
  stream << "_H";
  stream << "\n";
  stream << indent_str;
  stream << "#define ";
  generate_string (ifndefname, stream, indent + indent_str.length ());
  stream << "_H";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "/* If we use autoconf.  */";
  stream << "\n";
  stream << indent_str;
  stream << "#ifdef HAVE_CONFIG_H";
  stream << "\n";
  stream << indent_str;
  stream << "#include \"config.h\"";
  stream << "\n";
  stream << indent_str;
  stream << "#endif";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "#include <stdio.h> /* for FILE */";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "#ifdef __cplusplus";
  stream << "\n";
  stream << indent_str;
  stream << "extern \"C\" {";
  stream << "\n";
  stream << indent_str;
  stream << "#endif /* __cplusplus */";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "#ifndef ";
  generate_string (package_var_name, stream, indent + indent_str.length ());
  stream << "\n";
  stream << indent_str;
  stream << "/** ";
  stream << "@";
  stream << "brief the program name (used for printing errors) */";
  stream << "\n";
  stream << indent_str;
  stream << "#define ";
  generate_string (package_var_name, stream, indent + indent_str.length ());
  stream << " ";
  generate_string (package_var_val, stream, indent + indent_str.length ());
  stream << "\n";
  stream << indent_str;
  stream << "#endif";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "#ifndef ";
  generate_string (package_var_name, stream, indent + indent_str.length ());
  stream << "_NAME";
  stream << "\n";
  stream << indent_str;
  stream << "/** ";
  stream << "@";
  stream << "brief the complete program name (used for help and version) */";
  stream << "\n";
  stream << indent_str;
  if (( package_var_val != "PACKAGE" ))
    {
      stream << "#define ";
      generate_string (package_var_name, stream, indent + indent_str.length ());
      stream << "_NAME ";
      generate_string (package_var_val, stream, indent + indent_str.length ());
      stream << "\n";
      stream << indent_str;
    }
  else
    {
      stream << "#ifdef PACKAGE_NAME";
      stream << "\n";
      stream << indent_str;
      stream << "#define ";
      generate_string (package_var_name, stream, indent + indent_str.length ());
      stream << "_NAME PACKAGE_NAME";
      stream << "\n";
      stream << indent_str;
      stream << "#else";
      stream << "\n";
      stream << indent_str;
      stream << "#define ";
      generate_string (package_var_name, stream, indent + indent_str.length ());
      stream << "_NAME PACKAGE";
      stream << "\n";
      stream << indent_str;
      stream << "#endif";
      stream << "\n";
      stream << indent_str;
    }
  stream << "#endif";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "#ifndef ";
  generate_string (version_var_name, stream, indent + indent_str.length ());
  stream << "\n";
  stream << indent_str;
  stream << "/** ";
  stream << "@";
  stream << "brief the program version */";
  stream << "\n";
  stream << indent_str;
  stream << "#define ";
  generate_string (version_var_name, stream, indent + indent_str.length ());
  stream << " ";
  generate_string (version_var_val, stream, indent + indent_str.length ());
  stream << "\n";
  stream << indent_str;
  stream << "#endif";
  stream << "\n";
  stream << indent_str;
  if (enum_types.size () > 0)
    generate_string (enum_types, stream, indent + indent_str.length ());
  else
    generate_enum_types (stream, indent + indent_str.length ());
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "/** ";
  stream << "@";
  stream << "brief Where the command line options are stored */";
  stream << "\n";
  stream << indent_str;
  stream << "struct ";
  generate_string (args_info, stream, indent + indent_str.length ());
  stream << "\n";
  stream << indent_str;
  stream << "{";
  stream << "\n";
  stream << indent_str;
  indent = 2;
  stream << "  ";
  if (option_arg.size () > 0)
    generate_string (option_arg, stream, indent + indent_str.length ());
  else
    generate_option_arg (stream, indent + indent_str.length ());
  indent = 0;
  stream << "\n";
  stream << indent_str;
  indent = 2;
  stream << "  ";
  if (option_given.size () > 0)
    generate_string (option_given, stream, indent + indent_str.length ());
  else
    generate_option_given (stream, indent + indent_str.length ());
  indent = 0;
  stream << "\n";
  stream << indent_str;
  indent = 2;
  if (group_counters.size () > 0)
    generate_string (group_counters, stream, indent + indent_str.length ());
  else
    generate_group_counters (stream, indent + indent_str.length ());
  indent = 0;
  stream << indent_str;
  indent = 2;
  if (mode_counters.size () > 0)
    generate_string (mode_counters, stream, indent + indent_str.length ());
  else
    generate_mode_counters (stream, indent + indent_str.length ());
  indent = 0;
  stream << indent_str;
  stream << "} ;";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "/** ";
  stream << "@";
  stream << "brief The additional parameters to pass to parser functions */";
  stream << "\n";
  stream << indent_str;
  stream << "struct ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_params";
  stream << "\n";
  stream << indent_str;
  stream << "{";
  stream << "\n";
  stream << indent_str;
  stream << "  int override; /**< ";
  stream << "@";
  stream << "brief whether to override possibly already present options (default 0) */";
  stream << "\n";
  stream << indent_str;
  stream << "  int initialize; /**< ";
  stream << "@";
  stream << "brief whether to initialize the option structure ";
  generate_string (args_info, stream, indent + indent_str.length ());
  stream << " (default 1) */";
  stream << "\n";
  stream << indent_str;
  stream << "  int check_required; /**< ";
  stream << "@";
  stream << "brief whether to check that all required options were provided (default 1) */";
  stream << "\n";
  stream << indent_str;
  stream << "  int check_ambiguity; /**< ";
  stream << "@";
  stream << "brief whether to check for options already specified in the option structure ";
  generate_string (args_info, stream, indent + indent_str.length ());
  stream << " (default 0) */";
  stream << "\n";
  stream << indent_str;
  stream << "  int print_errors; /**< ";
  stream << "@";
  stream << "brief whether getopt_long should print an error message for a bad option (default 1) */";
  stream << "\n";
  stream << indent_str;
  stream << "} ;";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "/** ";
  stream << "@";
  stream << "brief the purpose string of the program */";
  stream << "\n";
  stream << indent_str;
  stream << "extern const char *";
  generate_string (args_info, stream, indent + indent_str.length ());
  stream << "_purpose;";
  stream << "\n";
  stream << indent_str;
  stream << "/** ";
  stream << "@";
  stream << "brief the usage string of the program */";
  stream << "\n";
  stream << indent_str;
  stream << "extern const char *";
  generate_string (args_info, stream, indent + indent_str.length ());
  stream << "_usage;";
  stream << "\n";
  stream << indent_str;
  stream << "/** ";
  stream << "@";
  stream << "brief all the lines making the help output */";
  stream << "\n";
  stream << indent_str;
  stream << "extern const char *";
  generate_string (args_info, stream, indent + indent_str.length ());
  stream << "_help[];";
  stream << "\n";
  stream << indent_str;
  if (has_hidden)
    {
      stream << "/** ";
      stream << "@";
      stream << "brief all the lines making the full help output (including hidden options) */";
      stream << "\n";
      stream << indent_str;
      stream << "extern const char *";
      generate_string (args_info, stream, indent + indent_str.length ());
      stream << "_full_help[];";
      stream << "\n";
      stream << indent_str;
    }
  if (has_details)
    {
      stream << "/** ";
      stream << "@";
      stream << "brief all the lines making the detailed help output (including hidden options and details) */";
      stream << "\n";
      stream << indent_str;
      stream << "extern const char *";
      generate_string (args_info, stream, indent + indent_str.length ());
      stream << "_detailed_help[];";
      stream << "\n";
      stream << indent_str;
    }
  stream << "\n";
  stream << indent_str;
  stream << "/**";
  stream << "\n";
  stream << indent_str;
  stream << " * The command line parser";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param argc the number of command line options";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param argv the command line options";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param args_info the structure where option information will be stored";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "return 0 if everything went fine, NON 0 if an error took place";
  stream << "\n";
  stream << indent_str;
  stream << " */";
  stream << "\n";
  stream << indent_str;
  stream << "int ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << " (int argc, char **argv,";
  stream << "\n";
  stream << indent_str;
  stream << "  struct ";
  generate_string (args_info, stream, indent + indent_str.length ());
  stream << " *args_info);";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "/**";
  stream << "\n";
  stream << indent_str;
  stream << " * The command line parser (version with additional parameters - deprecated)";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param argc the number of command line options";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param argv the command line options";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param args_info the structure where option information will be stored";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param override whether to override possibly already present options";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param initialize whether to initialize the option structure my_args_info";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param check_required whether to check that all required options were provided";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "return 0 if everything went fine, NON 0 if an error took place";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "deprecated use ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_ext() instead";
  stream << "\n";
  stream << indent_str;
  stream << " */";
  stream << "\n";
  stream << indent_str;
  stream << "int ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "2 (int argc, char **argv,";
  stream << "\n";
  stream << indent_str;
  stream << "  struct ";
  generate_string (args_info, stream, indent + indent_str.length ());
  stream << " *args_info,";
  stream << "\n";
  stream << indent_str;
  stream << "  int override, int initialize, int check_required);";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "/**";
  stream << "\n";
  stream << indent_str;
  stream << " * The command line parser (version with additional parameters)";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param argc the number of command line options";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param argv the command line options";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param args_info the structure where option information will be stored";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param params additional parameters for the parser";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "return 0 if everything went fine, NON 0 if an error took place";
  stream << "\n";
  stream << indent_str;
  stream << " */";
  stream << "\n";
  stream << indent_str;
  stream << "int ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_ext (int argc, char **argv,";
  stream << "\n";
  stream << indent_str;
  stream << "  struct ";
  generate_string (args_info, stream, indent + indent_str.length ());
  stream << " *args_info,";
  stream << "\n";
  stream << indent_str;
  stream << "  struct ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_params *params);";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "/**";
  stream << "\n";
  stream << indent_str;
  stream << " * Save the contents of the option struct into an already open FILE stream.";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param outfile the stream where to dump options";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param args_info the option struct to dump";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "return 0 if everything went fine, NON 0 if an error took place";
  stream << "\n";
  stream << indent_str;
  stream << " */";
  stream << "\n";
  stream << indent_str;
  stream << "int ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_dump(FILE *outfile,";
  stream << "\n";
  stream << indent_str;
  stream << "  struct ";
  generate_string (args_info, stream, indent + indent_str.length ());
  stream << " *args_info);";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "/**";
  stream << "\n";
  stream << indent_str;
  stream << " * Save the contents of the option struct into a (text) file.";
  stream << "\n";
  stream << indent_str;
  stream << " * This file can be read by the config file parser (if generated by gengetopt)";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param filename the file where to save";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param args_info the option struct to save";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "return 0 if everything went fine, NON 0 if an error took place";
  stream << "\n";
  stream << indent_str;
  stream << " */";
  stream << "\n";
  stream << indent_str;
  stream << "int ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_file_save(const char *filename,";
  stream << "\n";
  stream << indent_str;
  stream << "  struct ";
  generate_string (args_info, stream, indent + indent_str.length ());
  stream << " *args_info);";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "/**";
  stream << "\n";
  stream << indent_str;
  stream << " * Print the help";
  stream << "\n";
  stream << indent_str;
  stream << " */";
  stream << "\n";
  stream << indent_str;
  stream << "void ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_print_help(void);";
  stream << "\n";
  stream << indent_str;
  if (has_hidden)
    {
      stream << "/**";
      stream << "\n";
      stream << indent_str;
      stream << " * Print the full help (including hidden options)";
      stream << "\n";
      stream << indent_str;
      stream << " */";
      stream << "\n";
      stream << indent_str;
      stream << "void ";
      generate_string (parser_name, stream, indent + indent_str.length ());
      stream << "_print_full_help(void);";
      stream << "\n";
      stream << indent_str;
    }
  if (has_details)
    {
      stream << "/**";
      stream << "\n";
      stream << indent_str;
      stream << " * Print the detailed help (including hidden options and details)";
      stream << "\n";
      stream << indent_str;
      stream << " */";
      stream << "\n";
      stream << indent_str;
      stream << "void ";
      generate_string (parser_name, stream, indent + indent_str.length ());
      stream << "_print_detailed_help(void);";
      stream << "\n";
      stream << indent_str;
    }
  stream << "/**";
  stream << "\n";
  stream << indent_str;
  stream << " * Print the version";
  stream << "\n";
  stream << indent_str;
  stream << " */";
  stream << "\n";
  stream << indent_str;
  stream << "void ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_print_version(void);";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "/**";
  stream << "\n";
  stream << indent_str;
  stream << " * Initializes all the fields a ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_params structure ";
  stream << "\n";
  stream << indent_str;
  stream << " * to their default values";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param params the structure to initialize";
  stream << "\n";
  stream << indent_str;
  stream << " */";
  stream << "\n";
  stream << indent_str;
  stream << "void ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_params_init(struct ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_params *params);";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "/**";
  stream << "\n";
  stream << indent_str;
  stream << " * Allocates dynamically a ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_params structure and initializes";
  stream << "\n";
  stream << indent_str;
  stream << " * all its fields to their default values";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "return the created and initialized ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_params structure";
  stream << "\n";
  stream << indent_str;
  stream << " */";
  stream << "\n";
  stream << indent_str;
  stream << "struct ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_params *";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_params_create(void);";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "/**";
  stream << "\n";
  stream << indent_str;
  stream << " * Initializes the passed ";
  generate_string (args_info, stream, indent + indent_str.length ());
  stream << " structure's fields";
  stream << "\n";
  stream << indent_str;
  stream << " * (also set default values for options that have a default)";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param args_info the structure to initialize";
  stream << "\n";
  stream << indent_str;
  stream << " */";
  stream << "\n";
  stream << indent_str;
  stream << "void ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_init (struct ";
  generate_string (args_info, stream, indent + indent_str.length ());
  stream << " *args_info);";
  stream << "\n";
  stream << indent_str;
  stream << "/**";
  stream << "\n";
  stream << indent_str;
  stream << " * Deallocates the string fields of the ";
  generate_string (args_info, stream, indent + indent_str.length ());
  stream << " structure";
  stream << "\n";
  stream << indent_str;
  stream << " * (but does not deallocate the structure itself)";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param args_info the structure to deallocate";
  stream << "\n";
  stream << indent_str;
  stream << " */";
  stream << "\n";
  stream << indent_str;
  stream << "void ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_free (struct ";
  generate_string (args_info, stream, indent + indent_str.length ());
  stream << " *args_info);";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  if (generate_config_parser)
    {
      stream << "/**";
      stream << "\n";
      stream << indent_str;
      stream << " * The config file parser (deprecated version)";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param filename the name of the config file";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param args_info the structure where option information will be stored";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param override whether to override possibly already present options";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param initialize whether to initialize the option structure my_args_info";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param check_required whether to check that all required options were provided";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "return 0 if everything went fine, NON 0 if an error took place";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "deprecated use ";
      generate_string (parser_name, stream, indent + indent_str.length ());
      stream << "_config_file() instead";
      stream << "\n";
      stream << indent_str;
      stream << " */";
      stream << "\n";
      stream << indent_str;
      stream << "int ";
      generate_string (parser_name, stream, indent + indent_str.length ());
      stream << "_configfile (const char *filename,";
      stream << "\n";
      stream << indent_str;
      stream << "  struct ";
      generate_string (args_info, stream, indent + indent_str.length ());
      stream << " *args_info,";
      stream << "\n";
      stream << indent_str;
      stream << "  int override, int initialize, int check_required);";
      stream << "\n";
      stream << indent_str;
      stream << "\n";
      stream << indent_str;
      stream << "/**";
      stream << "\n";
      stream << indent_str;
      stream << " * The config file parser";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param filename the name of the config file";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param args_info the structure where option information will be stored";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param params additional parameters for the parser";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "return 0 if everything went fine, NON 0 if an error took place";
      stream << "\n";
      stream << indent_str;
      stream << " */";
      stream << "\n";
      stream << indent_str;
      stream << "int ";
      generate_string (parser_name, stream, indent + indent_str.length ());
      stream << "_config_file (const char *filename,";
      stream << "\n";
      stream << indent_str;
      stream << "  struct ";
      generate_string (args_info, stream, indent + indent_str.length ());
      stream << " *args_info,";
      stream << "\n";
      stream << indent_str;
      stream << "  struct ";
      generate_string (parser_name, stream, indent + indent_str.length ());
      stream << "_params *params);";
      stream << "\n";
      stream << indent_str;
      stream << "\n";
      stream << indent_str;
    }
  if (generate_string_parser)
    {
      stream << "/**";
      stream << "\n";
      stream << indent_str;
      stream << " * The string parser (interprets the passed string as a command line)";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param cmdline the command line stirng";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param args_info the structure where option information will be stored";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param prog_name the name of the program that will be used to print";
      stream << "\n";
      stream << indent_str;
      stream << " *   possible errors";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "return 0 if everything went fine, NON 0 if an error took place";
      stream << "\n";
      stream << indent_str;
      stream << " */";
      stream << "\n";
      stream << indent_str;
      stream << "int ";
      generate_string (parser_name, stream, indent + indent_str.length ());
      stream << "_string (const char *cmdline, struct ";
      generate_string (args_info, stream, indent + indent_str.length ());
      stream << " *args_info,";
      stream << "\n";
      stream << indent_str;
      stream << "  const char *prog_name);";
      stream << "\n";
      stream << indent_str;
      stream << "/**";
      stream << "\n";
      stream << indent_str;
      stream << " * The string parser (version with additional parameters - deprecated)";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param cmdline the command line stirng";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param args_info the structure where option information will be stored";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param prog_name the name of the program that will be used to print";
      stream << "\n";
      stream << indent_str;
      stream << " *   possible errors";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param override whether to override possibly already present options";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param initialize whether to initialize the option structure my_args_info";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param check_required whether to check that all required options were provided";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "return 0 if everything went fine, NON 0 if an error took place";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "deprecated use ";
      generate_string (parser_name, stream, indent + indent_str.length ());
      stream << "_string_ext() instead";
      stream << "\n";
      stream << indent_str;
      stream << " */";
      stream << "\n";
      stream << indent_str;
      stream << "int ";
      generate_string (parser_name, stream, indent + indent_str.length ());
      stream << "_string2 (const char *cmdline, struct ";
      generate_string (args_info, stream, indent + indent_str.length ());
      stream << " *args_info,";
      stream << "\n";
      stream << indent_str;
      stream << "  const char *prog_name,";
      stream << "\n";
      stream << indent_str;
      stream << "  int override, int initialize, int check_required);";
      stream << "\n";
      stream << indent_str;
      stream << "/**";
      stream << "\n";
      stream << indent_str;
      stream << " * The string parser (version with additional parameters)";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param cmdline the command line stirng";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param args_info the structure where option information will be stored";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param prog_name the name of the program that will be used to print";
      stream << "\n";
      stream << indent_str;
      stream << " *   possible errors";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "param params additional parameters for the parser";
      stream << "\n";
      stream << indent_str;
      stream << " * ";
      stream << "@";
      stream << "return 0 if everything went fine, NON 0 if an error took place";
      stream << "\n";
      stream << indent_str;
      stream << " */";
      stream << "\n";
      stream << indent_str;
      stream << "int ";
      generate_string (parser_name, stream, indent + indent_str.length ());
      stream << "_string_ext (const char *cmdline, struct ";
      generate_string (args_info, stream, indent + indent_str.length ());
      stream << " *args_info,";
      stream << "\n";
      stream << indent_str;
      stream << "  const char *prog_name,";
      stream << "\n";
      stream << indent_str;
      stream << "  struct ";
      generate_string (parser_name, stream, indent + indent_str.length ());
      stream << "_params *params);";
      stream << "\n";
      stream << indent_str;
      stream << "\n";
      stream << indent_str;
    }
  stream << "/**";
  stream << "\n";
  stream << indent_str;
  stream << " * Checks that all the required options were specified";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param args_info the structure to check";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "param prog_name the name of the program that will be used to print";
  stream << "\n";
  stream << indent_str;
  stream << " *   possible errors";
  stream << "\n";
  stream << indent_str;
  stream << " * ";
  stream << "@";
  stream << "return";
  stream << "\n";
  stream << indent_str;
  stream << " */";
  stream << "\n";
  stream << indent_str;
  stream << "int ";
  generate_string (parser_name, stream, indent + indent_str.length ());
  stream << "_required (struct ";
  generate_string (args_info, stream, indent + indent_str.length ());
  stream << " *args_info,";
  stream << "\n";
  stream << indent_str;
  stream << "  const char *prog_name);";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  if (option_values_decl.size () > 0)
    generate_string (option_values_decl, stream, indent + indent_str.length ());
  else
    generate_option_values_decl (stream, indent + indent_str.length ());
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "#ifdef __cplusplus";
  stream << "\n";
  stream << indent_str;
  stream << "}";
  stream << "\n";
  stream << indent_str;
  stream << "#endif /* __cplusplus */";
  stream << "\n";
  stream << indent_str;
  stream << "#endif /* ";
  generate_string (ifndefname, stream, indent + indent_str.length ());
  stream << "_H */";
  stream << "\n";
  stream << indent_str;
}
