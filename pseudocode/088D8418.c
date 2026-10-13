/* Entry 0x088D8418 | file offset 0x000D53F0 | FUN_088d8418 | bytes 72 */

undefined4 FUN_088d8418(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d82b0();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

