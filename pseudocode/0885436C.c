/* Entry 0x0885436C | file offset 0x00051344 | FUN_0885436c | bytes 1488 */

void FUN_0885436c(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [4];
  float local_ac;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [24];
  undefined4 *local_78;
  int local_60;
  int local_5c;
  undefined *local_58;
  int *local_54;
  undefined *local_50;
  undefined *local_4c;
  undefined4 local_48;
  
  local_48 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x394) + 0x84) + 8);
  iVar3 = *(int *)(DAT_089d6ac8 + 0x710);
  if (iVar3 == 0) {
    param_1[0xc] = 0;
  }
  else {
    local_54 = param_1;
    FUN_089a383c(0,0x3dcccccd,0,0,auStack_c0);
    FUN_089a3efc(auStack_110,param_2 + 0x330);
    local_5c = 0;
    local_60 = iVar3 + 8;
    if (0 < param_1[0xc]) {
      local_58 = &DAT_089c8d40;
      local_4c = &DAT_089c8d44;
      local_50 = &DAT_089c8d3c;
      piVar4 = local_54;
      do {
        iVar5 = *piVar4;
        iVar3 = FUN_089b0e78(local_48,(short)piVar4[1]);
        if ((iVar3 != 0) && (iVar3 = FUN_089b1224(), iVar3 != 0)) {
          if (**(int **)(param_2 + 0x394) == 0) {
            fVar6 = 0.0;
          }
          else {
            fVar6 = *(float *)(**(int **)(param_2 + 0x394) + (uint)*(ushort *)(piVar4 + 1) * 4);
          }
          FUN_089a383c(fVar6 * (float)piVar4[3],0,0,0x3f800000,auStack_d0);
          FUN_089a3f40(auStack_d0,iVar3,auStack_d0);
          FUN_089a3f40(auStack_b0,auStack_110,auStack_d0);
          FUN_089a3868(&local_a0,&DAT_09af84e0);
          if (*(char *)((int)piVar4 + 7) == '\0') {
            local_ac = local_ac + 1.0;
            uVar1 = FUN_08899300();
            fVar6 = (float)FUN_088976e4(uVar1,auStack_90,auStack_b0,0x22,1,0,0);
            if ((fVar6 != -3.4028235e+38) && (local_78 != (undefined4 *)0x0)) {
              local_a0 = *local_78;
              local_9c = local_78[1];
              local_98 = local_78[2];
              local_94 = 0x3f800000;
              local_ac = fVar6;
            }
          }
          if ((*DAT_089d85e8 == '\x01') && (iVar3 = func_0x08a50140(), iVar3 == 1)) {
            if (((*(short *)(param_2 + 0x180) != 1) && (*(short *)(param_2 + 0x180) != 0xb)) &&
               ((*(char *)(param_2 + 0x542) == '\x02' || (**(int **)(param_2 + 0x3a4) != 0xc)))) {
              FUN_08853d3c(piVar4[4],DAT_089d4dc8 + 0x188,auStack_b0,&DAT_09af84e0);
            }
          }
          else {
            iVar3 = local_60;
            if (*(char *)((int)piVar4 + 6) == '\0') {
              if ((iVar5 == 0x1e) || (iVar5 == 0x1f)) {
                FUN_0885ad38(piVar4[4],piVar4[5],0x42f00000,DAT_089d4dc8 + 0x160,auStack_b0,
                             &DAT_09af84e0,iVar5,(char)piVar4[2] != '\0');
              }
              if ((*(short *)(param_2 + 0x180) != 1) && (*(short *)(param_2 + 0x180) != 0xb)) {
                iVar3 = FUN_08935b50(local_60,local_58,3);
                if ((iVar3 == 0) &&
                   ((*(char *)(param_2 + 0x542) == '\x02' || (**(int **)(param_2 + 0x3a4) != 0xc))))
                {
                  FUN_08856374(piVar4[4],0xbf800000,0xbf800000,0x3f800000,DAT_089d4dc8 + 0x174,
                               auStack_b0,&DAT_09af84e0,1);
                }
                FUN_0885ba18(DAT_089d4dc8 + 0x7180,param_2,iVar5,auStack_b0,&local_a0);
              }
            }
            else {
              if ((*(char *)((int)piVar4 + 7) == '\0') &&
                 ((iVar2 = FUN_08935b50(local_60,local_4c,3), iVar2 == 0 ||
                  (iVar2 = FUN_08935b50(iVar3,local_50,3), iVar2 == 0)))) {
                FUN_089a38a8(auStack_d0,auStack_c0,auStack_b0);
                FUN_088542d8(DAT_089d4dc8,auStack_d0);
              }
              if (((iVar5 == 6) || (iVar5 == 0x12)) || (iVar5 == 0xd)) {
                FUN_0884ad14(0x3dcccccd,0x3e99999a,auStack_b0,iVar5,&DAT_09af84e0);
              }
              if (((iVar5 == 0x1e) || (iVar5 == 0x1f)) &&
                 ((*(char *)(param_2 + 0x542) == '\x02' || (**(int **)(param_2 + 0x3a4) != 0xc)))) {
                FUN_0885ad38(piVar4[4],piVar4[5],0x42f00000,DAT_089d4dc8 + 0x160,auStack_b0,
                             &DAT_09af84e0,iVar5,1);
              }
              iVar3 = FUN_08935b50(iVar3,local_58,3);
              if ((iVar3 == 0) &&
                 ((*(char *)(param_2 + 0x542) == '\x02' || (**(int **)(param_2 + 0x3a4) != 0xc)))) {
                FUN_08856374(piVar4[4],0xbf800000,0xbf800000,0x3f800000,DAT_089d4dc8 + 0x174,
                             auStack_b0,&DAT_09af84e0,1);
              }
              FUN_0885ba18(DAT_089d4dc8 + 0x7180,param_2,iVar5,auStack_b0,&local_a0);
            }
          }
        }
        local_5c = local_5c + 1;
        piVar4 = piVar4 + 6;
      } while (local_5c < local_54[0xc]);
    }
    local_54[0xc] = 0;
  }
  return;
}

