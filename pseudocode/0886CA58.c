/* Entry 0x0886CA58 | file offset 0x00069A30 | FUN_0886ca58 | bytes 72 */

void FUN_0886ca58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x128) == 0) {
    *(undefined4 *)(param_1 + 0x128) = 2;
    iVar1 = 0;
    do {
      uVar2 = *(undefined4 *)(param_1 + 0x94);
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x120) = uVar2;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 4;
    } while (iVar1 < 2);
  }
  return;
}

