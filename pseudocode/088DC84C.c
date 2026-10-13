/* Entry 0x088DC84C | file offset 0x000D9824 | FUN_088dc84c | bytes 248 */

int FUN_088dc84c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x15] = 0;
  param_1[5] = 0;
  if (*(int *)(param_2 + 4) == 1) {
    FUN_08935524(param_1 + 6,param_2,0x24);
    param_2 = param_2 + 0x24;
    uVar1 = FUN_088dc944(param_1,param_2,param_1 + 0xf);
    uVar1 = FUN_088dcf18(param_1,uVar1,param_1 + 0x10,param_1 + 0x11);
    FUN_088dd21c(param_1,uVar1,param_1 + 0x12,param_1 + 0x13,param_1 + 0x14);
  }
  else {
    FUN_08935524(param_1 + 6,param_2,0x3c);
    param_2 = param_2 + 0x3c;
  }
  uVar1 = FUN_088dc7a8(param_1);
  uVar1 = FUN_0885c6cc(*(undefined4 *)(DAT_089d7830 + 4),uVar1,0,0,1,0);
  param_1[0x17] = uVar1;
  FUN_088dc7e4(param_1);
  return param_2;
}

