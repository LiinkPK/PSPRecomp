/* Entry 0x088B3EDC | file offset 0x000B0EB4 | FUN_088b3edc | bytes 620 */

void FUN_088b3edc(undefined4 param_1,undefined2 *param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 auStack_830 [4];
  undefined1 auStack_82c [12];
  undefined2 local_820;
  undefined2 local_81c [946];
  short local_b8 [32];
  short local_78 [32];
  int local_38;
  int local_34;
  int local_30;
  
  puVar6 = auStack_830;
  local_30 = param_4;
  iVar2 = FUN_088b6f00(param_3);
  FUN_088cb9e8(auStack_830);
  FUN_088cbbb4(auStack_830,param_3);
  iVar4 = 0x1d9;
  iVar7 = 0;
  puVar5 = param_2;
  do {
    uVar1 = *(undefined2 *)(puVar6 + 0x12);
    *puVar5 = local_820;
    puVar5[1] = uVar1;
    puVar6 = auStack_82c + iVar7;
    iVar4 = iVar4 + -1;
    local_820 = *(undefined2 *)((int)local_81c + iVar7);
    puVar5 = (undefined2 *)((int)param_2 + iVar7 + 4);
    iVar7 = iVar7 + 4;
  } while (iVar4 != 0);
  *puVar5 = local_820;
  local_34 = iVar2;
  FUN_088b74a4(param_2 + *(char *)((int)param_2 + 0x763) * 99);
  if (iVar2 != 0) {
    local_38 = 1;
    if (0 < local_30) {
      do {
        psVar3 = (short *)FUN_088b6ddc(local_34,local_38);
        if (psVar3 != (short *)0x0) {
          iVar7 = 0;
          do {
            psVar3 = psVar3 + 1;
            if (*psVar3 != -1) {
              FUN_088b7ed4(param_2,(int)*psVar3);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 3);
        }
        iVar7 = 0;
        if (0 < param_5) {
          do {
            FUN_088b8230(param_2,0,0,1);
            iVar2 = FUN_088b9ba0(local_b8,0x20,param_2,param_3,0,0);
            iVar4 = 0;
            puVar6 = auStack_830;
            if (0 < iVar2) {
              do {
                FUN_088b7ed4(param_2,(int)*(short *)(puVar6 + 0x778));
                iVar4 = iVar4 + 1;
                puVar6 = puVar6 + 2;
              } while (iVar4 < iVar2);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < param_5);
        }
        local_38 = local_38 + 1;
      } while (local_38 <= local_30);
    }
    if (param_5 < 0) {
      while( true ) {
        FUN_088b8384(param_2);
        iVar7 = FUN_088b9ba0(local_78,0x20,param_2,param_3,0,0);
        if (iVar7 == 0) break;
        iVar2 = 0;
        puVar6 = auStack_830;
        if (0 < iVar7) {
          do {
            FUN_088b7ed4(param_2,(int)*(short *)(puVar6 + 0x7b8));
            iVar2 = iVar2 + 1;
            puVar6 = puVar6 + 2;
          } while (iVar2 < iVar7);
        }
      }
    }
  }
  return;
}

