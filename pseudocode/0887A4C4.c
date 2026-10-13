/* Entry 0x0887A4C4 | file offset 0x0007749C | FUN_0887a4c4 | bytes 56 */

undefined4 FUN_0887a4c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0887a484();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
  }
  return uVar2;
}

