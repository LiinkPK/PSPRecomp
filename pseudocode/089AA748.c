/* Entry 0x089AA748 | file offset 0x001A7720 | FUN_089aa748 | bytes 208 */

undefined4 FUN_089aa748(char *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_1 == (char *)0x0) {
    param_1 = "-%03d";
  }
  else {
    uVar1 = FUN_089ab27c(param_1,0x400);
    if (0xf < uVar1) {
      return 0x800001fe;
    }
  }
  FUN_089ab210(s___03d_089daa38,param_1,0x10);
  DAT_089daa48 = param_2;
  if (param_2 < 1) {
    DAT_089daa48 = -1;
  }
  if (-1 < param_3) {
    if (999 < param_3) {
      return 0x800001fe;
    }
    DAT_089daa4c = param_3;
    return 0;
  }
  DAT_089daa4c = 999;
  return 0;
}

