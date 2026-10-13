/* Entry 0x088214B0 | file offset 0x0001E488 | FUN_088214b0 | bytes 104 */

bool FUN_088214b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(char *)(param_1 + 1)) {
    iVar1 = *(int *)(param_1 + 0xc);
    do {
      if (*(char *)(iVar1 + 1) != 'd') {
        return true;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 3;
    } while (iVar2 < *(char *)(param_1 + 1));
  }
  return *(char *)(param_1 + 0x11) != 'd';
}

