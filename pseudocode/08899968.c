/* Entry 0x08899968 | file offset 0x00096940 | FUN_08899968 | bytes 940 */

undefined4 FUN_08899968(int param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [16];
  
  iVar1 = FUN_0889740c();
  if (iVar1 == 1) {
    *param_2 = -100.0;
    return 1;
  }
  iVar1 = FUN_0889d994(param_4,*(undefined4 *)(param_1 + 8),&local_b0);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      return 0;
    }
  }
  else {
    if (iVar1 < 2) {
      iVar1 = *(int *)(param_1 + 8);
      *param_2 = (*(float *)(iVar1 + *(short *)(param_4 + 0xc) * 0x10 + 4) * local_b0 +
                  *(float *)(iVar1 + *(short *)(param_4 + 8) * 0x10 + 4) * local_ac +
                 *(float *)(iVar1 + *(short *)(param_4 + 10) * 0x10 + 4) * local_a8) / local_a4;
      if (param_3 != 0) {
        iVar1 = *(int *)(param_1 + 0x10);
        puVar2 = (undefined4 *)(iVar1 + *(short *)(param_4 + 0x14) * 0x10);
        local_a0 = *puVar2;
        local_9c = puVar2[1];
        local_98 = puVar2[2];
        local_94 = puVar2[3];
        puVar2 = (undefined4 *)(iVar1 + *(short *)(param_4 + 0x10) * 0x10);
        local_90 = *puVar2;
        local_8c = puVar2[1];
        local_88 = puVar2[2];
        local_84 = puVar2[3];
        puVar2 = (undefined4 *)(iVar1 + *(short *)(param_4 + 0x12) * 0x10);
        local_80 = *puVar2;
        local_7c = puVar2[1];
        local_78 = puVar2[2];
        local_74 = puVar2[3];
        FUN_089a3a44(&local_a0,&local_a0);
        FUN_089a3a44(local_ac,&local_90,&local_90);
        FUN_089a3a44(local_a8,&local_80,&local_80);
        FUN_089a38c4(auStack_70,&local_a0,&local_90);
        FUN_089a38c4(auStack_70,auStack_70,&local_80);
        FUN_089a3a64(1.0 / local_a4,param_3,auStack_70);
      }
      return 1;
    }
    if (iVar1 < 3) {
      iVar1 = *(int *)(param_1 + 8);
      *param_2 = (*(float *)(iVar1 + *(short *)(param_4 + 8) * 0x10 + 4) * local_b0 +
                  *(float *)(iVar1 + *(short *)(param_4 + 0xc) * 0x10 + 4) * local_ac +
                 *(float *)(iVar1 + *(short *)(param_4 + 0xe) * 0x10 + 4) * local_a8) / local_a4;
      if (param_3 != 0) {
        iVar1 = *(int *)(param_1 + 0x10);
        puVar2 = (undefined4 *)(iVar1 + *(short *)(param_4 + 0x10) * 0x10);
        local_60 = *puVar2;
        local_5c = puVar2[1];
        local_58 = puVar2[2];
        local_54 = puVar2[3];
        puVar2 = (undefined4 *)(iVar1 + *(short *)(param_4 + 0x14) * 0x10);
        local_50 = *puVar2;
        local_4c = puVar2[1];
        local_48 = puVar2[2];
        local_44 = puVar2[3];
        puVar2 = (undefined4 *)(iVar1 + *(short *)(param_4 + 0x16) * 0x10);
        local_40 = *puVar2;
        local_3c = puVar2[1];
        local_38 = puVar2[2];
        local_34 = puVar2[3];
        FUN_089a3a44(&local_60,&local_60);
        FUN_089a3a44(local_ac,&local_50,&local_50);
        FUN_089a3a44(local_a8,&local_40,&local_40);
        FUN_089a38c4(auStack_30,&local_60,&local_50);
        FUN_089a38c4(auStack_30,auStack_30,&local_40);
        FUN_089a3a64(1.0 / local_a4,param_3,auStack_30);
      }
      return 1;
    }
  }
  return 0;
}

