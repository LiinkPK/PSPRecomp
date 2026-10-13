/* Entry 0x08858668 | file offset 0x00055640 | FUN_08858668 | bytes 68 */

void FUN_08858668(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined1 *)(iVar1 + 0x4d) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x50;
  } while (iVar2 < 10);
  *(undefined1 *)(param_1 + 0x338) = 1;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x344) = 0x3f800000;
  return;
}

