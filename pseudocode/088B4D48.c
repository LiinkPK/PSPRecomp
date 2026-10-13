/* Entry 0x088B4D48 | file offset 0x000B1D20 | FUN_088b4d48 | bytes 292 */

void FUN_088b4d48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined1 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_12c [64];
  
  iVar1 = sceKernelGetSystemTimeLow();
  iVar1 = iVar1 * 0x343fd + 0x269ec3;
  if ((int)((iVar1 >> 0x10 & 0x7fffU) % 100) < param_6) {
    iVar2 = FUN_088b4e6c(param_1,auStack_12c,0x40,param_3,param_4,param_5,param_7);
    FUN_088b75b4(param_2);
    if (iVar2 != 0) {
      FUN_088b767c(param_2,auStack_12c[(int)(iVar1 * 0x343fd + 0x269ec3 >> 0x10 & 0x7fffU) % iVar2])
      ;
    }
  }
  return;
}

