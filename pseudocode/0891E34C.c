/* Entry 0x0891E34C | file offset 0x0011B324 | FUN_0891e34c | bytes 664 */

void FUN_0891e34c(undefined4 *param_1,undefined4 param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 local_60 [2];
  char *local_5c;
  undefined2 local_58;
  char *local_54;
  undefined2 local_50;
  undefined4 local_4c;
  undefined2 local_48 [2];
  char *local_44;
  undefined2 local_40;
  char *local_3c;
  undefined2 local_38;
  char *local_34;
  undefined2 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  
  local_60[0] = 1;
  local_5c = "menu/menu_pk_party_battle_title_seq_0.bin";
  local_58 = 0;
  local_54 = "menu/menu_pk_party_battle_title_gim_0.bin";
  local_50 = 0xffff;
  local_4c = 0;
  local_48[0] = 1;
  local_44 = "menu/menu_pk_party_battle_title_seq_0.bin";
  local_40 = 0;
  local_3c = "menu/menu_pk_party_battle_title_gim_0.bin";
  local_38 = 0;
  local_34 = "menu/EN/menu_lpk_party_battle_title_gim_0.bin";
  local_30 = 0xffff;
  local_2c = 0;
  iVar2 = FUN_08867894();
  if (iVar2 == 1) {
    FUN_088d00fc(DAT_089d7830,param_2,0x7800,0x23,local_60,0);
  }
  else {
    FUN_088d00fc(DAT_089d7830,param_2,0xc800,0x23,local_48,0);
  }
  uVar3 = FUN_088d0700(DAT_089d7830,0x23,0x1a00,0x1800);
  *param_1 = uVar3;
  iVar2 = FUN_088daa40(uVar3,0,0);
  param_1[1] = iVar2;
  *(undefined2 *)(iVar2 + 0xe) = 1;
  if (*param_3 == 0) {
    if (-1 < param_3[0x20]) {
      local_28 = param_1 + 2;
      if (DAT_089d5f20 == '\x01') {
        FUN_0887b260(local_28,"text/JP/mess_pk_party_battle_title_prologus_0.bin",param_2,0);
        sVar1 = param_3[0x20];
      }
      else {
        FUN_0887b260(local_28,"text/JP/mess_pk_party_battle_title_0.bin",param_2,0);
        sVar1 = param_3[0x20];
      }
      uVar3 = FUN_0887b3ec(local_28,0,0,(int)sVar1,0,0);
      param_1[4] = uVar3;
      uVar3 = FUN_0887e534(uVar3);
      param_1[5] = uVar3;
      *(undefined1 *)(param_1 + 7) = 1;
    }
  }
  else {
    uVar3 = FUN_0887d868(DAT_089d6998,0,param_3,0xffffffff,0,0,0,0);
    param_1[4] = uVar3;
    uVar3 = FUN_0887e534(uVar3);
    param_1[5] = uVar3;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  iVar2 = 0;
  puVar5 = param_1;
  do {
    iVar6 = puVar5[4];
    if (iVar6 != 0) {
      FUN_0887b9c4(iVar6);
      FUN_0887b98c(iVar6);
      iVar4 = param_1[1];
      if (iVar6 != 0) {
        *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) | 0x8000;
        if (*(int *)(iVar4 + 0x34) == 0) {
          *(int *)(iVar4 + 0x34) = iVar6;
          *(int *)(iVar4 + 0x30) = iVar6;
          *(undefined4 *)(iVar6 + 0x4c) = 0;
          *(undefined4 *)(iVar6 + 0x54) = 0;
          iVar7 = *(int *)(iVar4 + 0x38);
        }
        else {
          *(int *)(*(int *)(iVar4 + 0x34) + 0x4c) = iVar6;
          uVar3 = *(undefined4 *)(iVar4 + 0x34);
          *(undefined4 *)(iVar6 + 0x4c) = 0;
          *(undefined4 *)(iVar6 + 0x54) = uVar3;
          iVar7 = *(int *)(iVar4 + 0x38);
          *(int *)(iVar4 + 0x34) = iVar6;
        }
        *(int *)(iVar4 + 0x38) = iVar7 + 1;
      }
    }
    iVar2 = iVar2 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar2 < 2);
  return;
}

