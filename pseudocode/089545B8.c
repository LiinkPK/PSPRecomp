/* Entry 0x089545B8 | file offset 0x00151590 | FUN_089545b8 | bytes 196 */

undefined4 FUN_089545b8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  param_4[4] = 0;
  *(undefined1 *)(param_4 + 5) = 1;
  if (*(char *)(param_3 + 0x18) == '\0') {
    if (*(char *)(param_3 + 0x16) == '\0') {
      FUN_0895477c(param_2,param_4,param_3,param_4);
    }
    else {
      uVar1 = FUN_0895470c(param_2,param_3 + 0x10);
      FUN_08954918(param_3,param_4,uVar1);
    }
  }
  else {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0x3f800000;
  }
  FUN_089549c8(param_2,param_3,param_4);
  return 1;
}

