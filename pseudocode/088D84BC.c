/* Entry 0x088D84BC | file offset 0x000D5494 | FUN_088d84bc | bytes 72 */

undefined4 FUN_088d84bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d82b0();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

