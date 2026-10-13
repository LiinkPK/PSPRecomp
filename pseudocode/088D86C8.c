/* Entry 0x088D86C8 | file offset 0x000D56A0 | FUN_088d86c8 | bytes 56 */

undefined4 FUN_088d86c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d86c0();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 8);
  }
  return uVar2;
}

