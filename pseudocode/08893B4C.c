/* Entry 0x08893B4C | file offset 0x00090B24 | FUN_08893b4c | bytes 68 */

void FUN_08893b4c(undefined4 param_1,uint param_2,uint param_3,uint param_4,int param_5,
                 undefined4 param_6)

{
  FUN_08893a20(param_1,(param_3 & 0xff) << 8 | param_2 & 0xff |
                       param_5 << 0x18 | (param_4 & 0xff) << 0x10,param_6);
  return;
}

