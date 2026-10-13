/* Entry 0x088D7A2C | file offset 0x000D4A04 | FUN_088d7a2c | bytes 212 */

undefined4 FUN_088d7a2c(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_088d82f0(param_1 + 0x24);
  uVar2 = FUN_088d93e0(param_1 + 0x5c);
  if (uVar1 < uVar2) {
    iVar3 = FUN_088d9418(param_1 + 0x5c,uVar1);
    if (iVar3 == 0) {
      uVar5 = 0xfffffffe;
    }
    else {
      pcVar4 = (code *)FUN_088d8f00(iVar3);
      if (pcVar4 == (code *)0x0) {
        uVar5 = 0xfffffffd;
      }
      else {
        iVar3 = (*pcVar4)();
        if (iVar3 == 1) {
          FUN_088d83d8(param_1 + 0x24);
          *(undefined4 *)(param_1 + 0x10) = 4;
        }
        uVar5 = 0;
      }
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

