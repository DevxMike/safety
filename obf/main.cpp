
#include <iostream>
#include "koder.h"
#include <cstring>
#include <cstdlib>
#include <ctime>
int main(){srand(time(NULL));ReplacementFor_packet ReplacementFor_test((uint16_t
)(0xa4d+3662-0x188b),(uint16_t)(0x211+7238-0x1e56),(uint16_t)strlen(
"\x48\x65\x6c\x6c\x6f"),"\x48\x65\x6c\x6c\x6f");const auto&ReplacementFor_p=
ReplacementFor_test.ReplacementFor_get_packet();const auto ReplacementFor_len=
ReplacementFor_p.ReplacementFor_header.ReplacementFor_len;for(uint16_t 
ReplacementFor_i=(0x6c4+1297-0xbd5);ReplacementFor_i<ReplacementFor_p.
ReplacementFor_header.ReplacementFor_len;++ReplacementFor_i){std::cout<<
ReplacementFor_p.data[ReplacementFor_i]<<"\x20";}std::cout<<std::endl;
ReplacementFor_coder ReplacementFor_c((0x374+5609-0x1959)|(0xaa9+6299-0x2342));
const auto&ReplacementFor_cp=ReplacementFor_c.ReplacementFor_get_coded_packet(
ReplacementFor_test.ReplacementFor_get_packet());for(uint16_t ReplacementFor_i=
(0x1172+942-0x1520);ReplacementFor_i<ReplacementFor_len;++ReplacementFor_i){std
::cout<<ReplacementFor_cp.data[ReplacementFor_i]<<"\x20";}return
(0x339+4233-0x13c2);}
