/* Entry 0x088C1AE8 | file offset 0x000BEAC0 | FUN_088c1ae8 | bytes 72 */

bool FUN_088c1ae8(undefined4 param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  
  if (param_2 < 1) {
    bVar1 = false;
  }
  else {
    uVar2 = FUN_088c1998();
    bVar1 = (uVar2 & 1 << (param_2 - 1U & 0x1f)) != 0;
  }
  return bVar1;
}

