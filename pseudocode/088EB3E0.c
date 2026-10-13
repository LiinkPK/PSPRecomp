/* Entry 0x088EB3E0 | file offset 0x000E83B8 | FUN_088eb3e0 | bytes 636 */

void FUN_088eb3e0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  undefined2 *local_4c;
  undefined2 *local_48;
  undefined4 local_44;
  
  fVar11 = (float)param_4 / (float)param_6;
  iVar6 = param_5 + 1;
  iVar8 = param_6 + 1;
  fVar10 = (float)param_3 / (float)param_5;
  local_50 = (float)param_4 * 0.5;
  local_44 = param_2;
  puVar1 = (undefined2 *)FUN_089a00f4(iVar6 * iVar8 * 10);
  puVar2 = (undefined2 *)FUN_089a00f4(iVar6 * param_6 * 4);
  iVar7 = 0;
  local_4c = puVar2;
  local_48 = puVar1;
  if (0 < iVar8) {
    do {
      iVar5 = 0;
      if (0 < iVar6) {
        fVar9 = fVar11 * (float)iVar7 - local_50;
        do {
          puVar1[1] = (short)(int)(fVar11 * (float)iVar7);
          local_60 = fVar10 * (float)iVar5 - (float)param_3 * 0.5;
          *puVar1 = (short)(int)(fVar10 * (float)iVar5);
          local_58 = 0.0;
          local_54 = 0x3f800000;
          local_5c = fVar9;
          FUN_089a3f40(&local_60,param_1,&local_60);
          iVar5 = iVar5 + 1;
          puVar1[2] = (short)(int)local_60;
          puVar1[3] = (short)(int)local_5c;
          puVar1[4] = (short)(int)local_58;
          puVar1 = puVar1 + 5;
        } while (iVar5 < iVar6);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar8);
  }
  iVar7 = 0;
  iVar8 = 0;
  if (0 < param_6) {
    do {
      iVar5 = 0;
      if (0 < iVar6) {
        iVar4 = iVar8 + iVar6;
        iVar3 = iVar8;
        do {
          *puVar2 = (short)iVar3;
          puVar2[1] = (short)iVar4;
          iVar5 = iVar5 + 1;
          puVar2 = puVar2 + 2;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar5 < iVar6);
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + iVar6;
    } while (iVar7 < param_6);
  }
  FUN_089a0c8c(local_44);
  FUN_089a05f0(4,0x801102,iVar6 * 2,param_6,local_4c,local_48);
  return;
}

