/* Entry 0x088D78F4 | file offset 0x000D48CC | FUN_088d78f4 | bytes 252 */

undefined4 FUN_088d78f4(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  
  iVar6 = param_1 + 0x24;
  iVar2 = FUN_088d82b8(iVar6);
  if (iVar2 != 0) {
    bVar1 = false;
    if (iVar2 == 1) {
      uVar3 = FUN_088d82f0(iVar6);
      uVar4 = FUN_088d93e0(param_1 + 0x5c);
      if ((((uVar3 < uVar4) && (iVar2 = FUN_088d9418(param_1 + 0x5c,uVar3), iVar2 != 0)) &&
          (pcVar5 = (code *)FUN_088d8ec8(iVar2), pcVar5 != (code *)0x0)) &&
         (iVar2 = FUN_088d8f00(iVar2), iVar2 != 0)) {
        (*pcVar5)();
        bVar1 = true;
      }
    }
    if (bVar1) {
      FUN_088d84bc(iVar6);
      *(undefined4 *)(param_1 + 0x10) = 6;
    }
    else {
      FUN_088d7b00(param_1);
    }
  }
  return 0;
}

