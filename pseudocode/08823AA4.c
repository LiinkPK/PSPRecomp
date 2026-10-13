/* Entry 0x08823AA4 | file offset 0x00020A7C | FUN_08823aa4 | bytes 264 */

undefined4 FUN_08823aa4(float param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auStack_30 [16];
  
  fVar4 = (float)FUN_08823a64();
  fVar4 = -fVar4;
  if (fVar4 == 0.0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0881e67c(DAT_089d4910,*(undefined4 *)(*(int *)(param_2 + 0x24) + 0x568),param_3);
    if (iVar1 == 0) {
      uVar3 = 0xfffffffe;
    }
    else {
      iVar2 = FUN_08842164();
      if (iVar2 == 0) {
        uVar3 = 0xfffffffd;
      }
      else {
        FUN_089a38fc(auStack_30,iVar2 + 0x80,param_4);
        uVar5 = FUN_089a3bf8(auStack_30);
        uVar3 = FUN_0881baa8();
        FUN_0881c82c(uVar5,fVar4 * (param_1 / fVar4) * (param_1 / fVar4) * -0.5,uVar3,
                     *(undefined4 *)(iVar1 + 0xc));
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

