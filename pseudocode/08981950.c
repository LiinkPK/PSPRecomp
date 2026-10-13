/* Entry 0x08981950 | file offset 0x0017E928 | FUN_08981950 | bytes 1276 */

void FUN_08981950(undefined4 param_1,int param_2,uint param_3,int *param_4,uint *param_5,
                 uint *param_6,char param_7)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_a0 [12];
  float local_94;
  undefined1 auStack_90 [12];
  float local_84;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  uint local_40;
  
  iVar4 = *param_4;
  uVar2 = param_4[2];
  if (*(char *)(param_2 + 0x70) != '\0') {
    iVar4 = iVar4 - param_3;
  }
  fVar9 = (float)iVar4;
  if (iVar4 < 0) {
    fVar9 = fVar9 + 4.2949673e+09;
  }
  fVar7 = *(float *)(param_2 + 0x1c);
  fVar9 = (*(float *)(param_2 + 0x2c) - fVar7) / fVar9;
  if (param_7 == '\0') {
    if (param_4[1] == 0) {
      if (param_3 < uVar2 >> 2) {
        param_6 = param_6 + param_3;
        param_5 = param_5 + param_3;
        do {
          fVar8 = fVar7 + fVar9;
          *param_5 = *param_6 & 0xffffff | (int)fVar7 << 0x18;
          fVar7 = 255.0;
          if ((fVar8 <= 255.0) && (fVar7 = fVar8, fVar8 < 0.0)) {
            fVar7 = 0.0;
          }
          param_3 = param_3 + 1;
          param_6 = param_6 + 1;
          param_5 = param_5 + 1;
        } while (param_3 < (uint)param_4[2] >> 2);
      }
    }
    else if (param_3 < uVar2 >> 1) {
      puVar5 = (undefined2 *)((int)param_6 + param_3 * 2);
      puVar6 = (undefined2 *)((int)param_5 + param_3 * 2);
      do {
        if (param_4[1] == 2) {
          FUN_089a49d4(0,auStack_a0,*puVar5);
          local_94 = fVar7 / 255.0;
          FUN_089a3918(auStack_80,&DAT_089da410,auStack_a0);
          FUN_089a3a84(0,0x3f800000,auStack_80,auStack_80);
          uVar1 = FUN_089a4928(0,auStack_80);
          *puVar6 = uVar1;
          uVar2 = param_4[2];
        }
        else {
          FUN_089a498c(auStack_a0,*puVar5);
          local_94 = fVar7 / 255.0;
          FUN_089a3918(auStack_70,&DAT_089da410,auStack_a0);
          FUN_089a3a84(0,0x3f800000,auStack_70,auStack_70);
          uVar1 = FUN_089a48f0(auStack_70);
          *puVar6 = uVar1;
          uVar2 = param_4[2];
        }
        fVar8 = fVar7 + fVar9;
        fVar7 = 255.0;
        if ((fVar8 <= 255.0) && (fVar7 = fVar8, fVar8 < 0.0)) {
          fVar7 = 0.0;
        }
        param_3 = param_3 + 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (param_3 < uVar2 >> 1);
    }
  }
  else if (param_4[1] == 0) {
    uVar3 = 0;
    if (uVar2 >> 2 != param_3) {
      do {
        fVar8 = fVar7 + fVar9;
        *param_5 = *param_6 & 0xffffff | (int)fVar7 << 0x18;
        fVar7 = 255.0;
        if ((fVar8 <= 255.0) && (fVar7 = fVar8, fVar8 < 0.0)) {
          fVar7 = 0.0;
        }
        uVar3 = uVar3 + 1;
        param_6 = param_6 + 1;
        param_5 = param_5 + 1;
      } while (uVar3 < ((uint)param_4[2] >> 2) - param_3);
    }
  }
  else {
    uVar3 = 0;
    if (uVar2 >> 1 != param_3) {
      local_40 = param_3;
      do {
        if (param_4[1] == 2) {
          FUN_089a49d4(0,auStack_90,(short)*param_6);
          local_84 = fVar7 / 255.0;
          FUN_089a3918(auStack_60,&DAT_089da410,auStack_90);
          FUN_089a3a84(0,0x3f800000,auStack_60,auStack_60);
          uVar1 = FUN_089a4928(0,auStack_60);
          *(undefined2 *)param_5 = uVar1;
          uVar2 = ((uint)param_4[2] >> 1) - local_40;
        }
        else {
          FUN_089a498c(auStack_90,(short)*param_6);
          local_84 = fVar7 / 255.0;
          FUN_089a3918(auStack_50,&DAT_089da410,auStack_90);
          FUN_089a3a84(0,0x3f800000,auStack_50,auStack_50);
          uVar1 = FUN_089a48f0(auStack_50);
          *(undefined2 *)param_5 = uVar1;
          uVar2 = ((uint)param_4[2] >> 1) - local_40;
        }
        fVar8 = fVar7 + fVar9;
        fVar7 = 255.0;
        if ((fVar8 <= 255.0) && (fVar7 = fVar8, fVar8 < 0.0)) {
          fVar7 = 0.0;
        }
        uVar3 = uVar3 + 1;
        param_6 = (uint *)((int)param_6 + 2);
        param_5 = (uint *)((int)param_5 + 2);
      } while (uVar3 < uVar2);
    }
  }
  return;
}

