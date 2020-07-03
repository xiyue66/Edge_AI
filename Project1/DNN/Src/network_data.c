#include "network_data.h"

ai_handle ai_network_data_weights_get(void)
{

  AI_ALIGNED(4)
  static const ai_u8 s_network_weights[ 64 ] = {
    0xbb, 0xe8, 0x31, 0xbf, 0x23, 0x42, 0xaf, 0xbf, 0x6f, 0xf7,
    0xa3, 0xbf, 0xdc, 0x7d, 0x95, 0xbf, 0x85, 0x51, 0x92,
    0x3e, 0xf8, 0xaf, 0x15, 0x3f, 0x90, 0x6b, 0x9c, 0xbf,
    0xcf, 0xb1, 0xe1, 0xbf, 0x41, 0xa2, 0x7f, 0xbf, 0xc8,
    0xa6, 0x81, 0xbf, 0xc1, 0x7c, 0x09, 0x3f, 0x0d, 0x54,
    0xd2, 0xbf, 0xbf, 0x88, 0x0f, 0xc0, 0xd1, 0x06, 0xad,
    0xbf, 0xe3, 0xc5, 0x8c, 0xbf, 0xdc, 0x84, 0xa2, 0x3f
  };

  return AI_HANDLE_PTR(s_network_weights);

}

