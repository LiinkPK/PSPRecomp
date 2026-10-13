/* Entry 0x08908960 | file offset 0x00105938 | FUN_08908960 | bytes 208 */

int FUN_08908960(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_08903454(param_1);
  FUN_089055a8(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_08993560(param_1 + 0x38,0x10,0x20,FUN_08908938);
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined1 *)(param_1 + 0x25c) = 0;
  *(undefined1 *)(param_1 + 0x25d) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined1 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar2 = 0;
  iVar1 = param_1 + 0x38;
  do {
    FUN_08905848(iVar1);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined1 *)(iVar1 + 0x10) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x20;
  } while (iVar2 < 0x10);
  return param_1;
}

