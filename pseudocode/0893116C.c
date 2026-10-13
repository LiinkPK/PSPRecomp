/* Entry 0x0893116C | file offset 0x0012E144 | FUN_0893116c | bytes 152 */

void FUN_0893116c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_2) && (param_2 < 5)) {
    FUN_08930774(param_1 + param_2 * 0x5c + 0x38);
    iVar1 = 0;
    iVar2 = param_1 + 0x38;
    if (0 < *(int *)(param_1 + 0x260)) {
      do {
        FUN_089307d0(iVar2);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x5c;
      } while (iVar1 < *(int *)(param_1 + 0x260));
    }
  }
  return;
}

