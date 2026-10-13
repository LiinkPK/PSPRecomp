/* Entry 0x0884F7C4 | file offset 0x0004C79C | FUN_0884f7c4 | bytes 180 */

void FUN_0884f7c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while (((*(short *)(param_1 + 0x12) == 0 || (*(char *)(param_1 + 0x1b) == '\0')) ||
         (iVar1 = FUN_0884edc0(param_1,param_2), iVar1 == 0))) {
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x20;
    if (0xf < iVar2) {
      return;
    }
  }
  FUN_0884eee0(param_1,param_3,param_4);
  return;
}

