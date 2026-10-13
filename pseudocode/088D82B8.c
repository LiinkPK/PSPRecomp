/* Entry 0x088D82B8 | file offset 0x000D5290 | FUN_088d82b8 | bytes 56 */

undefined4 FUN_088d82b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d82b0();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar2;
}

