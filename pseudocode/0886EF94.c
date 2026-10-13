/* Entry 0x0886EF94 | file offset 0x0006BF6C | FUN_0886ef94 | bytes 64 */

void FUN_0886ef94(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = sceKernelStopModule(param_2,0,0,0,0);
  if (iVar1 == 0) {
    sceKernelUnloadModule(param_2);
  }
  return;
}

