/* Entry 0x0895E7B8 | file offset 0x0015B790 | FUN_0895e7b8 | bytes 516 */

void FUN_0895e7b8(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_30 = 0;
  local_2c = *(int *)(**(int **)(param_1 + 4) + 0x14);
  if (0 < local_2c) {
    local_34 = 0;
    local_4c = param_1;
    do {
      local_3c = (int *)(**(int **)(local_4c + 4) + *(int *)(**(int **)(local_4c + 4) + 0x18) +
                        local_34);
      local_38 = *local_3c;
      local_40 = 0;
      if (0 < local_38) {
        piVar8 = local_3c + 3;
        piVar7 = local_3c + 6;
        local_44 = 0;
        do {
          iVar4 = local_4c;
          puVar6 = (undefined4 *)(**(int **)(local_4c + 4) + local_3c[1] + local_44);
          iVar1 = FUN_089a00f4(puVar6[4] * 0x18);
          local_50 = **(int **)(iVar4 + 4) + puVar6[5];
          iVar5 = puVar6[4];
          iVar4 = 0;
          local_48 = iVar1;
          if (0 < iVar5) {
            iVar3 = iVar1 + 4;
            iVar2 = iVar1 + 0xc;
            do {
              FUN_0895e9bc(local_4c,iVar1,&local_50,puVar6[1],piVar8,piVar7);
              (**(code **)(*param_3 + 0x14))
                        ((int)param_3 + (int)*(short *)(*param_3 + 0x10),iVar1,iVar3,iVar2);
              iVar4 = iVar4 + 1;
              iVar1 = iVar1 + 0x18;
              iVar3 = iVar3 + 0x18;
              iVar2 = iVar2 + 0x18;
            } while (iVar4 < iVar5);
            iVar5 = puVar6[4];
          }
          FUN_089a0520(*puVar6,0x19f,iVar5,0,local_48);
          local_40 = local_40 + 1;
          local_44 = local_44 + 0x18;
        } while (local_40 < local_38);
      }
      local_30 = local_30 + 1;
      local_34 = local_34 + 0x34;
    } while (local_30 < local_2c);
  }
  return;
}

