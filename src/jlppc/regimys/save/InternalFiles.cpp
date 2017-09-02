#include "InternalFiles.hpp"

std::string operator/(const char str1[], std::string const &str2) {
    return std::string(str1) + " " + str2;
}

std::string operator/(std::string const &str1, const char str2[]) {
    return str1 + " " + std::string(str2);
}

std::string operator/(std::string const &str1, std::string const &str2) {
    return str1 + " " + str2;
}

namespace Maps {
  int feLayer1[2304] = {
    1,65,1,66,2,66,65,1,1,66,2,65,65,66,2,2,65,1,1,66,65,2,66,2,2,2,2,2,2,65,65,1,65,1,2,66,1,66,66,66,2,2,65,66,2,66,2,1,
    66,2,65,1,2,66,65,66,2,1,1,65,65,65,65,1,66,1,1,66,65,66,66,2,2,1,65,1,1,66,65,2,65,65,1,2,2,1,2,2,1,1,66,1,66,2,1,66,
    66,65,1,65,66,65,1,65,66,2,65,66,1,1,65,2,2,2,2,2,1,65,66,65,1,2,66,1,66,66,66,65,66,2,1,65,66,2,65,65,1,65,66,1,66,1,65,1,
    66,65,2,1,1,65,65,2,2,2,66,1,2,1,65,66,2,65,65,2,1,65,66,2,2,65,66,66,66,65,66,1,2,65,66,65,1,2,1,66,1,65,65,65,65,65,65,2,
    66,65,1,1,2,65,2,2,66,2,2,65,65,2,2,2,2,2,66,66,66,1,65,2,2,1,1,1,66,2,2,65,1,2,2,66,65,1,66,66,2,66,2,2,1,2,65,1,
    1,66,66,2,65,1,1,66,1,66,66,1,65,1,66,1,2,2,65,66,1,66,2,66,65,65,66,1,2,66,1,2,2,66,2,2,2,65,2,1,1,1,2,2,65,2,1,66,
    65,2,1,2,1,2,1,2,65,1,1,66,1,1,2,65,1,2,65,1,2,2,1,1,65,66,2,66,65,65,2,65,65,2,66,65,66,2,65,1,66,2,65,65,66,2,66,2,
    1,66,2,1,1,65,2,65,66,66,65,65,65,66,1,66,2,1,1,1,1,2,2,1,65,1,65,2,2,66,66,66,65,1,65,2,65,65,66,66,1,65,2,66,2,1,2,2,
    785,785,785,785,785,785,785,785,784,785,784,785,784,785,784,785,784,410,66,66,66,65,66,65,2,2,1,65,66,1,65,2,65,1,65,65,2,66,66,65,65,2,66,2,2,1,1,2,
    784,785,784,785,849,849,849,849,848,849,848,849,848,849,848,849,848,534,409,410,65,2,2,2,1,2,1,2,2,2,66,2,65,66,2,2,66,65,66,65,2,66,65,65,66,2,1,66,
    784,785,784,784,784,784,785,785,784,785,784,785,784,785,784,785,784,75,75,474,65,65,283,92,156,91,91,283,283,156,283,283,475,156,156,91,92,1,28,1,1,66,2,65,66,2,1,1,
    784,784,848,848,848,784,785,785,848,849,848,849,848,849,848,849,848,75,75,474,2,66,91,91,91,28,283,28,28,92,92,92,156,28,475,91,28,283,156,2,65,2,2,2,1,1,65,66,
    784,848,848,849,784,784,785,849,785,785,784,785,784,785,784,785,784,75,75,474,1,1,66,66,2,65,2,1,1,1,2,2,65,65,2,66,66,1,66,66,2,65,65,2,65,65,1,2,
    784,848,849,785,784,785,785,849,849,849,848,849,848,849,848,849,848,75,75,474,65,66,65,2,2,66,1,66,66,65,66,65,1,66,2,1,65,65,66,65,2,2,65,66,1,1,65,66,
    848,848,849,849,784,785,849,848,849,785,784,785,784,785,784,785,784,75,75,474,1,66,2,66,2,1,65,2,66,66,1,66,66,2,2,2,1,2,1,65,2,2,1,2,66,2,66,1,
    784,785,848,848,784,785,784,848,849,849,848,849,848,849,848,849,848,75,75,474,66,65,65,1,2,66,1675,2,2,1,1,65,66,2,65,2,1,2,2,66,1,65,66,65,1,1,2,2,
    784,785,848,849,784,784,785,785,849,785,784,785,784,785,784,785,784,75,75,474,65,2,1,66,2,65,1739,2,1,66,2,2,66,1,2,2,2,65,1,2,66,2,2,65,65,2,66,66,
    784,785,848,849,784,784,785,784,785,785,848,849,848,849,848,849,848,75,75,474,65,65,408,409,409,409,409,535,473,534,409,409,409,409,409,535,473,534,409,409,409,409,409,409,409,409,409,409,
    784,785,848,849,784,784,784,785,785,849,784,785,784,785,784,785,784,75,75,474,66,65,472,473,473,473,473,473,473,473,473,473,473,473,473,473,473,473,473,473,473,473,473,473,473,473,473,473,
    784,784,848,784,785,784,784,785,849,849,848,849,848,849,848,849,848,75,75,474,1,1,472,473,473,473,473,473,473,473,473,473,473,473,344,344,473,473,473,473,473,473,473,473,473,473,473,473,
    784,848,848,784,784,785,848,849,848,849,784,785,784,785,784,785,784,75,75,474,65,65,536,537,537,537,537,537,537,537,537,537,537,471,344,344,470,537,537,537,537,537,537,537,537,537,537,537,
    784,848,849,784,784,785,849,848,849,849,848,849,848,849,848,849,848,75,75,474,66,1,65,66,92,475,475,347,91,155,283,475,283,472,344,344,474,2,2,2,65,65,66,1,65,1,65,2,
    784,848,784,785,784,785,849,848,849,785,784,785,784,785,784,785,784,75,75,474,65,1,2,65,91,91,539,155,92,475,91,539,92,472,344,344,474,66,2,2,66,65,65,65,1,65,1,66,
    784,848,784,784,785,785,784,848,849,849,848,849,848,849,848,849,848,75,75,474,1,65,66,2,2,1,65,66,2,65,66,1,1,472,344,344,474,1,65,65,2,66,66,66,1,2,65,66,
    784,848,784,784,785,784,848,849,784,785,784,785,784,785,784,785,784,75,75,474,1,66,65,65,1,65,66,65,2,2,65,65,66,472,344,344,474,65,66,2,2,65,65,65,2,2,66,65,
    784,848,784,784,785,848,848,849,848,849,848,849,848,849,848,849,848,75,75,474,65,1,66,65,1,1,1,65,65,65,66,65,66,472,344,344,474,2,66,66,1,65,2,66,1,1,1,2,
    784,848,848,784,785,848,849,849,784,785,784,785,784,785,784,785,784,75,75,474,66,66,1,65,2,66,65,2,65,65,66,2,2,472,344,344,474,65,65,65,1,66,2,1,2,66,65,1,
    784,848,849,784,784,848,849,785,848,849,848,849,848,849,848,849,848,75,75,474,2,2,2,1,66,1,2,1,1,66,1,1,2,472,344,344,474,66,1,2,66,65,2,2,2,66,2,2,
    784,848,849,848,784,848,849,785,784,785,784,785,784,785,784,785,784,75,75,474,65,2,2,65,2,65,2,66,2,2,65,2,66,472,344,344,474,2,1,2,1,66,65,1,2,2,65,2,
    848,848,849,785,848,848,849,849,785,849,848,849,848,849,848,849,848,75,75,474,2,65,408,409,409,409,409,535,473,534,409,409,409,535,344,344,474,2,65,66,1,2,1,1,2,65,66,2,
    848,849,849,849,849,848,849,849,849,785,784,785,784,785,784,785,784,75,75,474,66,2,472,344,344,344,344,344,344,344,344,344,344,344,344,344,474,66,2,2,2,66,66,66,65,2,1,66,
    784,785,848,848,848,848,848,848,849,849,848,849,848,849,848,849,848,75,75,474,66,66,472,344,344,344,344,344,344,344,344,344,344,344,344,344,474,1,66,1,1,65,65,1,65,66,65,2,
    784,785,784,848,849,849,784,785,784,785,784,785,784,785,784,785,784,75,75,474,65,1,536,537,537,537,537,537,537,537,537,537,537,537,537,537,538,66,65,1,66,66,1,2,2,66,66,65,
    784,785,848,848,848,849,785,785,848,849,848,849,848,849,848,849,848,75,75,474,2,65,66,66,2,65,2,66,65,1,65,1,66,2,2,1,65,1,2,1,65,1,1,1,2,66,2,1,
    784,784,784,848,849,849,785,785,784,785,784,785,784,785,784,785,784,75,75,474,1,65,66,65,1,2,65,2,1,66,65,2,1,65,65,66,1,1,66,1,2,1,2,65,2,1,1,66,
    848,848,848,848,848,849,849,849,848,849,848,849,848,849,848,849,848,75,75,474,65,2,1,65,1045,1046,1046,1046,1046,1046,1046,1046,1046,1046,1047,1,66,66,66,1,65,66,2,66,1,2,2,65,
    784,784,785,784,848,849,785,785,784,785,784,785,784,785,784,785,784,75,75,474,1,66,2,1,1109,1110,1110,1110,1110,1110,1110,1110,1110,1110,1111,66,66,1,66,2,1,1,65,65,2,65,1,66,
    848,784,785,848,848,849,849,849,848,849,848,849,848,849,848,849,848,75,75,474,1,65,1,2,1173,1174,1174,1174,1174,1174,1174,1174,1174,1174,1175,2,1,2,2,66,1,2,65,1,65,66,66,2,
    784,784,784,784,784,784,848,849,784,785,784,785,784,785,784,785,784,75,75,474,66,65,1,2,66,2,2,2,65,2,66,2,66,65,65,66,1,65,66,65,1,1,2,1,65,65,65,1,
    848,848,848,848,848,848,848,849,848,849,848,849,848,849,848,849,848,75,75,474,23,2,346,346,346,346,346,346,346,346,346,346,346,346,2,2,346,346,346,346,346,346,346,346,346,346,346,346,
    66,65,2,2,65,1,66,1,65,66,1,2,1,2,2,66,65,1,66,66,1,2,2,65,65,2,2,66,1,66,65,65,2,65,1,1,2,90,65,66,65,66,1,66,65,1,65,65,
    2,65,1,2,2,1,2,65,65,65,2,2,66,65,2,65,65,65,65,65,66,66,65,1,1,66,2,2,65,2,66,66,2,66,66,1,66,90,2,2,66,1,2,65,2,2,2,66,
    66,65,2,66,65,1,1,1,65,2,2,2,1,1,66,65,66,65,1,1,1,65,1,66,2,1,66,66,65,65,66,2,66,2,2,65,65,90,1,66,2,66,65,2,1,2,1,65,
    66,1,1,2,2,1,65,66,66,66,1,65,66,66,2,2,1,2,65,66,65,66,2,66,66,66,2,65,1,1,66,65,65,66,66,1,65,90,66,2,66,1,66,1,2,1,66,1,
    1,1,1,2,66,1,2,66,66,65,1,65,65,2,66,66,2,2,66,2,1,2,1,65,66,2,2,1,1,1,66,66,1,66,1,65,1,90,65,2,65,66,1,65,2,2,66,65,
    1,1,2,2,1,65,65,2,65,65,2,2,66,66,2,66,2,65,2,65,65,65,66,66,65,65,66,66,66,1,2,65,2,1,2,1,90,90,66,66,1,66,2,65,66,2,66,65,
    65,2,66,66,1,66,1,66,65,65,65,1,2,66,2,65,65,66,66,66,2,65,66,66,1,2,2,2,2,66,66,65,1,1,65,66,90,90,66,2,65,1,65,66,65,65,65,65,
    2,66,2,66,1,65,66,1,2,1,66,2,2,65,1,1,65,65,65,1,2,2,1,66,2,65,1,66,65,2,66,66,1,2,66,66,90,90,66,66,2,65,66,2,2,2,65,1
  };

