/* Entry 0x0894A090 | file offset 0x00147068 | FUN_0894a090 | bytes 116 */

void FUN_0894a090(int param_1)

{
  int iVar1;
  
  DAT_09b6f478 = param_1;
  *(undefined1 *)(param_1 + 0x94) = 0xc;
  if (*(int *)(param_1 + 0x70) != 0) {
    for (iVar1 = *(int *)(param_1 + 0x68); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x154)) {
      FUN_0894a738(param_1,iVar1);
    }
  }
  return;
}

