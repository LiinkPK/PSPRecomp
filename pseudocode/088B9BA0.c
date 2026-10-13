/* Entry 0x088B9BA0 | file offset 0x000B6B78 | FUN_088b9ba0 | bytes 520 */

int FUN_088b9ba0(short *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  short *local_40;
  int local_3c;
  int local_34;
  
  iVar2 = FUN_088b84e0(param_3);
  local_34 = 0;
  if ((0 < iVar2 + param_6) && (iVar3 = FUN_088b1bc0(param_4), iVar3 != 0)) {
    iVar9 = 0;
    if (0 < *(int *)(iVar3 + 4)) {
      iVar7 = param_5 + param_6 * 2;
      local_3c = 0;
      local_40 = param_1;
      do {
        psVar8 = (short *)(*(int *)(iVar3 + 8) + local_3c);
        if ((iVar2 + param_6 < (int)psVar8[1]) ||
           (iVar4 = FUN_088b8414(param_3,(int)*psVar8,1), iVar4 != 0)) {
          iVar4 = *(int *)(iVar3 + 4);
        }
        else {
          bVar1 = true;
          iVar4 = 0;
          psVar6 = psVar8 + 2;
          do {
            if ((*psVar6 != -1) &&
               (((iVar5 = FUN_088b8414(param_3,(int)*psVar6,1), iVar5 == 0 ||
                 ((*(ushort *)(iVar5 + 4) & 2) == 0)) &&
                (iVar5 = FUN_088ba77c(param_5,iVar7,psVar6), iVar5 == iVar7)))) {
              bVar1 = false;
              break;
            }
            iVar4 = iVar4 + 1;
            psVar6 = psVar6 + 1;
          } while (iVar4 < 2);
          if (bVar1) {
            if (param_2 <= local_34) {
              return local_34;
            }
            local_34 = local_34 + 1;
            *local_40 = *psVar8;
            local_40 = local_40 + 1;
          }
          iVar4 = *(int *)(iVar3 + 4);
        }
        iVar9 = iVar9 + 1;
        local_3c = local_3c + 8;
      } while (iVar9 < iVar4);
    }
  }
  return local_34;
}

