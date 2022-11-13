#include <stdint.h>

static const uint16_t
data_u16[2048] =
{
    0,  1,  2,  3,  4,  5,  6,  6,  7,  7,  7,  7,  7,  7,  7,  7,
    7,  7,  7,  7,  7,  7,  8,  7,  9,  9, 10, 11, 12, 13,  7,  7,
    7,  7,  7,  7, 14,  7,  7,  7,  7, 15, 16,  7, 17, 18, 19, 20,
   21,  7, 22, 23,  7,  7, 24, 25, 26, 27, 28,  7,  7, 29, 30, 31,
   32, 33, 34, 35, 36,  7, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46,
   47, 48, 49, 50, 51, 52, 53, 54, 55, 52, 56, 57, 58, 59, 60, 61,
   62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
   78, 79, 80, 81, 82, 83, 84, 81, 85, 86, 87, 88, 89, 90, 91, 81,
   92, 92, 93, 92, 94,  7, 95,  7, 96, 96, 96, 97, 97, 98, 99, 99,
    7,  7,100,  7,101,102,103,  7,104,  7,105,106,107,  7,  7,108,
  109,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,
    7,  7,  7,  7,110,  7,  7,111,112,113,114,115, 92, 92,116,117,
  118,  7,  7,119,120,121,  7,122,123,124,125,126, 92,127,128,  7,
  129, 92,130,131,132,133,134, 81,135,136,137,138,139,140,  7,141,
    7,142,143,144,145,146,147,148,  7,  7,  7,  7,  7,  7,149,150,
    7,  7,  7,  7,  7,  7,  7,  7,108,  7,151,152,  7,153,154,155,
  156,157,158,159,160,161,162,163,164,165,166,167,168,  7,169,  7,
  170,171,172,173,174,175,  7,176,177,178,  7,  7,  7,  7,  7,179,
    7,180,181,182,182,182,182,183,182,182,184,185,186,187,188,189,
  190,191,192,193,194,195,196,197,198,  7,199,200,201,  7,202,203,
    7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,204,  7,205,206,
    7,  7,  7,  7,  7,  7,  7,  7,  7,  7,207,208,209,  7,  7,  7,
    7,  7,  7,  7,  7,  7,  7,210,  7, 95,  7,211,212,213,213,  9,
  214,215,216, 81,217,218,218,219,218,218,218,218,218,218,220,221,
  222,223,224,225,226,227,225,228,229,230,218,218,231,218,218,232,
  233,218,234,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,  7,  7,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  235,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,218,
  218,218,218,218,236,218,237,144,  7,  7,  7,  7,  7,  7,  7,  7,
  238,239,  7,240,241,  7,  7,242,  7,  7,  7,  7,  7,  7,243,244,
  245,246,  7,247,248,136,249,250, 30,251,252,253, 39,254,255,256,
    7,257,258, 92, 92, 92,259,260,261,262,  7,263,  7,  7,  7,264,
  265,266,267,268,269,270,271,265,266,267,268,269,270,271,265,266,
  267,268,269,270,271,265,266,267,268,269,270,271,265,266,267,268,
  269,270,271,265,266,267,268,269,270,271,265,266,267,268,269,270,
  271,265,266,267,268,269,270,271,265,266,267,268,269,270,271,265,
  266,267,268,269,270,271,265,266,267,268,269,270,271,265,266,267,
  268,269,270,271,265,266,267,268,269,270,271,265,266,267,268,269,
  270,271,265,266,267,268,269,270,271,265,266,267,268,269,270,271,
  265,266,267,268,269,270,271,265,266,267,268,269,270,271,265,266,
  267,268,269,270,271,265,266,267,268,269,270,271,265,266,267,268,
  269,270,271,265,266,267,268,269,270,271,265,266,267,268,269,270,
  271,265,266,267,268,269,270,271,265,266,267,268,269,270,271,265,
  266,267,268,269,270,271,265,266,267,268,269,270,271,265,266,267,
  268,269,270,271,265,266,267,268,269,270,271,265,266,267,268,269,
  270,271,265,266,267,268,269,270,271,265,266,267,268,269,270,271,
  265,266,267,268,269,270,271,265,266,267,268,269,270,271,265,266,
  267,268,269,270,271,265,266,267,268,269,270,271,265,266,267,268,
  269,270,271,265,266,267,268,269,270,271,265,266,267,268,269,270,
  271,265,266,267,268,269,270,271,265,266,267,268,269,270,271,265,
  266,267,268,269,270,271,265,266,267,268,269,270,271,265,266,267,
  268,269,270,271,265,266,267,268,269,270,271,265,266,267,268,269,
  270,271,265,266,267,268,269,270,271,265,266,267,268,269,270,271,
  265,266,267,268,269,270,271,265,266,267,268,269,270,272,273,274,
  275,275,275,275,275,275,275,275,275,275,275,275,275,275,275,275,
  275,275,275,275,275,275,275,275,275,275,275,275,275,275,275,275,
  275,275,275,275,275,275,275,275,275,275,275,275,275,275,275,275,
  275,275,275,275,275,275,275,275,275,275,275,275,275,275,275,275,
   81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
   81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
   81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
   81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
   81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
   81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
   81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
   81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
   81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
   81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
   81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
   81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81,
   81, 81, 81, 81, 81, 81, 81, 81,218,218,218,218,218,218,218,218,
  218,218,218,218,218,218,218,218,276,277,278,  7,  7,  7,279,  7,
    7,  7,  7,  7,  7,  7,  7,  7,  7,280,  7,  7,281,  7,282,283,
  284,285,286,287,  7,  7,  7,288,289,290,291,292,293,233,294,295,
};
static const uint8_t
data_u8[9472] =
{
  22,22,22,22,22,22,22,22,22,18,38,35,35,37,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
  42, 7, 4,13,10,11,13, 4, 1, 3,13,10, 9,17, 9, 8,12,12,12,12,12,12,12,12,12,12, 9, 9,13,13,13, 7,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13, 1,10, 3,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13, 1,18, 2,13,22,
  22,22,22,22,22,39,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
   5, 1,11,10,10,10,13,34,34,13,34, 4,13,18,13,13,11,10,34,34,19,13,34,34,34,34,34, 4,34,34,34, 1,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,34,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,34,19,34,34,34,19,34,13,13,34,13,13,13,13,13,13,13,34,34,34,34,13,34,13,19,
  22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
  22,22,22,22,22,22,22,22,22,22,22,22,22,22,22, 5,22,22,22,22,22,22,22,22,22,22,22,22, 5, 5, 5, 5,
   5, 5, 5,22,22,22,22,22,22,22,22,22,22,22,22,22,13,13,13,13,13,13,13,13,43,43,13,13,13,13, 9,13,
  43,43,43,43,13,13,13,13,13,13,13,43,13,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,22,22,22,22,22,22,22,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13, 9,18,43,43,13,13,10,43,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
  22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,18,22,
  13,22,22,13,22,22, 7,22,43,43,43,43,43,43,43,43,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
  14,14,14,14,14,14,14,14,14,14,14,43,43,43,43,14,14,14,14,13,13,43,43,43,43,43,43,43,43,43,43,43,
  13,13,13,13,13,13,13,13,13,11,11,11, 9, 9,13,13,22,22,22,22,22,22,22,22,22,22,22, 7,22, 7, 7, 7,
  13,13,13,13,13,13,13,13,13,13,13,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
  12,12,12,12,12,12,12,12,12,12,11,12,12,13,13,13,22,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13, 7,13,22,22,22,22,22,22,22,13,13,22,
  22,22,22,22,22,13,13,22,22,13,22,22,22,22,13,13,12,12,12,12,12,12,12,12,12,12,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,13,13,22,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
  22,22,22,22,22,22,22,22,22,22,22,43,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,22,22,22,22,22,22,22,22,22,22,22,13,43,43,43,43,43,43,43,43,43,43,43,43,43,43,
  12,12,12,12,12,12,12,12,12,12,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,22,22,22,22,22,22,22,22,22,13,13,13,13, 9, 7,13,43,43,22,10,10,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,22,22,22,22,13,22,22,22,22,22,
  22,22,22,22,13,22,22,22,13,22,22,22,22,22,43,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,22,22,22,43,43,13,43,
  13,13,13,13,13,13,13,13,13,13,13,43,43,43,43,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,13,13,43,43,43,43,43,43,22,22,22,22,22,22,22,22,
  13,13,13,13,13,13,13,13,13,13,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
  22,22,13,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
  22,22,22,22,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,22,22,22,13,22,22,
  22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,13,22,22,22,22,22,22,22,13,13,13,13,13,13,13,13,
  13,13,22,22,18,18,12,12,12,12,12,12,12,12,12,12,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,22,22,22,43,13,13,13,13,13,13,13,13,43,43,13,13,43,43,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,43,13,13,13,13,13,13,13,43,13,43,43,43,13,13,13,13,43,43,22,13,22,22,
  22,22,22,22,22,43,43,22,22,43,43,22,22,22,13,43,43,43,43,43,43,43,43,22,43,43,43,43,13,13,43,13,
  13,13,22,22,43,43,12,12,12,12,12,12,12,12,12,12,13,13,11,11,13,13,13,13,13,11,13,10,13,13,22,43,
  43,22,22,22,43,13,13,13,13,13,13,43,43,43,43,13,13,43,43,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,43,13,13,13,13,13,13,13,43,13,13,43,13,13,43,13,13,43,43,22,43,22,22,
  22,22,22,43,43,43,43,22,22,43,43,22,22,22,43,43,43,22,43,43,43,43,43,43,43,13,13,13,13,43,13,43,
  43,43,43,43,43,43,12,12,12,12,12,12,12,12,12,12,22,22,13,13,13,22,13,43,43,43,43,43,43,43,43,43,
  43,22,22,22,43,13,13,13,13,13,13,13,13,13,43,13,13,13,43,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,43,13,13,13,13,13,13,13,43,13,13,43,13,13,13,13,13,43,43,22,13,22,22,
  22,22,22,22,22,22,43,22,22,22,43,22,22,22,43,43,13,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,
  13,13,22,22,43,43,12,12,12,12,12,12,12,12,12,12,13,10,43,43,43,43,43,43,43,13,22,22,22,22,22,22,
  43,22,22,22,43,13,13,13,13,13,13,13,13,43,43,13,13,43,43,13,13,13,13,13,13,13,13,13,13,13,13,13,
  22,22,22,22,22,43,43,22,22,43,43,22,22,22,43,43,43,43,43,43,43,22,22,22,43,43,43,43,13,13,43,13,
  13,13,22,22,43,43,12,12,12,12,12,12,12,12,12,12,13,13,13,13,13,13,13,13,43,43,43,43,43,43,43,43,
  43,43,22,13,43,13,13,13,13,13,13,43,43,43,13,13,13,43,13,13,13,13,43,43,43,13,13,43,13,43,13,13,
  43,43,43,13,13,43,43,43,13,13,13,43,43,43,13,13,13,13,13,13,13,13,13,13,13,13,43,43,43,43,22,22,
  22,22,22,43,43,43,22,22,22,43,22,22,22,22,43,43,13,43,43,43,43,43,43,22,43,43,43,43,43,43,43,43,
  43,43,43,43,43,43,12,12,12,12,12,12,12,12,12,12,13,13,13,13,13,13,13,13,13,10,13,43,43,43,43,43,
  22,22,22,22,22,13,13,13,13,13,13,13,13,43,13,13,13,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,22,13,22,22,
  22,22,22,22,22,43,22,22,22,43,22,22,22,22,43,43,43,43,43,43,43,22,22,43,13,13,13,43,43,13,43,43,
  13,13,22,22,43,43,12,12,12,12,12,12,12,12,12,12,43,43,43,43,43,43,43,19,13,13,13,13,13,13,13,13,
  13,22,22,22,19,13,13,13,13,13,13,13,13,43,13,13,13,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,43,13,13,13,13,13,13,13,13,13,13,43,13,13,13,13,13,43,43,22,13,22,22,
  22,22,22,22,22,43,22,22,22,43,22,22,22,22,43,43,43,43,43,43,43,22,22,43,43,43,43,43,43,13,13,43,
  13,13,22,22,43,43,12,12,12,12,12,12,12,12,12,12,43,13,13,22,43,43,43,43,43,43,43,43,43,43,43,43,
  22,22,22,22,13,13,13,13,13,13,13,13,13,43,13,13,13,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,22,22,13,22,22,
  22,22,22,22,22,43,22,22,22,43,22,22,22,22,13,13,43,43,43,43,13,13,13,22,13,13,13,13,13,13,13,13,
  13,13,22,22,43,43,12,12,12,12,12,12,12,12,12,12,13,13,13,13,13,13,13,13,13,11,13,13,13,13,13,13,
  43,22,22,22,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,43,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,13,13,13,13,13,13,13,13,13,43,13,43,43,
  13,13,13,13,13,13,13,43,43,43,22,43,43,43,43,22,22,22,22,22,22,43,22,43,22,22,22,22,22,22,22,22,
  43,43,43,43,43,43,12,12,12,12,12,12,12,12,12,12,43,43,22,22,13,43,43,43,43,43,43,43,43,43,43,43,
  43,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,
  40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,43,43,43,43,10,
  40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,13,12,12,12,12,12,12,12,12,12,12,18,18,43,43,43,43,
  43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,
  43,40,40,43,40,43,40,40,40,40,40,43,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,
  40,40,40,40,43,40,43,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,43,43,
  40,40,40,40,40,43,40,43,40,40,40,40,40,40,40,43,12,12,12,12,12,12,12,12,12,12,43,43,40,40,40,40,
  13,19,19,19,19,13,19,19, 5,19,19,18, 5, 7, 7, 7, 7, 7, 5,13, 7,13,13,13,22,22,13,13,13,13,13,13,
  12,12,12,12,12,12,12,12,12,12,13,13,13,13,13,13,13,13,13,13,18,22,13,22,13,22, 1, 2, 1, 2,22,22,
  13,13,13,13,13,13,13,13,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,43,43,22,22,22,22,22,22,22,22,22,22,22,22,22,22,18,
  22,22,22,22,22,18,22,22,13,13,13,13,13,22,22,22,22,22,22,22,22,22,22,22,43,22,22,22,22,22,22,22,
  22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,43,18,18,
  13,13,13,13,13,13,22,13,13,13,13,13,13,43,13,13,19,19,18,19,13,13,13,13,13, 5, 5,43,43,43,43,43,
  40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,
  12,12,12,12,12,12,12,12,12,12,18,18,13,13,13,13,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,
  40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,12,12,12,12,12,12,12,12,12,12,40,40,40,40,40,40,
  13,13,13,13,13,13,43,13,43,43,43,43,43,13,43,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,
  27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,
  27,27,27,27,27,27,27,27,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,
  28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,
  13,13,13,13,13,13,13,13,13,43,13,13,13,13,43,43,13,13,13,13,13,13,13,43,13,43,13,13,13,13,43,43,
  13,13,13,13,13,13,13,13,13,43,13,13,13,13,43,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,13,13,13,13,43,43,13,13,13,13,13,13,13,43,
  13,43,13,13,13,13,43,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,13,13,13,13,43,43,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,22,22,22,
  13,18,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,43,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,43,43,43,43,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,13,13,13,13,13,13,43,43,
  18,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  18,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13, 1, 2,43,43,43,
  13,13,13,13,13,13,13,13,13,13,13,18,18,18,13,13,13,13,13,13,13,13,13,13,13,43,43,43,43,43,43,43,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,22,22,22,22,43,43,43,43,43,43,43,43,43,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,22,22,22,18,18,43,43,43,43,43,43,43,43,43,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,22,22,43,43,43,43,43,43,43,43,43,43,43,43,
  13,13,13,13,13,13,13,13,13,13,13,13,13,43,13,13,13,43,22,22,43,43,43,43,43,43,43,43,43,43,43,43,
  40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,18,18, 6,40,18,13,18,10,40,40,43,43,
  12,12,12,12,12,12,12,12,12,12,43,43,43,43,43,43,13,13,13,13,13,13,13,13,13,13,43,43,43,43,43,43,
  13,13, 7, 7,18,18,19,13, 7, 7,13,22,22,22, 5,22,12,12,12,12,12,12,12,12,12,12,43,43,43,43,43,43,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,43,43,43,43,43,
  13,13,13,13,13,22,22,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,22,13,43,43,43,43,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,43,43,43,43,43,43,43,43,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,
  22,22,22,22,22,22,22,22,22,22,22,22,43,43,43,43,22,22,22,22,22,22,22,22,22,22,22,22,43,43,43,43,
  13,43,43,43, 7, 7,12,12,12,12,12,12,12,12,12,12,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,
  40,40,40,40,40,40,40,40,40,40,40,40,40,40,43,43,40,40,40,40,40,43,43,43,43,43,43,43,43,43,43,43,
  40,40,40,40,40,40,40,40,40,40,40,40,43,43,43,43,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,
  40,40,40,40,40,40,40,40,40,40,43,43,43,43,43,43,12,12,12,12,12,12,12,12,12,12,40,43,43,43,40,40,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,22,22,22,22,22,43,43,13,13,
  40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,43,
  40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,43,43,22,
  12,12,12,12,12,12,12,12,12,12,43,43,43,43,43,43,12,12,12,12,12,12,12,12,12,12,43,43,43,43,43,43,
  40,40,40,40,40,40,40,40,40,40,40,40,40,40,43,43,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
  22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,
  22,22,22,22,22,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,22,22,22,22,22,22,22,22,22,22,22,22,
  22,22,22,22,22,13,13,13,13,13,13,13,13,43,43,43,12,12,12,12,12,12,12,12,12,12,18,18,13,18,18,18,
  18,13,13,13,13,13,13,13,13,13,13,22,22,22,22,22,22,22,22,22,13,13,13,13,13,13,13,13,13,18,18,43,
  22,22,22,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,22,22,22,22,22,22,22,22,22,22,22,22,22,13,13,12,12,12,12,12,12,12,12,12,12,13,13,13,13,13,13,
  13,13,13,13,13,13,22,22,22,22,22,22,22,22,22,22,22,22,22,22,43,43,43,43,43,43,43,43,13,13,13,13,
  13,13,13,13,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,43,43,43,18,18,18,18,18,
  12,12,12,12,12,12,12,12,12,12,43,43,43,13,13,13,12,12,12,12,12,12,12,12,12,12,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,18,18,
  13,13,13,13,13,13,13,13,13,43,43,43,43,43,43,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,13,13,13,
  13,13,13,13,13,13,13,13,43,43,43,43,43,43,43,43,22,22,22,13,22,22,22,22,22,22,22,22,22,22,22,22,
  22,22,22,22,22,22,22,22,22,13,13,13,13,22,13,13,13,13,13,13,22,13,13,22,22,22,13,43,43,43,43,43,
  22,22,22,22,22,22,22,22,22,22,22,22,22, 5,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
  22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22, 5,22,22,22,
  13,13,13,13,13,13,43,43,13,13,13,13,13,13,43,43,13,13,13,13,13,13,13,13,43,13,43,13,43,13,43,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,13,13,13,13,13,13,43,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,13,13,13,43,13,13,13,13,13,13,13,19,13,43,
  18,18,18,18,18,18,18, 5,18,18,18,21,22,32,22,22,18, 5,18,18,20,34,34,13, 4, 4, 1, 4, 4, 4, 1, 4,
  34,34,13,13,16,16,16,18,35,35,22,22,22,22,22, 5,11,11,11,11,11,11,11,11,13, 4, 4,34, 6, 6,13,13,
  13,13,13,13, 9, 1, 2, 6, 6, 6,13,13,13,13,13,13,13,13,13,13,13,13,18,11,18,18,18,18,13,18,18,18,
  23,13,13,13,13,43,22,22,22,22,22,22,22,22,22,22,13,13,43,43,34,13,13,13,13,13,13,13,13, 1, 2,34,
  13,34,34,34,34,13,13,13,13,13,13,13,13, 1, 2,43,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,43,
  10,10,10,10,10,10,10,11,10,10,10,10,10,10,10,10,10,10,10,10,10,10,11,10,10,10,10,11,10,10,11,10,
  11,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,
  22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,
  13,13,13,11,13,34,13,13,13,11,13,13,13,13,13,13,13,13,13,34,13,13,10,13,13,13,13,13,13,13,13,13,
  13,34,34,13,13,13,13,13,13,13,13,34,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,34,34,13,13,13,13,13,34,13,13,34,13,
  34,34,34,34,34,34,34,34,34,34,34,34,13,13,13,13,34,34,34,34,34,34,34,34,34,34,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,34,13,13,43,43,43,43,34,34,34,34,34,34,34,34,34,34,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,34,13,34,13,13,13,13,13,13,13,13,13,13,13,
  34,13,34,34,13,13,13,34,34,13,13,34,13,13,13,34,13,34,10,10,13,34,13,13,13,13,34,13,13,34,34,34,
  34,13,13,34,13,34,13,34,34,34,34,34,34,13,34,13,13,13,13,13,34,34,34,34,13,13,13,13,34,34,13,13,
  13,13,13,13,13,13,13,13,34,13,13,13,34,13,13,13,13,13,34,13,13,13,13,13,13,13,13,13,13,13,13,13,
  34,34,13,13,34,34,34,34,13,13,34,34,13,13,34,34,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,34,34,13,13,34,34,13,13,13,13,13,13,13,13,13,13,13,13,13,34,13,13,13,34,13,13,13,13,13,13,
  13,13,13,13,13,34,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,34,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,16,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13, 1, 2, 1, 2,13,13,13,13,13,13,34,13,13,13,13,13,13,13,15,15,13,13,13,13,
  13,13,13,13,13,13,13,13,13, 1, 2,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,15,15,15,15,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,
  13,13,13,13,13,13,13,13,13,13,13,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,
  34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,
  34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,13,
  34,34,34,34,34,34,34,34,34,34,34,34,13,13,13,13,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,
  34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,13,13,13,13,13,13,13,13,13,13,13,
  34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,13,13,34,34,34,34,13,13,13,13,13,13,13,13,13,13,
  34,34,13,34,34,34,34,34,34,34,13,13,13,13,13,13,13,13,34,34,13,13,34,34,13,13,13,13,34,34,13,13,
  34,34,13,13,13,13,34,34,34,13,13,34,13,13,34,34,34,34,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,34,34,34,34,13,13,13,13,13,13,13,13,13,34,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  15,15,15,15,13,34,34,13,13,34,13,13,13,13,34,34,13,13,13,13,15,15,34,34,15,13,15,15,15,30,15,15,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,15,15,15,13,13,13,13,
  34,13,34,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  34,34,13,34,34,34,13,34,15,34,34,13,34,34,13,34,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,15,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,34,34,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,15,15,15,
  15,15,15,15,15,15,15,15,15,34,34,34,34,15,13,15,15,15,34,15,15,34,34,34,15,15,34,34,15,34,34,15,
  15,15,13,34,13,13,13,13,34,34,15,34,34,34,34,34,34,15,15,15,15,15,34,15,15,30,15,34,34,15,15,15,
  15,15,15,15,15,13,13,13,15,15,30,30,30,30,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,34,13,13,13, 4, 4, 4, 4, 4,
   4,13, 7, 7,15,13,13,13, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2,34,34,34,34,34,34,34,34,34,34,
  34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13, 1, 2,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13, 1, 2, 1, 2,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13, 1, 2,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,34,34,34,34,34,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,22,22,22,13,13,43,43,43,43,43, 7,18,18,18,13, 7,18,
  13,13,13,13,13,13,13,13,43,43,43,43,43,43,43,13,18,43,43,43,43,43,43,43,43,43,43,43,43,43,43,22,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,43,43,43,43,43,43,43,
  13,13,13,13,13,13,13,43,13,13,13,13,13,13,13,43,13,13,13,13,13,13,13,43,13,13,13,13,13,13,13,43,
   4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,18,18,18,18,18,18,18,18,13,18, 1,18,13,13, 4, 4,13,13,
   4, 4, 1, 2, 1, 2, 1, 2, 1, 2,18,18,18,18, 7,13,18,18,13,18,18,13,13,13,13,13,20,20,18,18,18,13,
  18,18, 1,18,18,18,18,18,18,18,18,13,18,13,18,18,13,13,13, 7, 7, 1, 2, 1, 2, 1, 2, 1, 2,18,43,43,
  15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,43,15,15,15,15,15,
  15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
  15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,43,43,43,43,43,43,43,43,43,43,43,43,
  15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,43,43,43,43,43,43,43,43,43,43,
  43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,15,15,15,15,15,15,15,15,15,15,15,15,43,43,43,43,
  18, 2, 2,15,15, 6,15,15, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2,15,15, 1, 2, 1, 2, 1, 2, 1, 2, 6, 1, 2, 2,
  15,15,15,15,15,15,15,15,15,15,22,22,22,22,22,22,15,15,15,15,15,22,15,15,15,15,15, 6, 6,15,15,15,
  43,36,15,36,15,36,15,36,15,36,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
  15,15,15,36,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
  15,15,15,36,15,36,15,36,15,15,15,15,15,15,36,15,15,15,15,15,15,36,36,43,43,22,22, 6, 6, 6, 6,15,
   6,36,15,36,15,36,15,36,15,36,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
  15,15,15,36,15,36,15,36,15,15,15,15,15,15,36,15,15,15,15,15,15,36,36,15,15,15,15, 6,36, 6, 6,15,
  43,43,43,43,43,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
  15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,43,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
  15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,43,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
  15,15,15,15,43,43,43,43,43,43,43,43,43,43,43,43,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,
  15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,43,
  15,15,15,15,15,15,15,15,34,34,34,34,34,34,34,34,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
  15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 6,15,15,15,15,15,15,15,15,15,15,
  15,15,15,15,15,15,15,15,15,15,15,15,15,43,43,43,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
  15,15,15,15,15,15,15,43,43,43,43,43,43,43,43,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,18, 7,18,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  12,12,12,12,12,12,12,12,12,12,13,13,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,22,22,22,22,13,22,22,22,22,22,22,22,22,22,22,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,22,22,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,22,22,13,18,18,18,18,18,43,43,43,43,43,43,43,43,
  13,13,13,13,13,13,13,13,13,13,13,43,43,43,43,43,13,13,43,13,43,13,13,13,13,13,43,43,43,43,43,43,
  43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,22,13,13,13,22,13,13,13,13,22,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,22,22,22,22,22,13,13,13,13,22,43,43,43,13,13,13,13,13,13,13,13,11,13,43,43,43,43,43,43,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,19,19, 7, 7,43,43,43,43,43,43,43,43,
  22,22,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  22,22,22,22,22,22,43,43,43,43,43,43,43,43,18,18,12,12,12,12,12,12,12,12,12,12,43,43,43,43,43,43,
  22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,13,13,13,13,13,13,13,13,13,13,19,13,13,22,
  13,13,13,13,13,13,22,22,22,22,22,22,22,22,18,18,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,22,22,22,22,22,22,22,22,22,22,22,22,22,43,43,43,43,43,43,43,43,43,43,43,13,
  26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,43,43,43,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,22,22,22,22,22,22,22,22,22,22,22,22,22,
  22,13,13,13,13,13,13,18,18,18,13,13,13,13,43,13,12,12,12,12,12,12,12,12,12,12,43,43,43,43,13,13,
  40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,12,12,12,12,12,12,12,12,12,12,40,40,40,40,40,43,
  13,13,13,13,13,13,13,13,13,22,22,22,22,22,22,22,22,22,22,22,22,22,22,43,43,43,43,43,43,43,43,43,
  13,13,13,22,13,13,13,13,13,13,13,13,22,22,43,43,12,12,12,12,12,12,12,12,12,12,43,43,13,18,18,18,
  40,40,40,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,40,40,40,40,40,
  13,13,13,13,13,13,13,13,13,13,13,22,22,22,22,22,18,18,13,13,13,22,22,43,43,43,43,43,43,43,43,43,
  43,13,13,13,13,13,13,43,43,13,13,13,13,13,13,43,43,13,13,13,13,13,13,43,43,43,43,43,43,43,43,43,
  13,13,13,13,13,13,13,43,13,13,13,13,13,13,13,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,43,43,43,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,22,22,22,22,22,22,22,22,18,22,22,43,43,12,12,12,12,12,12,12,12,12,12,43,43,43,43,43,43,
  24,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,24,25,25,25,
  25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,24,25,25,25,25,25,25,25,
  25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,24,25,25,25,25,25,25,25,25,25,25,25,
  25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,24,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
  25,25,25,25,25,25,25,25,25,25,25,25,24,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
  25,25,25,25,25,25,25,25,24,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
  25,25,25,25,24,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
  25,25,25,25,43,43,43,43,43,43,43,43,43,43,43,43,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,
  27,27,27,27,27,27,27,43,43,43,43,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,
  28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,43,43,43,43,
  41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,
  13,13,13,13,13,13,13,43,43,43,43,43,43,43,43,43,43,43,43,13,13,13,13,13,43,43,43,43,43,14,22,14,
  14,14,14,14,14,14,14,14,14,13,14,14,14,14,14,14,14,14,14,14,14,14,14,43,14,14,14,14,14,43,14,43,
  14,14,43,14,14,43,14,14,14,14,14,14,14,14,14,14,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13, 2, 1,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,43,43,43,43,43,43,43,13,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,
  43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,13,13,13,13,13,13,13,13,13,13,13,13,11,13,13,13,
  22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22, 9, 2, 2, 9, 9, 7, 7, 1, 2,16,43,43,43,43,43,43,
  22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,15,15,15,15,15, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1,
   2, 1, 2, 1, 2,15,15, 1, 2,15,15,15,15,15,15,15, 2,15, 2,43, 6, 6, 7, 7,15, 1, 2, 1, 2, 1, 2,15,
  15,15,15,15,15,15,15,43,15,10,11,15,43,43,43,43,13,13,13,13,13,43,13,13,13,13,13,13,13,13,13,13,
  13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,43,43,23,
  43, 7,15,15,10,11,15,15, 1, 2,15,15, 2,15, 2,15,15,15,15,15,15,15,15,15,15,15, 6, 6,15,15,15, 7,
  15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 1,15, 2,15,15,
  15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 1,15, 2,15, 1,
   2, 2, 1, 2, 2, 6,15,36,36,36,36,36,36,36,36,36,36,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
  15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15, 6, 6,
  43,43,15,15,15,15,15,15,43,43,15,15,15,15,15,15,43,43,15,15,15,15,15,15,43,43,15,15,15,43,43,43,
  11,10,15,15,15,10,10,43,13,13,13,13,13,13,13,43,43,43,43,43,43,43,43,43,43,22,22,22,33,34,43,43,
};

uint_fast8_t
data_get (unsigned u)
{
  return u<65536u?data_u8[((data_u16[u>>5])<<5)+((u)&31u)]:0;
}
