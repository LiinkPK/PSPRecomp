/* Entry 0x08882F68 | file offset 0x0007FF40 | FUN_08882f68 | bytes 140 */

void FUN_08882f68(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_0885c538(DAT_089d69cc,*(int *)(param_1 + 0x50),0);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    if (*(int *)(param_1 + 100) != -1) {
      sceIoClose();
      *(undefined4 *)(param_1 + 100) = 0xffffffff;
    }
    if ((param_2 & 1) != 0) {
      FUN_088831c4(param_1);
    }
  }
  return;
}

