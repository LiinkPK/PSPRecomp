/* Entry 0x0892A654 | file offset 0x0012762C | FUN_0892a654 | bytes 64 */

void FUN_0892a654(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined2 *)(param_1 + 2) = 0;
  iVar2 = 0;
  iVar3 = (int)*(short *)(param_1 + 2);
  iVar1 = param_1;
  do {
    if (*(int *)(iVar1 + 0x20) != 0) {
      iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 8;
  } while (iVar2 < 5);
  *(short *)(param_1 + 2) = (short)iVar3;
  return;
}

