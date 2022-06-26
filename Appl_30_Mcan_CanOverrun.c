#include "Can_30_Mcan.h"

#define UINT8_MAX_NUMBER 255

static uint8 errorsCanOverrun  = 0u;

V_DEF_30_MCAN_FUNC(extern, void, APPL_CODE) Appl_30_Mcan_CanOverrun ( uint8 Controller )
{     
    if(errorsCanOverrun < UINT8_MAX_NUMBER)
    {
      errorsCanOverrun = 0;
    }
    errorsCanOverrun++;
}
