/* Entry 0x0899EA2C | file offset 0x0019BA04 | FUN_0899ea2c | bytes 88 */

int FUN_0899ea2c(int param_1,uint param_2)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = 0;
    for (puVar2 = (ushort *)(param_1 + *(int *)(param_1 + 8));
        puVar2 < (ushort *)(param_1 + *(int *)(param_1 + 4));
        puVar2 = (ushort *)((int)puVar2 + *(int *)(puVar2 + 2))) {
      if (param_2 == 0) {
        iVar1 = iVar1 + 1;
      }
      else if (*puVar2 == param_2) {
        iVar1 = iVar1 + 1;
      }
    }
  }
  return iVar1;
}

