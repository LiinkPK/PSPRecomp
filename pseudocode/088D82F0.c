/* Entry 0x088D82F0 | file offset 0x000D52C8 | FUN_088d82f0 | bytes 56 */

undefined4 FUN_088d82f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d82b0();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x14);
  }
  return uVar2;
}

