/* Entry 0x08982C44 | file offset 0x0017FC1C | FUN_08982c44 | bytes 2780 */

void FUN_08982c44(undefined4 param_1,int param_2,uint param_3,int *param_4,undefined4 *param_5,
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
  float fVar10;
  float fVar11;
  float fVar12;
  byte bStack_ef;
  byte bStack_ee;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  byte bStack_cf;
  byte bStack_ce;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  uint local_50;
  
  iVar4 = *param_4;
  fVar10 = 1.0;
  uVar2 = param_4[2];
  if (*(char *)(param_2 + 0x70) != '\0') {
    iVar4 = iVar4 - param_3;
  }
  fVar9 = (float)iVar4;
  if (iVar4 < 0) {
    fVar9 = fVar9 + 4.2949673e+09;
  }
  fVar12 = *(float *)(param_2 + 0x1c);
  if (param_7 == '\0') {
    if (param_4[1] == 0) {
      if (param_3 < uVar2 >> 2) {
        param_6 = param_6 + param_3;
        param_5 = param_5 + param_3;
        do {
          uVar2 = *param_6;
          bStack_ef = (byte)(uVar2 >> 8);
          bStack_ee = (byte)(uVar2 >> 0x10);
          fVar7 = 1.0 - fVar10;
          fVar11 = ((float)(uVar2 & 0xff) * 0.299 + (float)bStack_ef * 0.587 +
                   (float)bStack_ee * 0.114) * fVar10;
          fVar8 = fVar10 * fVar12;
          param_3 = param_3 + 1;
          fVar10 = -1.0 / fVar9 + fVar10;
          param_6 = param_6 + 1;
          *param_5 = CONCAT13((char)(int)(fVar8 + (float)(uVar2 >> 0x18) * fVar7),
                              CONCAT12((char)(int)(fVar11 + (float)bStack_ee * fVar7),
                                       CONCAT11((char)(int)(fVar11 + (float)bStack_ef * fVar7),
                                                (char)(int)(fVar11 + (float)(uVar2 & 0xff) * fVar7))
                                      ));
          param_5 = param_5 + 1;
        } while (param_3 < (uint)param_4[2] >> 2);
      }
    }
    else if (param_3 < uVar2 >> 1) {
      puVar6 = (undefined2 *)((int)param_6 + param_3 * 2);
      puVar5 = (undefined2 *)((int)param_5 + param_3 * 2);
      fVar12 = fVar12 * 1.0;
      do {
        uVar1 = *puVar6;
        if (param_4[1] == 1) {
          FUN_089a4a24(0,&local_e0,uVar1);
          fVar10 = (local_e0 * 0.299 * 255.0 + local_dc * 0.587 * 255.0 + local_d8 * 0.114 * 255.0)
                   * 1.0;
          local_e0 = (fVar10 + local_e0 * 0.0) / 255.0;
          local_dc = (fVar10 + local_dc * 0.0) / 255.0;
          local_d8 = (fVar10 + local_d8 * 0.0) / 255.0;
          if ((fVar12 + local_d4 * 0.0) / 255.0 == 0.0) {
            local_d4 = 0.0;
          }
          else {
            local_d4 = 1.0;
          }
          FUN_089a3918(auStack_b0,&DAT_089da410,&local_e0);
          FUN_089a3a84(0,0x3f800000,auStack_b0,auStack_b0);
          uVar1 = FUN_089a4928(0,auStack_b0);
          *puVar5 = uVar1;
          uVar2 = (uint)param_4[2] >> 1;
        }
        else if (param_4[1] == 2) {
          FUN_089a49d4(0,&local_e0,uVar1);
          fVar10 = (local_e0 * 0.299 * 255.0 + local_dc * 0.587 * 255.0 + local_d8 * 0.114 * 255.0)
                   * 1.0;
          local_e0 = (fVar10 + local_e0 * 0.0) / 255.0;
          local_dc = (fVar10 + local_dc * 0.0) / 255.0;
          local_d8 = (fVar10 + local_d8 * 0.0) / 255.0;
          if ((fVar12 + local_d4 * 0.0) / 255.0 == 0.0) {
            local_d4 = 0.0;
          }
          else {
            local_d4 = 1.0;
          }
          FUN_089a3918(auStack_a0,&DAT_089da410,&local_e0);
          FUN_089a3a84(0,0x3f800000,auStack_a0,auStack_a0);
          uVar1 = FUN_089a4928(0,auStack_a0);
          *puVar5 = uVar1;
          uVar2 = (uint)param_4[2] >> 1;
        }
        else {
          FUN_089a498c(&local_e0,uVar1);
          fVar10 = (local_e0 * 0.299 * 255.0 + local_dc * 0.587 * 255.0 + local_d8 * 0.114 * 255.0)
                   * 1.0;
          local_e0 = (fVar10 + local_e0 * 0.0) / 255.0;
          local_dc = (fVar10 + local_dc * 0.0) / 255.0;
          local_d8 = (fVar10 + local_d8 * 0.0) / 255.0;
          if ((fVar12 + local_d4 * 0.0) / 255.0 == 0.0) {
            local_d4 = 0.0;
          }
          else {
            local_d4 = 1.0;
          }
          FUN_089a3918(auStack_90,&DAT_089da410,&local_e0);
          FUN_089a3a84(0,0x3f800000,auStack_90,auStack_90);
          uVar1 = FUN_089a48f0(auStack_90);
          *puVar5 = uVar1;
          uVar2 = (uint)param_4[2] >> 1;
        }
        param_3 = param_3 + 1;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (param_3 < uVar2);
    }
  }
  else if (param_4[1] == 0) {
    uVar3 = 0;
    if (uVar2 >> 2 != param_3) {
      do {
        uVar2 = *param_6;
        bStack_cf = (byte)(uVar2 >> 8);
        bStack_ce = (byte)(uVar2 >> 0x10);
        fVar7 = 1.0 - fVar10;
        fVar11 = ((float)(uVar2 & 0xff) * 0.299 + (float)bStack_cf * 0.587 +
                 (float)bStack_ce * 0.114) * fVar10;
        fVar8 = fVar10 * fVar12;
        fVar10 = -1.0 / fVar9 + fVar10;
        uVar3 = uVar3 + 1;
        *param_5 = CONCAT13((char)(int)(fVar8 + (float)(uVar2 >> 0x18) * fVar7),
                            CONCAT12((char)(int)(fVar11 + (float)bStack_ce * fVar7),
                                     CONCAT11((char)(int)(fVar11 + (float)bStack_cf * fVar7),
                                              (char)(int)(fVar11 + (float)(uVar2 & 0xff) * fVar7))))
        ;
        param_6 = param_6 + 1;
        param_5 = param_5 + 1;
      } while (uVar3 < ((uint)param_4[2] >> 2) - param_3);
    }
  }
  else {
    uVar3 = 0;
    if (uVar2 >> 1 != param_3) {
      fVar12 = fVar12 * 1.0;
      do {
        uVar1 = (undefined2)*param_6;
        local_50 = param_3;
        if (param_4[1] == 1) {
          FUN_089a4a24(0,&local_c0,uVar1);
          fVar10 = (local_c0 * 0.299 * 255.0 + local_bc * 0.587 * 255.0 + local_b8 * 0.114 * 255.0)
                   * 1.0;
          local_c0 = (fVar10 + local_c0 * 0.0) / 255.0;
          local_bc = (fVar10 + local_bc * 0.0) / 255.0;
          local_b8 = (fVar10 + local_b8 * 0.0) / 255.0;
          if ((fVar12 + local_b4 * 0.0) / 255.0 == 0.0) {
            local_b4 = 0.0;
          }
          else {
            local_b4 = 1.0;
          }
          FUN_089a3918(auStack_80,&DAT_089da410,&local_c0);
          FUN_089a3a84(0,0x3f800000,auStack_80,auStack_80);
          uVar1 = FUN_089a4928(0,auStack_80);
          *(undefined2 *)param_5 = uVar1;
          uVar2 = ((uint)param_4[2] >> 1) - local_50;
        }
        else if (param_4[1] == 2) {
          FUN_089a49d4(0,&local_c0,uVar1);
          fVar10 = (local_c0 * 0.299 * 255.0 + local_bc * 0.587 * 255.0 + local_b8 * 0.114 * 255.0)
                   * 1.0;
          local_c0 = (fVar10 + local_c0 * 0.0) / 255.0;
          local_bc = (fVar10 + local_bc * 0.0) / 255.0;
          local_b8 = (fVar10 + local_b8 * 0.0) / 255.0;
          if ((fVar12 + local_b4 * 0.0) / 255.0 == 0.0) {
            local_b4 = 0.0;
          }
          else {
            local_b4 = 1.0;
          }
          FUN_089a3918(auStack_70,&DAT_089da410,&local_c0);
          FUN_089a3a84(0,0x3f800000,auStack_70,auStack_70);
          uVar1 = FUN_089a4928(0,auStack_70);
          *(undefined2 *)param_5 = uVar1;
          uVar2 = ((uint)param_4[2] >> 1) - local_50;
        }
        else {
          FUN_089a498c(&local_c0,uVar1);
          fVar10 = (local_c0 * 0.299 * 255.0 + local_bc * 0.587 * 255.0 + local_b8 * 0.114 * 255.0)
                   * 1.0;
          local_c0 = (fVar10 + local_c0 * 0.0) / 255.0;
          local_bc = (fVar10 + local_bc * 0.0) / 255.0;
          local_b8 = (fVar10 + local_b8 * 0.0) / 255.0;
          if ((fVar12 + local_b4 * 0.0) / 255.0 == 0.0) {
            local_b4 = 0.0;
          }
          else {
            local_b4 = 1.0;
          }
          FUN_089a3918(auStack_60,&DAT_089da410,&local_c0);
          FUN_089a3a84(0,0x3f800000,auStack_60,auStack_60);
          uVar1 = FUN_089a48f0(auStack_60);
          *(undefined2 *)param_5 = uVar1;
          uVar2 = ((uint)param_4[2] >> 1) - local_50;
        }
        uVar3 = uVar3 + 1;
        param_6 = (uint *)((int)param_6 + 2);
        param_5 = (undefined4 *)((int)param_5 + 2);
        param_3 = local_50;
      } while (uVar3 < uVar2);
    }
  }
  return;
}

