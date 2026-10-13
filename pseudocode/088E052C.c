/* Entry 0x088E052C | file offset 0x000DD504 | FUN_088e052c | bytes 100 */

void FUN_088e052c(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8) + param_2 * 0x3c;
  iVar3 = 0;
  do {
    uVar1 = *(undefined2 *)(iVar2 + 0x48);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined2 *)(param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined2 *)(param_1 + 0x26) = 0;
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x32) = 0;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 2;
    param_1 = param_1 + 0x2c;
  } while (iVar3 < 0x1e);
  return;
}

