/* Entry 0x08887A4C | file offset 0x00084A24 | FUN_08887a4c | bytes 256 */

void FUN_08887a4c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_110 [256];
  int local_10;
  
  if (((*(char *)(param_1 + 0x18) != '\0') && (*(int *)(param_1 + 4) == 2)) &&
     (*(int *)(param_1 + 0x1c) == 0)) {
    local_10 = param_1;
    uVar1 = FUN_08867964();
    FUN_0893476c(auStack_110,"voice/%s/battle/voice_p_org200_s_hard2.scd",uVar1);
    DAT_089d5f1c = 1;
    uVar1 = FUN_08862c40(auStack_110,1);
    uVar2 = FUN_088908e0();
    uVar2 = FUN_0885c6cc(uVar2,uVar1,0,0,1,0);
    *(undefined4 *)(local_10 + 0x1c) = uVar2;
    FUN_08862854(auStack_110,uVar2,uVar1,1);
    DAT_089d5f1c = 0;
    uVar1 = FUN_088a0dbc(DAT_089d6c80,auStack_110,*(undefined4 *)(local_10 + 0x1c),uVar1,0);
    *(undefined4 *)(local_10 + 0x20) = uVar1;
  }
  return;
}

