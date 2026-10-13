/* Entry 0x088A3914 | file offset 0x000A08EC | FUN_088a3914 | bytes 132 */

void FUN_088a3914(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 != 0) {
    iVar1 = FUN_088a0cb0(param_4,"voice_load:%s",param_2);
    *param_1 = iVar1;
    if (iVar1 != 0) {
      uVar2 = FUN_088a0cf8(iVar1);
      FUN_08935524(uVar2,param_3,param_4);
      FUN_088a0d1c(*param_1);
    }
  }
  return;
}

