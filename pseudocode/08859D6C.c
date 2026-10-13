/* Entry 0x08859D6C | file offset 0x00056D44 | FUN_08859d6c | bytes 44 */

void FUN_08859d6c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x24) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x20;
  } while (iVar2 < 0x1e);
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  return;
}

