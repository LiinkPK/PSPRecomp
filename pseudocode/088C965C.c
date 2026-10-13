/* Entry 0x088C965C | file offset 0x000C6634 | FUN_088c965c | bytes 140 */

void FUN_088c965c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0xbdb8) = 0;
  iVar4 = 0;
  iVar3 = param_1 + 0x10000;
  iVar2 = param_1 + 0x10000;
  iVar1 = param_1 + 0x10000;
  do {
    *(undefined4 *)(iVar3 + -0x4234) = 0;
    *(undefined4 *)(iVar2 + -0x422c) = 0;
    *(undefined4 *)(iVar1 + -0x4224) = 0;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar4 < 2);
  iVar3 = 0;
  iVar2 = param_1 + 0x10000;
  iVar1 = param_1 + 0x10000;
  do {
    *(undefined4 *)(iVar2 + -0x4244) = 0;
    *(undefined4 *)(iVar1 + -0x423c) = 0;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar3 < 2);
  *(undefined4 *)(param_1 + 0xbde4) = 0;
  return;
}

