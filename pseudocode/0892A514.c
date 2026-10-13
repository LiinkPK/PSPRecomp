/* Entry 0x0892A514 | file offset 0x001274EC | FUN_0892a514 | bytes 92 */

void FUN_0892a514(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    FUN_0892a13c(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x154;
  } while (iVar2 < 5);
  *(undefined4 *)(param_1 + 0x6a4) = 0xffffffff;
  return;
}

