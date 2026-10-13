/* Entry 0x0889B968 | file offset 0x00098940 | FUN_0889b968 | bytes 1352 */

undefined4 FUN_0889b968(int param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_90 [16];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  fVar11 = -3.4028235e+38;
  iVar1 = FUN_0889740c(param_1);
  local_64 = -1;
  if (iVar1 == 1) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_1 + 4) != 0) {
      local_7c = *param_2 - 0.0001;
      local_78 = param_2[1] - 0.0001;
      local_74 = param_2[2] - 0.0001;
      FUN_089a3528(&local_7c,&local_7c,param_1 + 0xd8);
      FUN_089a3590(&local_7c,&local_7c,param_1 + 0xe4);
      iVar1 = *(int *)(param_1 + 4);
      fVar8 = (float)(*(int *)(iVar1 + 4) + -1);
      if (local_7c < 0.0) {
        local_7c = 0.0;
      }
      else if (fVar8 < local_7c) {
        local_7c = fVar8;
      }
      fVar8 = (float)(*(int *)(iVar1 + 8) + -1);
      if (local_78 < 0.0) {
        fVar8 = 0.0;
      }
      else if (local_78 <= fVar8) {
        fVar8 = local_78;
      }
      fVar9 = (float)(*(int *)(iVar1 + 0xc) + -1);
      if (local_74 < 0.0) {
        fVar9 = 0.0;
      }
      else if (local_74 <= fVar9) {
        fVar9 = local_74;
      }
      local_70 = *param_2 + 0.0001;
      local_6c = param_2[1] + 0.0001;
      local_68 = param_2[2] + 0.0001;
      local_78 = fVar8;
      local_74 = fVar9;
      FUN_089a3528(&local_70,&local_70,param_1 + 0xd8);
      FUN_089a3590(&local_70,&local_70,param_1 + 0xe4);
      iVar1 = *(int *)(param_1 + 4);
      local_48 = (int)local_74;
      fVar8 = (float)(*(int *)(iVar1 + 4) + -1);
      if (local_70 < 0.0) {
        fVar8 = 0.0;
      }
      else if (local_70 <= fVar8) {
        fVar8 = local_70;
      }
      local_44 = (int)fVar8;
      fVar9 = (float)(*(int *)(iVar1 + 8) + -1);
      if (local_6c < 0.0) {
        fVar9 = 0.0;
      }
      else if (local_6c <= fVar9) {
        fVar9 = local_6c;
      }
      fVar10 = (float)(*(int *)(iVar1 + 0xc) + -1);
      if (local_68 < 0.0) {
        fVar10 = 0.0;
      }
      else if (local_68 <= fVar10) {
        fVar10 = local_68;
      }
      local_50 = (int)local_7c;
      if (fVar8 <= local_7c) {
        local_50 = local_44;
        local_44 = (int)local_7c;
      }
      local_54 = (int)fVar10;
      if (fVar10 <= local_74) {
        local_54 = local_48;
        local_48 = (int)fVar10;
      }
      local_4c = *(int *)(iVar1 + 0xc);
      if (local_50 <= local_44) {
        local_58 = local_4c * local_50;
        local_70 = fVar8;
        local_6c = fVar9;
        local_68 = fVar10;
        do {
          local_5c = local_48;
          if (local_48 <= local_54) {
            do {
              iVar1 = local_58 + local_5c;
              FUN_0889d96c(param_2);
              local_60 = iVar1 * 0x48;
              iVar1 = FUN_0885be40(*(int *)(param_1 + 0x20) + local_60,param_2);
              if (iVar1 != 0) {
                iVar7 = 0;
                iVar1 = 0;
                do {
                  iVar4 = *(int *)(param_1 + 0x20) + local_60 + iVar1;
                  iVar6 = *(int *)(iVar4 + 0x1c);
                  if (0 < iVar6) {
                    psVar5 = (short *)(*(int *)(param_1 + 0x24) + *(int *)(iVar4 + 0x18) * 2);
                    iVar4 = 0;
                    if (0 < iVar6) {
                      do {
                        iVar2 = FUN_0889877c(param_1,*(undefined1 *)
                                                      (*(int *)(param_1 + 0x14) + *psVar5 * 0x18));
                        if ((((iVar2 != 0) &&
                             (iVar2 = FUN_08899968(param_1,&local_80,auStack_90,
                                                   *(int *)(param_1 + 0x14) + *psVar5 * 0x18),
                             iVar2 != 0)) && (local_80 <= param_2[1])) && (fVar11 < local_80)) {
                          FUN_089a3868(param_3,auStack_90);
                          local_64 = (int)*psVar5;
                          fVar11 = local_80;
                        }
                        iVar4 = iVar4 + 1;
                        psVar5 = psVar5 + 1;
                      } while (iVar4 < iVar6);
                    }
                  }
                  iVar7 = iVar7 + 1;
                  iVar1 = iVar1 + 8;
                } while (iVar7 < 6);
              }
              local_5c = local_5c + 1;
            } while (local_5c <= local_54);
          }
          local_50 = local_50 + 1;
          local_58 = local_58 + local_4c;
        } while (local_50 <= local_44);
      }
    }
    if (local_64 < 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