  int feLayer2[2304] = {
    1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,
   1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,
   1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,
   1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
   153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,23,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,22,153,153,153,153,153,153,153,
   194,194,194,194,194,194,194,194,194,194,194,194,194,194,194,194,195,152,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,154,2128,2129,2129,2129,2129,2129,2129,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,977,1363,1364,1363,1364,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,2128,2258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,1223,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,2501,2502,2503,258,2192,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,2192,258,258,258,258,258,258,258,
   258,258,258,258,258,258,913,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,2192,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,2192,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,913,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,2633,2634,1612,1613,1614,258,258,258,258,258,2633,2634,1612,1624,1625,2192,258,258,258,258,258,258,258,
   258,258,913,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,1674,1675,1676,1677,1678,258,258,258,258,258,2697,2698,1687,1688,1689,2192,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,1738,1739,1740,1741,1742,1220,258,258,258,1220,1749,1750,1751,1752,1753,2193,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,913,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,913,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,913,258,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1365,1366,258,258,258,258,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,2625,2626,2627,2628,2629,2630,2631,2632,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,913,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,2689,2690,2691,2692,2693,2694,2695,2696,258,258,258,258,258,258,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,
   258,258,258,258,258,258,258,258,258,258,258,258,258,913,258,258,200,258,258,258,258,258,258,1220,2753,2754,2755,2756,2757,2758,2759,2760,1223,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
   258,258,258,913,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,
   258,258,258,258,258,258,258,258,913,258,258,258,258,258,258,258,200,258,258,258,258,258,258,599,600,600,600,600,600,258,600,600,600,600,600,601,258,258,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,663,258,258,258,258,258,258,258,258,258,258,258,665,258,258,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,663,258,258,258,258,258,258,258,258,258,258,258,665,258,258,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,200,258,258,258,258,258,258,663,258,258,258,258,258,258,258,258,258,258,258,665,258,258,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,913,258,200,258,258,258,258,258,258,727,728,728,728,728,728,728,728,728,728,728,728,729,258,258,258,258,258,258,258,258,258,258,258,258,
   322,322,322,322,322,322,322,322,322,322,322,322,322,322,322,322,322,322,322,322,24,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,26,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,
   1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,
   1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,
   1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,
   1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364,258,258,258,258,258,258,258,258,258,258,
   258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1363,1364,1363,1364,1363,1364,1363,1364,1363,1364

  };
  
