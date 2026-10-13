/* Entry 0x088D9518 | file offset 0x000D64F0 | FUN_088d9518 | bytes 60 */

undefined4 FUN_088d9518(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d93d8();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

