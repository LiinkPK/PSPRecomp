/* Entry 0x088A3A94 | file offset 0x000A0A6C | FUN_088a3a94 | bytes 436 */

void FUN_088a3a94(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [32];
  undefined4 local_28;
  
  piVar5 = &DAT_089d6ca8;
  FUN_088698fc(auStack_90);
  iVar4 = 0;
  if (param_2 == 0) {
    uVar1 = FUN_08867964();
    FUN_0893476c(auStack_88,"voice/%s/voice_load_parameter.mpk",uVar1);
    local_28 = FUN_08862c40(auStack_88,1);
    iVar4 = FUN_088a0cb0(local_28,"voice_load_mpk");
    if (iVar4 != 0) {
      param_2 = FUN_088a0cf8(iVar4);
      FUN_08862854(auStack_88,param_2,local_28,1);
    }
  }
  FUN_08869954(auStack_90,param_2);
  iVar3 = 0;
  iVar6 = param_1;
  do {
    if (*piVar5 != 0) {
      FUN_0893476c(auStack_48,"voice_load_p_%s.bin",*piVar5);
      iVar2 = FUN_08869ab4(auStack_90,auStack_48);
      if (iVar2 != 0) {
        FUN_088a3914(iVar6,auStack_48,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
      }
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + 0xc;
  } while (iVar3 < 0x23);
  FUN_088699f4(auStack_90);
  if (iVar4 != 0) {
    FUN_088a0d1c(iVar4);
    FUN_088a0cd4(iVar4);
  }
  FUN_088a0d40();
  iVar4 = 0;
  do {
    FUN_088a39d4(param_1);
    iVar4 = iVar4 + 1;
    param_1 = param_1 + 0xc;
  } while (iVar4 < 0x23);
  FUN_08869908(auStack_90,2);
  return;
}

