/* Entry 0x088D9140 | file offset 0x000D6118 | FUN_088d9140 | bytes 64 */

undefined4 FUN_088d9140(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d82f0(*(undefined4 *)(param_1 + 0x30));
  if (iVar1 == *(int *)(param_1 + 0x38)) {
    uVar2 = 9;
  }
  else {
    uVar2 = 8;
  }
  return uVar2;
}

