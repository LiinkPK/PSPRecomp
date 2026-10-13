/* Entry 0x08847B8C | file offset 0x00044B64 | FUN_08847b8c | bytes 144 */

int FUN_08847b8c(int param_1)

{
  int iVar1;
  int iVar2;
  int local_10 [2];
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x30c);
  iVar1 = FUN_088b7b18(iVar1 + 0x10 + *(char *)(iVar1 + 0x773) * 0xc6);
  iVar2 = -1;
  if (iVar1 != -1) {
    FUN_088b97e8(local_10,iVar1);
    if (local_10[0] != 0) {
      iVar2 = (int)*(char *)(local_10[0] + 0xf);
    }
  }
  return iVar2;
}

