/* Entry 0x089266F0 | file offset 0x001236C8 | FUN_089266f0 | bytes 128 */

void FUN_089266f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_5 + 0x488)) {
    iVar1 = param_5 + 0x48c;
    do {
      FUN_08926640(param_1,param_3,iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x40;
    } while (iVar2 < *(int *)(param_5 + 0x488));
  }
  return;
}

