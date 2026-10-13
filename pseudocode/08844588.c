/* Entry 0x08844588 | file offset 0x00041560 | FUN_08844588 | bytes 80 */

void FUN_08844588(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 != 0) {
    FUN_08846628(iVar1);
    FUN_0885c538(*(undefined4 *)(param_1 + 4),iVar1,0);
    iVar1 = *(int *)(param_1 + 8);
  }
  return;
}

