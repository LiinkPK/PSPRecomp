/* Entry 0x0883EA64 | file offset 0x0003BA3C | FUN_0883ea64 | bytes 132 */

int FUN_0883ea64(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 4)) {
    iVar2 = param_1 + 0xc;
    do {
      iVar1 = FUN_08812d48(iVar2,param_2);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x1c;
    } while (iVar3 < *(short *)(param_1 + 4));
  }
  return 0;
}

