/* Entry 0x0892C00C | file offset 0x00128FE4 | FUN_0892c00c | bytes 156 */

void FUN_0892c00c(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_088cf970(DAT_089d7830,*(undefined4 *)(param_1 + 0x30));
  iVar2 = 0;
  iVar1 = param_1;
  if (0 < *(int *)(param_1 + 0x198)) {
    do {
      iVar1 = iVar1 + 0x44;
      FUN_0892b5dc(iVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x198));
  }
  FUN_088cf970(DAT_089d7830,*(undefined4 *)(param_1 + 0x34));
  FUN_088cf970(DAT_089d7830,*(undefined4 *)(param_1 + 0x2c));
  FUN_088cf970(DAT_089d7830,*(undefined4 *)(param_1 + 0x38));
  return;
}

