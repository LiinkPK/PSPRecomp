/* Entry 0x08844520 | file offset 0x000414F8 | FUN_08844520 | bytes 104 */

void FUN_08844520(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_088444d4();
  iVar2 = FUN_0884405c(uVar1);
  if (iVar2 == 0) {
    FUN_0884404c(uVar1);
  }
  else {
    FUN_08846628(uVar1);
    FUN_0885c538(*(undefined4 *)(param_1 + 4),uVar1,0);
  }
  return;
}

