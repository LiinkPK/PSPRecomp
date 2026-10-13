/* Entry 0x08837124 | file offset 0x000340FC | FUN_08837124 | bytes 52 */

undefined4 FUN_08837124(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08835358();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x18);
  }
  return uVar2;
}

