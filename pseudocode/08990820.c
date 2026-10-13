/* Entry 0x08990820 | file offset 0x0018D7F8 | FUN_08990820 | bytes 184 */

int FUN_08990820(int param_1)

{
  int iVar1;
  int iVar2;
  
  sceKernelWaitSema(*(undefined4 *)(DAT_089da420 + 0x2c),1,0);
  iVar1 = DAT_089da420;
  iVar2 = DAT_089da420 + param_1 * 0x3c;
  if ((*(uint *)(iVar2 + 0x178) & 0x10) == 0) {
    if ((*(uint *)(iVar2 + 0x178) & 1) == 0) {
      sceKernelSignalSema(*(undefined4 *)(DAT_089da420 + 0x2c),1);
      param_1 = -1;
    }
    else {
      *(undefined4 *)(iVar2 + 0x178) = 2;
      sceKernelSignalSema(*(undefined4 *)(iVar1 + 0x2c),1);
    }
  }
  else {
    *(undefined4 *)(iVar2 + 0x178) = 2;
    sceKernelSignalSema(*(undefined4 *)(iVar1 + 0x2c),1);
  }
  return param_1;
}

