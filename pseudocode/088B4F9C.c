/* Entry 0x088B4F9C | file offset 0x000B1F74 | FUN_088b4f9c | bytes 264 */

void FUN_088b4f9c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_bc [35];
  
  iVar1 = sceKernelGetSystemTimeLow();
  iVar1 = iVar1 * 0x343fd + 0x269ec3;
  if (((int)((iVar1 >> 0x10 & 0x7fffU) % 100) < param_5) &&
     (iVar2 = FUN_088b50a4(param_1,auStack_bc,0x23,param_3,param_4,param_6), iVar2 != 0)) {
    *(char *)(param_2 + 0xb8) =
         (char)auStack_bc[(int)(iVar1 * 0x343fd + 0x269ec3 >> 0x10 & 0x7fffU) % iVar2];
  }
  return;
}