  int feLayer3[2304] = {
    1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,
    1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,
    1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,258,258,258,258,258,258,258,258,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,258,258,258,258,258,258,258,258,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1235,1236,1235,1236,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,2310,258,258,258,258,258,258,258,258,258,258,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1299,1300,1299,1300,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,2374,258,258,258,258,258,258,258,258,258,258,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1159,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,2438,258,258,258,258,258,258,258,258,258,258,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,2501,2501,258,258,258,258,258,258,258,258,258,258,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1546,1547,1548,1549,1550,258,258,258,258,258,1546,1547,1548,1549,1550,258,258,258,258,258,258,258,258,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1156,258,258,258,1156,258,258,258,258,258,258,258,258,258,258,258,258,258,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1237,1238,258,258,258,258,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1301,1302,258,258,258,258,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,2561,2562,2563,2564,2565,2566,2567,2568,258,258,258,258,258,258,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1156,258,258,258,258,258,258,258,258,1159,258,258,258,258,258,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,
    1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,
    1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,
    1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,
    1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,
    1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,
    1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1299,1300,1235,1236,1235,1236,1235,1236,1235,1236,1235,1236
  };
}

namespace Collisions {
//Indication : The collisions are : 0 for "Ok, you can go!", 1 for "You shall not pass.", 2 for "Bring your swimming suit (Water titles)", 3 for "Random encounters on roads", 4 4 "Grotto"
char feCol[32][32] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

char ppHomeCol[16][16] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 5},
    {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
};

char rivalHomeCol[16][16] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
};

char ppRoomCol[6][9] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 0, 1, 1, 1, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0},
    {1, 0, 0, 0, 0, 0, 0, 0, 0}
};

char momRoomCol[6][6] = {
    {1, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 1, 1},
    {0, 1, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0}
};

char laboCol[16][32] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1},
    {0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

}

namespace InternalFiles {
std::vector<std::string> filesNames;
std::vector<std::string> files;

int searchFile(std::string const& name) {
    for(unsigned int i = 0; i < filesNames.size(); i++) {
        if(filesNames[i] == name) {
            return i;
        }
    }
    return -1;
}

std::ostringstream *openFileOut(std::string const& name) {
    return new std::ostringstream(files[searchFile(name)]);
}

std::istringstream *openFileIn(std::string const& name) {
    return new std::istringstream(files[searchFile(name)]);
}

void registerFiles() {

}

}
