/* Entry 0x0891E70C | file offset 0x0011B6E4 | FUN_0891e70c | bytes 128 */

void FUN_0891e70c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 2) {
    iVar1 = FUN_088d4c5c();
    FUN_08873dec(3,2);
    FUN_08873d34((float)iVar1,3,FUN_0891e888,param_1,1,2);
    *(undefined4 *)(param_1 + 0x18) = 3;
  }
  return;
}

