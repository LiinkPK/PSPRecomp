/* Entry 0x08927E20 | file offset 0x00124DF8 | FUN_08927e20 | bytes 1268 */

void FUN_08927e20(int param_1,char *param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  short **ppsVar8;
  int iVar9;
  short **ppsVar10;
  int iVar11;
  uint uVar12;
  short *local_50 [2];
  short local_48 [4];
  undefined2 local_40;
  char *local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  ppsVar8 = local_50;
  ppsVar10 = local_50;
  local_30 = 0;
  iVar7 = 0;
  do {
    *ppsVar8 = (short *)0x0;
    iVar7 = iVar7 + 1;
    ppsVar8 = ppsVar8 + 1;
  } while (iVar7 < 2);
  local_38 = 0;
  pcVar4 = param_2 + 4;
  local_34 = param_3 * 10;
  do {
    local_3c = pcVar4;
    if (*param_2 < 0) {
      cVar3 = *(char *)(*(int *)(param_1 + 0x20) + 0xb7);
      goto LAB_08928244;
    }
    psVar2 = (short *)FUN_08925c90(param_1,(int)*param_2,(int)*(short *)(param_2 + 2));
    if (psVar2 != (short *)0x0) {
      iVar9 = (int)*psVar2;
      cVar3 = *param_2;
      iVar11 = 0;
      iVar7 = 0;
      if (cVar3 < '\x04') {
        if (cVar3 == '\x02') {
          iVar5 = *(int *)(param_2 + 4);
          if (iVar5 == -1) {
            iVar9 = -1;
          }
          else {
            if (iVar5 == 0x46) goto LAB_0892821c;
            local_30 = 1;
            iVar7 = iVar5;
          }
        }
      }
      else if (cVar3 < '\x05') {
        uVar12 = (uint)(byte)param_2[4];
        ppsVar8 = local_50 + uVar12;
        psVar6 = *ppsVar8;
        if (psVar6 == (short *)0x0) {
          FUN_08925dc0(param_1,iVar9,param_2[4],0);
          uVar12 = (uint)(byte)param_2[4];
          ppsVar8 = local_50 + uVar12;
        }
        else {
          iVar7 = (int)*psVar6;
          if (iVar7 != iVar9) {
            if (*(char *)((int)psVar6 + 3) == *(char *)((int)psVar2 + 3)) {
              FUN_08925dc0(param_1,iVar7,(int)((uVar12 + 6) * 0x10000) >> 0x10,0);
              FUN_08925dc0(param_1,iVar9,(int)(((byte)param_2[4] + 8) * 0x10000) >> 0x10,0);
              uVar12 = (uint)(byte)param_2[4];
              ppsVar8 = local_50 + uVar12;
            }
            else {
              FUN_08925dc0(param_1,iVar7,(int)((uVar12 + 2) * 0x10000) >> 0x10,0);
              FUN_08925dc0(param_1,iVar9,param_2[4],0);
              uVar12 = (uint)(byte)param_2[4];
              ppsVar8 = local_50 + uVar12;
            }
          }
        }
        iVar7 = local_34;
        *ppsVar8 = psVar2;
        iVar11 = (int)((uVar12 + 4) * 0x10000) >> 0x10;
        iVar7 = FUN_08925c60(param_1,(int)(((uint)*(ushort *)(param_2 + 6) + iVar7) * 0x10000) >>
                                     0x10);
      }
      else if (cVar3 < '\x06') {
        local_48[0] = *(undefined2 *)local_3c;
        local_48[1] = *(undefined2 *)(local_3c + 2);
        local_48[2] = *(undefined2 *)(local_3c + 4);
        local_48[3] = *(undefined2 *)(local_3c + 6);
        local_40 = *(undefined2 *)(local_3c + 8);
        iVar9 = 0;
        ppsVar8 = local_50;
        do {
          psVar2 = (short *)FUN_08925c90(param_1,5,(int)*(short *)((int)ppsVar8 + 8));
          if (psVar2 == (short *)0x0) break;
          sVar1 = *psVar2;
          if (sVar1 == 0x3a) {
            if (local_50[0] != (short *)0x0) {
              sVar1 = *local_50[0];
              local_50[0] = (short *)0x0;
              FUN_08925dc0(param_1,(int)sVar1,2,0);
            }
          }
          else if (sVar1 == 0x3b) {
            if (local_50[1] != (short *)0x0) {
              sVar1 = *local_50[1];
              local_50[1] = (short *)0x0;
              FUN_08925dc0(param_1,(int)sVar1,3,0);
            }
          }
          else if (sVar1 == 0x3f) {
            if (local_50[0] != (short *)0x0) {
              sVar1 = *local_50[0];
              local_50[0] = (short *)0x0;
              FUN_08925dc0(param_1,(int)sVar1,2,0);
            }
            if (local_50[1] != (short *)0x0) {
              sVar1 = *local_50[1];
              local_50[1] = (short *)0x0;
              FUN_08925dc0(param_1,(int)sVar1,3,0);
            }
          }
          else {
            FUN_08925dc0(param_1,(int)sVar1,0,0);
          }
          iVar9 = iVar9 + 1;
          ppsVar8 = (short **)((int)ppsVar8 + 2);
        } while (iVar9 < 5);
        FUN_08925dc0(param_1,0x39,0,0);
        iVar9 = -1;
      }
      if (iVar9 != -1) {
        FUN_08925dc0(param_1,iVar9,iVar11,iVar7);
      }
    }
LAB_0892821c:
    local_38 = local_38 + 1;
    pcVar4 = local_3c + 0x10;
    param_2 = param_2 + 0x10;
  } while (local_38 < 0x16);
  cVar3 = *(char *)(*(int *)(param_1 + 0x20) + 0xb7);
LAB_08928244:
  if (cVar3 != '\0') {
    iVar7 = 0;
    do {
      if (*ppsVar10 != (short *)0x0) {
        FUN_08925dc0(param_1,(int)**ppsVar10,(iVar7 + 2) * 0x10000 >> 0x10,0);
        *ppsVar10 = (short *)0x0;
      }
      iVar7 = iVar7 + 1;
      ppsVar10 = ppsVar10 + 1;
    } while (iVar7 < 2);
    if (local_30 != 0) {
      psVar2 = (short *)FUN_08925c90(param_1,3,0xffffffff);
      FUN_08925dc0(param_1,(int)*psVar2,0,0);
    }
    psVar2 = (short *)FUN_08925c90(param_1,1,0xffffffff);
    FUN_08925dc0(param_1,(int)*psVar2,0,0);
  }
  return;
}

