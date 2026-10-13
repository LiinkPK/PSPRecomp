/* Entry 0x088F2C28 | file offset 0x000EFC00 | FUN_088f2c28 | bytes 208 */

void FUN_088f2c28(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x1bbc) = 0;
  *(undefined2 *)(param_1 + 0x1bc0) = 0;
  *(undefined1 *)(param_1 + 0x1bbd) = 0;
  *(undefined2 *)(param_1 + 0x1bc2) = 0;
  *(undefined4 *)(param_1 + 0x1bc4) = 0;
  *(undefined4 *)(param_1 + 0x1bc8) = 0;
  *(undefined4 *)(param_1 + 0x1bcc) = 0;
  *(undefined4 *)(param_1 + 0x156c) = 0;
  *(undefined4 *)(param_1 + 0x1570) = 0;
  *(undefined4 *)(param_1 + 0x1574) = 0;
  *(undefined4 *)(param_1 + 0x1578) = 0;
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x157c) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 100);
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x170c) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 100);
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x189c) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 100);
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x1a2c) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 100);
  FUN_088f3dd8(param_1,0);
  FUN_088f3e38(param_1,0);
  return;
}

