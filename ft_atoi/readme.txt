Project Requirements:

Function Prototype:
int my_atoi(const char *str);

Function Implementation Guidelines:
Ignore any leading whitespaces (space, tab, etc.).
Handle an optional '+' or '-' sign at the start of the string.
Convert the string digits to an integer until a non-digit character is encountered.
Stop conversion when a non-digit character is found.
If no valid conversion can be performed, return 0.
Handle overflow and underflow. Return INT_MAX or INT_MIN in case of overflow/underflow.

Constraints:
You can assume that the string will be null-terminated.
Use standard integer limits from <limits.h> for handling overflows.
Edge Cases:
Empty string (e.g., "").
String with only non-digit characters (e.g., "abc").
Strings with mixed valid and invalid characters (e.g., "123abc").
Strings representing numbers that overflow (e.g., "9223372036854775808").
Strings with spaces or symbols before/after the numbers (e.g., " -42 " or "123@").

